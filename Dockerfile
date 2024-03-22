# Use Ubuntu as the base image
FROM ubuntu:latest

# Avoid warnings by switching to noninteractive
ENV DEBIAN_FRONTEND=noninteractive

# Install C++ build tools, wget for downloading Premake, and clean up the apt cache to reduce image size
RUN apt-get update && \
    apt-get -y install build-essential cmake git gdb gdbserver rsync zip wget && \
    apt-get autoremove -y && \
    apt-get clean -y && \
    rm -rf /var/lib/apt/lists/*

# Set the Premake version
ARG PREMAKE_VERSION=5.0.0-alpha16

# Download and install Premake
RUN wget https://github.com/premake/premake-core/releases/download/v${PREMAKE_VERSION}/premake-${PREMAKE_VERSION}-linux.tar.gz \
    && tar -xzvf premake-${PREMAKE_VERSION}-linux.tar.gz \
    && mv premake5 /usr/local/bin/premake5 \
    && rm premake-${PREMAKE_VERSION}-linux.tar.gz

# Switch back to dialog for any ad-hoc use of apt-get
ENV DEBIAN_FRONTEND=dialog

# Set the working directory in the container
WORKDIR /workspace

# The following lines are commented out as optional steps. Uncomment and modify as needed:
# Set the default user. Omit if you want to run as root.
# RUN useradd -m vscode
# USER vscode

# Uncomment this section and fill in the extension IDs to install VS Code extensions.
# RUN code --install-extension ms-vscode.cpptools \
#     && code --install-extension another-extension-id

# These ENV lines are optional and can be used to configure your environment
# ENV GCC_VERSION 9
