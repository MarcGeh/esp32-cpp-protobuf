// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: test.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_test_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_test_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3015000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3015002 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/message_lite.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_test_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_test_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
namespace test {
class TestRequest;
struct TestRequestDefaultTypeInternal;
extern TestRequestDefaultTypeInternal _TestRequest_default_instance_;
}  // namespace test
PROTOBUF_NAMESPACE_OPEN
template<> ::test::TestRequest* Arena::CreateMaybeMessage<::test::TestRequest>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace test {

// ===================================================================

class TestRequest PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::MessageLite /* @@protoc_insertion_point(class_definition:test.TestRequest) */ {
 public:
  inline TestRequest() : TestRequest(nullptr) {}
  virtual ~TestRequest();
  explicit constexpr TestRequest(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  TestRequest(const TestRequest& from);
  TestRequest(TestRequest&& from) noexcept
    : TestRequest() {
    *this = ::std::move(from);
  }

  inline TestRequest& operator=(const TestRequest& from) {
    CopyFrom(from);
    return *this;
  }
  inline TestRequest& operator=(TestRequest&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const TestRequest& default_instance() {
    return *internal_default_instance();
  }
  static inline const TestRequest* internal_default_instance() {
    return reinterpret_cast<const TestRequest*>(
               &_TestRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(TestRequest& a, TestRequest& b) {
    a.Swap(&b);
  }
  inline void Swap(TestRequest* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(TestRequest* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline TestRequest* New() const final {
    return CreateMaybeMessage<TestRequest>(nullptr);
  }

  TestRequest* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<TestRequest>(arena);
  }
  void CheckTypeAndMergeFrom(const ::PROTOBUF_NAMESPACE_ID::MessageLite& from)
    final;
  void CopyFrom(const TestRequest& from);
  void MergeFrom(const TestRequest& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  void DiscardUnknownFields();
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(TestRequest* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "test.TestRequest";
  }
  protected:
  explicit TestRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  std::string GetTypeName() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kTextFieldNumber = 1,
    kIndexFieldNumber = 2,
  };
  // string text = 1;
  void clear_text();
  const std::string& text() const;
  void set_text(const std::string& value);
  void set_text(std::string&& value);
  void set_text(const char* value);
  void set_text(const char* value, size_t size);
  std::string* mutable_text();
  std::string* release_text();
  void set_allocated_text(std::string* text);
  private:
  const std::string& _internal_text() const;
  void _internal_set_text(const std::string& value);
  std::string* _internal_mutable_text();
  public:

  // int32 index = 2;
  void clear_index();
  ::PROTOBUF_NAMESPACE_ID::int32 index() const;
  void set_index(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_index() const;
  void _internal_set_index(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:test.TestRequest)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr text_;
  ::PROTOBUF_NAMESPACE_ID::int32 index_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_test_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// TestRequest

// string text = 1;
inline void TestRequest::clear_text() {
  text_.ClearToEmpty();
}
inline const std::string& TestRequest::text() const {
  // @@protoc_insertion_point(field_get:test.TestRequest.text)
  return _internal_text();
}
inline void TestRequest::set_text(const std::string& value) {
  _internal_set_text(value);
  // @@protoc_insertion_point(field_set:test.TestRequest.text)
}
inline std::string* TestRequest::mutable_text() {
  // @@protoc_insertion_point(field_mutable:test.TestRequest.text)
  return _internal_mutable_text();
}
inline const std::string& TestRequest::_internal_text() const {
  return text_.Get();
}
inline void TestRequest::_internal_set_text(const std::string& value) {
  
  text_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArena());
}
inline void TestRequest::set_text(std::string&& value) {
  
  text_.Set(
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:test.TestRequest.text)
}
inline void TestRequest::set_text(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  text_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(value), GetArena());
  // @@protoc_insertion_point(field_set_char:test.TestRequest.text)
}
inline void TestRequest::set_text(const char* value,
    size_t size) {
  
  text_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:test.TestRequest.text)
}
inline std::string* TestRequest::_internal_mutable_text() {
  
  return text_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArena());
}
inline std::string* TestRequest::release_text() {
  // @@protoc_insertion_point(field_release:test.TestRequest.text)
  return text_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void TestRequest::set_allocated_text(std::string* text) {
  if (text != nullptr) {
    
  } else {
    
  }
  text_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), text,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:test.TestRequest.text)
}

// int32 index = 2;
inline void TestRequest::clear_index() {
  index_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 TestRequest::_internal_index() const {
  return index_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 TestRequest::index() const {
  // @@protoc_insertion_point(field_get:test.TestRequest.index)
  return _internal_index();
}
inline void TestRequest::_internal_set_index(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  index_ = value;
}
inline void TestRequest::set_index(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_index(value);
  // @@protoc_insertion_point(field_set:test.TestRequest.index)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace test

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_test_2eproto
