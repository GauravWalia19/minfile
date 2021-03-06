# MINFILE

It is a **cli application** to **generate min file** size easily. For example **file.css to file.min.css**.

[![Build Status](https://travis-ci.com/GauravWalia19/minfile.svg?branch=master)](https://travis-ci.com/GauravWalia19/minfile)

## DEPENDENCIES

* gcc compiler
* bash/powershell shell

## PREQUESTIES

* Must have little CLI usage experience (Beginner level)
* Know how to run bash/powershell scripts
* Compiling and running c programs

## FILETYPE SUPPORT

* css
* scss
* json
* html (alpha)
* js (alpha)
* c (alpha)
* c++ (alpha)
* c# (partially supported)
* java (partially supported)

## BUILD

### LINUX

For building in your **linux distro** use

```bash
bash build.bash
```

Select **Y** for release/using new update. Now you have fresh binary in **bin** folder for your distro.

### WINDOWS

For building in your **Windows** use

```pwsh
pwsh build.ps1
```

Select **Y** for release/using new update.Now you have fresh binary in **bin** folder for your Windows.

## TESTING

Feel cool because you can test our application also. For that follow below steps

* Open terminal or cmd in repo root folder
* Go to test directory and see test output using commands:
* **LINUX**

```bash
cd test             # Navigate to test directory
bash test.bash      # running bash script
```

* **WINDOWS**

```powershell
Set-Location test   # Navigate to test directory
pwsh test.ps1       # running powershell script
```

* Enter the filename to convert. Now you can see converted min file in **mfiles/tested** directory.

## USAGE

**Please copy this binary on same location as that of your file which you want to convert.For right use copy your file to bin folder.**

Navigate to bin directory

### Using c binary

```bash
./minfile filename.css
```

### Using bash/powershell script

```bash
bash minfile.bash
```

```pwsh
pwsh minfile.ps1
```

**You will see new file of name `filename.min.css` present in mfiles folder. Open that file and see the output.**

## Documentation

Releasing soon...

## LICENSE

[MIT License](LICENSE)

:copyright: 2019 Gaurav Walia