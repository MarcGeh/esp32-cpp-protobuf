#!/bin/bash

SOURCE_DIR=$1/src/google/protobuf
TARGET_DIR="$(pwd)/src/google/protobuf"

function copy {
  cp ${SOURCE_DIR}/$1/*.h ${TARGET_DIR}/$1
  cp ${SOURCE_DIR}/$1/*.cc ${TARGET_DIR}/$1
  cp ${SOURCE_DIR}/$1/*.inc ${TARGET_DIR}/$1
  cp ${SOURCE_DIR}/$1/*.proto ${TARGET_DIR}/$1

  rm -f ${TARGET_DIR}/$1/*test* 2>&1
}

if [ -d "$SOURCE_DIR" ]; then
  ### Take action if $DIR exists ###
  echo "Copying files from ${SOURCE_DIR} to ${TARGET_DIR}..."
  rm -fr ${TARGET_DIR}/*

  mkdir -p ${TARGET_DIR}/io
  mkdir -p ${TARGET_DIR}/stubs

  copy .
  copy io
  copy stubs
else
  ###  Control will jump here if $DIR does NOT exists ###
  echo "Error: ${SOURCE_DIR} not found. Can not continue."
  exit 1
fi

