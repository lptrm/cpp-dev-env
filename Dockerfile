# Use Ubuntu as the base image
FROM ubuntu:latest

# Avoid warnings by switching to noninteractive
ENV DEBIAN_FRONTEND=noninteractive

# This will make apt-get install without question
ARG DEBIAN_FRONTEND=noninteractive

# Install C++ build tools and clean up the apt cache to reduce image size
RUN apt-get update && \
    apt-get -y install build-essential cmake git gdb gdbserver rsync zip && \
    apt-get autoremove -y && \
    apt-get clean -y && \
    rm -rf /var/lib/apt/lists/*

# Switch back to dialog for any ad-hoc use of apt-get
ENV DEBIAN_FRONTEND=dialog

# Set the working directory in the container
WORKDIR /workspace

# [Optional] Set the default user. Omit if you want to run as root.
# RUN useradd -m vscode
# USER vscode

# [Optional] Uncomment this section and fill in the extension IDs to install VS Code extensions.
# RUN code --install-extension ms-vscode.cpptools \
#     && code --install-extension another-extension-id

# The following ENV lines are not necessary, but can be helpful for configuring your environment
# ENV GCC_VERSION 9
