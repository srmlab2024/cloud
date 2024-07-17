sudo yum update –y
sudo yum install epel-release –y
sudo yum install ansible –y
ansible –version


// FOR creating roles ONLY
sudo mkdir -p /etc/ansible/roles
cd /etc/ansible/roles
for role_name in "role1" "role2" "role3"; do
sudo ansible-galaxy init $role_name
done
sudo chown -R $USER:$USER /etc/ansible/roles/role1
sudo chown -R $USER:$USER /etc/ansible/roles/role2
sudo chown -R $USER:$USER /etc/ansible/roles/role3
sudo chmod -R u+w /etc/ansible/roles/role1
sudo chmod -R u+w /etc/ansible/roles/role2
sudo chmod -R u+w /etc/ansible/roles/role3

  for role_name in "role1" "role2" "role3"; do
    echo "Editing tasks for $role_name"
    cd /etc/ansible/roles/$role_name/tasks
    echo "- name: Example task" >> main.yml
    echo "  debug:" >> main.yml
    echo "    msg: 'This is an example task for $role_name'" >> main.yml
done

sudo mkdir -p /etc/ansible/playbooks

sudo chown -R $USER:$USER /etc/ansible/playbooks
sudo chmod u+w /etc/ansible/playbooks

cd /etc/ansible/playbooks
echo "- name: Example Playbook" > example_playbook.yml
echo "  hosts: localhost" >> example_playbook.yml
echo "  roles:" >> example_playbook.yml
for role_name in "role1" "role2" "role3"; do
    echo "    - $role_name" >> example_playbook.yml
done

ansible-playbook /etc/ansible/playbooks/example_playbook.yml
