## Installing Python 3.9
```
sudo apt-get install -y software-properties-common
sudo add-apt-repository -y ppa:deadsnakes/ppa
sudo apt-get update --ignore-missing
sudo apt install -y  python3.9-dev python3.9-venv
```

## Installing the pip package manager
wget https://bootstrap.pypa.io/get-pip.py
python3.9 get-pip.py
rm get-pip.py


## Usage

```python
import foobar

foobar.pluralize('word') # returns 'words'
foobar.pluralize('goose') # returns 'geese'
foobar.singularize('phenomena') # returns 'phenomenon'
```

## Contributing
Pull requests are welcome. For major changes, please open an issue first to discuss what you would like to change.

Please make sure to update tests as appropriate.

## License
[MIT](https://choosealicense.com/licenses/mit/)
