# Emscripten Actions

A very simple example / template for using Emscripten with GitHub Actions and GitHub Pages. I would recommend forking this repository and enabling GitHub Pages in your fork to see how it all works.

## Instructions

### Install Emscripten

I recommend starting with the platform specific notes. For Windows, I also recommend using Command Prompt instead of PowerShell. The bat files may not work as expected in PowerShell.

https://emscripten.org/docs/getting_started/downloads.html#platform-specific-notes

https://emscripten.org/docs/getting_started/downloads.html

Highly recommend checking out the tutorial: https://emscripten.org/docs/getting_started/Tutorial.html

### Running Locally

Compile to WASM:

`emcc main.cpp -o index.html`

Then, serve locally using any method you prefer. For the sake of example, here are instructions for Python and npm HTTP servers.

#### Python 3's http.server

*Defaults to hosting at localhost:8000*

`python -m http.server`

#### npm http-server

Install globally:

`npm i -g http-server`

Run from repo root directory:

`http-server`

The output will tell you where you can access the application, and usually you can just Ctrl+Click the first link.

### GitHub Actions

You may need to enable GitHub Pages for your repo / fork by navigating to `Settings > Pages` and settings Source to "GitHub Actions".

Uses setup-emsdk: https://github.com/mymindstorm/setup-emsdk

*This pipeline caches a specified version of emsdk, and this may not be a desired behavior or emsdk version for your project, so please refer to the setup-emsdk README for other setup options.*

On push to master branch, the mail.yml workflow builds main.cpp and deploys the output `index.*` files to GitHub Pages, which by default uses the URL format `https://{username}.github.io/{repository}/`

## Known Issues

Fullscreen button does not work.
