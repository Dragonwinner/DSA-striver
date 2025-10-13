#!/bin/bash
# filepath: push-to-github.sh

# Colors for output
RED='\033[0;31m'
GREEN='\033[0;32m'
YELLOW='\033[1;33m'
NC='\033[0m' # No Color

# Function to print colored output
print_status() {
    echo -e "${GREEN}[INFO]${NC} $1"
}

print_warning() {
    echo -e "${YELLOW}[WARNING]${NC} $1"
}

print_error() {
    echo -e "${RED}[ERROR]${NC} $1"
}

# Check if we're in a git repository
if [ ! -d ".git" ]; then
    print_error "Not a git repository. Please run 'git init' first."
    exit 1
fi

# Get commit message from user input or use default
if [ -z "$1" ]; then
    echo "Enter commit message (or press Enter for default):"
    read -r commit_message
    if [ -z "$commit_message" ]; then
        commit_message="Auto-commit: $(date '+%Y-%m-%d %H:%M:%S')"
    fi
else
    commit_message="$1"
fi

# Check if there are any changes to commit
if git diff --quiet && git diff --cached --quiet; then
    print_warning "No changes to commit."
    exit 0
fi

print_status "Adding all changes..."
git add .

print_status "Committing changes with message: '$commit_message'"
if git commit -m "$commit_message"; then
    print_status "Commit successful!"
else
    print_error "Commit failed!"
    exit 1
fi

# Get current branch name
current_branch=$(git branch --show-current)
print_status "Current branch: $current_branch"

# Check if remote origin exists
if ! git remote get-url origin > /dev/null 2>&1; then
    print_error "No remote 'origin' found. Please add a remote repository first:"
    print_error "git remote add origin <your-repo-url>"
    exit 1
fi

print_status "Pushing to origin/$current_branch..."
if git push origin "$current_branch"; then
    print_status "Successfully pushed to GitHub!"
else
    print_error "Push failed! You may need to pull first or resolve conflicts."
    print_warning "Try running: git pull origin $current_branch"
    exit 1
fi

print_status "All done! Your code has been pushed to GitHub."