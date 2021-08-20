## Install Python
[Python3.9](https://github.com/6a16ec/instructions/tree/main/python3.9)

## Installing Jypeter
```
source venv/bin/activate
python -m pip install jupyter
```

## In PowerShell, enter the command
```
ssh -L  8000:localhost:8888 root@185.117.119.210
```

## Activate venv & Running Jypeter
```
source venv/bin/activate
nohup jupyter notebook --allow-root &
```

## Congratulations, Jypeter Notebook Available
http://localhost:8000/
