AUTOMAKE_OPTIONS = subdir-objects

lib_LTLIBRARIES = libhazel.la
libhazel_la_SOURCES = hazel/Application.cpp hazel/Log.cpp
libhazel_includedir = $(includedir)
libhazel_include_HEADERS = hazel.h
libhazel_la_CXXFLAGS = -Wall -Werror -std=c++17 -fPIC -shared -I$(srcdir)/vendor/spdlog/include/
