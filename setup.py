from distutils.core import setup, Extension
import os


PACKAGE = 'ev2'
SOURCES = [
    'ev2/mod_ev2.c',
]

README = open('README.rst').read().strip() if os.path.isfile('README.rst') else ''

ev2_module = Extension('ev2._ev2', SOURCES,
                        libraries=['ev'],
                        language='c')

setup(name='pyev2',
      version='0.1',
      author='Sergey Shepelev',
      author_email='temotor@gmail.com',
      url='http://github.com/temoto/pyev2',
      packages=[PACKAGE],
      description="pyev2 is python binding to ev library by Marc Lehmann and Emanuele Giaquinta.",
      long_description=README,
      ext_modules=[ev2_module],
      license='MIT License',
     )
