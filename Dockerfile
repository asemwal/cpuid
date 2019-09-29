FROM gcc:4.9
COPY . /usr/src/cpuid
WORKDIR /usr/src/cpuid
RUN gcc -o cpuid cpuid.c
CMD ["./cpuid"]