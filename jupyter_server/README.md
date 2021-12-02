## Install Python
[Python 3.8](https://github.com/6a16ec/instructions/tree/main/python3.8) <br />
[Python 3.9](https://github.com/6a16ec/instructions/tree/main/python3.9) <br />
[Python 3.10](https://github.com/6a16ec/instructions/tree/main/python3.10)

## Create and activate venv
```
python3.10 -m venv venv
source venv/bin/activate
```

## Installing Jypeter
```
python -m pip install wheel
python -m pip install jupyter
```

### Activate venv & Running Jypeter
```
source venv/bin/activate
nohup jupyter notebook --allow-root --ip=0.0.0.0 --port=80 &
```


### Congratulations, Jypeter Notebook Available
http://185.191.22.123

## The Older Way
### Activate venv & Running Jypeter
```
source venv/bin/activate
nohup jupyter notebook --allow-root &
```

### For connection, In PowerShell, enter the command
```
ssh -L  8000:localhost:8888 root@185.117.119.210
```

### Congratulations, Jypeter Notebook Available
http://localhost:8000/
