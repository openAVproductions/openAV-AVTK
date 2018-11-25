project(
  'AVTK', 'c', 'cpp',
  meson_version: '>= 0.47.0',
# license: 'GPL-2.0-or-later',
  version: '0.0.1',
)

# Versioning
package_name = meson.project_name()
package_version = meson.project_version()

# Dependencies
cairo_req = '>= 1.15.10'
sndfile_req = '>= 1.0.28'
x11_req = '>= 1.6.0'

cairo_dep = dependency('cairo', version: cairo_req)
sndfile_dep = dependency('sndfile', version: sndfile_req)
x11_dep = dependency('x11', version: sndfile_req)

# Build
avtk_sources = []

avtk_deps = [
  cairo_dep,
  sndfile_dep,
  x11_dep,
]

avtk_incl = []
avtk_c_args = []
avtk_cpp_args = [
  '-DAVTK_SNDFILE',
]

subdir('avtk')

avtk_sta = static_library(
  'avtk', avtk_sources,
  dependencies: avtk_deps,
  include_directories: avtk_incl,
  c_args: avtk_c_args,
  cpp_args: avtk_cpp_args,
  install: false,
)

avtk_dep = declare_dependency(
  link_with: avtk_sta,
  include_directories: include_directories('avtk'),
  dependencies: avtk_deps,
)
