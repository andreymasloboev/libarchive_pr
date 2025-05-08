from conan import ConanFile
from conan.tools.cmake import cmake_layout


class TestLibarchive(ConanFile):
    settings = "os", "compiler", "build_type", "arch"
    generators = "CMakeDeps", "CMakeToolchain"

    def requirements(self):
        self.requires("openssl/3.2.1")

    def layout(self):
        cmake_layout(self)
