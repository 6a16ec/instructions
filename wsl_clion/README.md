## Preparing apt-get
```
sudo apt-get update
```

## Installing auxiliary components
```
sudo apt-get install -y build-essential libssl-dev
```

sudo add-apt-repository ppa:jonathonf/gcc-7.1

sudo apt install gcc-7
sudo ln -s /usr/bin/gcc-7 /usr/local/bin/gcc-7

## Installing gcc, g++, make
```
sudo apt install -y gcc
sudo apt install -y g++
sudo apt install -y make
```

## Installing cmake
```
wget https://github.com/Kitware/CMake/releases/download/v3.20.0/cmake-3.20.0.tar.gz
tar -zxvf cmake-3.20.0.tar.gz
cd cmake-3.20.0
./bootstrap
make
sudo make install
```
Actual CMake path: /usr/local/bin/cmake

## Installing gdb
```
sudo apt install -y gdb
```

## Installing pip
```
sudo apt install -y python3-pip
```
