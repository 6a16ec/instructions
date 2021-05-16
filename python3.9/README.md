## Installing Python
```
sudo apt-get install -y software-properties-common
sudo add-apt-repository -y ppa:deadsnakes/ppa
sudo apt-get update --ignore-missing
sudo apt install -y  python3.9-dev python3.9-venv
```

## Installing the pip package manager
```
wget https://bootstrap.pypa.io/get-pip.py
python3.9 get-pip.py
rm get-pip.py
```

## Create and activate venv
```
python3.9 -m venv venv
source venv/bin/activate
```
