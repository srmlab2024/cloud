sudo yum install git
git --version
//Initialize the local directory as a Git repository
git init 
//Stage the files for the first commit by adding them to the local repository
git add filename
//By “git status“ you can see the staged files after that Commit the files that you’ve staged in your local repository
git commit -m "message"
//List all of the branches in your repository
git branch
//Create a new branch
git branch branch_name
//To navigate between the branches git checkout is used. To create a new branch and switch on it
git checkout -b new_branch_name
//for latest changes
git fetch
//latest changes
git pull
//undo change
git checkout --file
