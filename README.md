# docker-debug
Example Repository for attaching to a built Docker container and debugging local files

## CPP
To see this eample in action you'll need to build the container. Thie document assumes you have Docker installed on the machine and are familiar with docker commands in general.

1. Build the container: `docker build . --build-arg PROJECT_SRC=<PROJECT_SRC_IN_CONTAINER> -t <IMAGE_NAME>`
2. Run the container: `docker run --rm -ti <IMAGE_NAME>`
  > You should be asked for two integer inputs.
  > To make the bug in the code obvious, choose numbers >= 10.
  ```
  Enter two numbers to add together
  10
  30
  Adding 10 and 30
  Result: 300
  ```
3. Debug the container: `./debug_image <IMAGE_NAME> $(pwd)/cpp <PROJECT_SRC_IN_CONTAINER>`.
   The three arguments are
   - The name of the image built from step 1.
   - The local directory where the application code resides.
   - The location in the container where you are mounting your local application directory.
  > You should get dropped into the container and you can cd into `$PROJECT_MNT`.
  > From there, make changes to the `library.cpp` file (or add a new document)
  > and you can see the changes reflected on your local machine.
