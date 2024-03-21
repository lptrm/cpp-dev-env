# C++-DEV-ENV

C++ development environment for my studies.

## Description

Captures my learning progress during the 4th semester of my studies of Software Engineering at the HHN.

## Getting Started

### Dependencies

Visual Studio Code (+ Dev Containers Extension)

Docker

### Installing

How to get a local copy up and running? Provide step by step series of examples that tell how to get a development environment running.

```
https://github.com/lptrm/cpp-dev-env
cd cpp-dev-env
code .
```

Then reopen in container.

## Usage

```bash
mkdir my-project
cd my-project
mkdir bin
touch my-app.cpp
# insert content
g++ -std=c++11 -g my-project/my-app.cpp -o hello-world/bin/my-app
./bin/my-app
```

Or add a `task` in `.vscode/tasks.json` and then run it via the GUI.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

## Acknowledgments

This project makes use of several outstanding tools and resources. A big thank you to the developers and teams behind:

- **GCC/G++** - For compiling the project. More about GCC [here](https://gcc.gnu.org/).
- **CMake** - Used for automating the build process. Check out CMake [here](https://cmake.org/).
- **Visual Studio Code** - My preferred code editor, with excellent support for C++ through extensions. Visit [VS Code](https://code.visualstudio.com/).
- **Docker** - For providing a consistent development environment across different machines. Docker is indispensable for creating isolated environments. Learn more about Docker [here](https://www.docker.com/).
- **Visual Studio Code DevContainers** - This feature significantly simplifies the setup of development environments by utilizing Docker containers, making it easier to onboard new contributors and ensure consistency across development setups. More information on DevContainers can be found [here](https://code.visualstudio.com/docs/remote/containers).

## Contact

Your Name - [me@jan-obernberger.de](mailto:me@jan-obernberger.de)

Project Link: [https://github.com/lptrm/cpp-dev-env](https://github.com/lptrm/cpp-dev-env)

```