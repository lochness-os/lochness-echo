# LochNess `echo` utility

## About

* * *

echo command in linux is used to display line of text/string
that are passed as an argument . This is a built in command
that is mostly used in shell scripts and batch files to output
status text to the screen or a file.

## Program Preview

* * *

Please add an image for the user to see.

## Tooling information

* * *

Targeted audience we are building for is LochNess OS users. This project uses
[Meson](https://mesonbuild.com/) `0.56.0` and newer.

## Setup, Compile and Install

* * *

Firstly the users should set up a project build directory before
compiling:

```console
meson setup builddir
```

The next step should be to compile the target of a configured
Meson project:

```console
meson compile -C builddir
```

Then we install the application like so:

```console
meson install -C builddir
```

And finally we run this cool application:

```console
echo <user string>
```

## Contact the developer

* * *

You may find that I have a number of ways that you can contact
me. All of these methods happen to be listed on my blogging platform
[Mike's virtual office](https://michaelbrockus.home.blog/contact/).

Lastly don't forget to have a cup of virtual coffee. Thanks.
