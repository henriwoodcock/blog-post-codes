# What is ifndef?

This is the code associated with my blog post about include guards.

There are two sections, `working_example` and `not_working_example`.

## Usage

To show the import of include guards, try running:

```
g++ not_working_example/main.cc -o main
```

You should get multiple errors about redefinitions. Now try running:

```
g++ working_example/main.cc -o main
```

Using include guards means you can use the same header in mutiple files without redefining already defined constants, variables, functions and structs.
