# eigen_example
A minimal project example demonstrating how to build and use the Eigen library in C++

## Step 1: Install Eigen


```bash
sudo apt update -y && sudo apt install -y libeigen3-dev
```

## Step 2: Clone repo


```bash
git clone https://github.com/artem-kondratew/eigen_example.git
```

## Step 3: Build example

```bash
mkdir eigen_example/build
```

```bash
cmake -S eigen_example -B eigen_example/build
```

```bash
cmake --build eigen_example/build
```

## Step 4: Run example

```bash
./eigen_example/build/executable
```
