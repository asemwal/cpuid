FROM gcc:7
COPY . /usr/src/cpuid
WORKDIR /usr/src/cpuid
RUN  g++ -o cpuid cpuid.c -B . -fpermissive
CMD ["./cpuid"]