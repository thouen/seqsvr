// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: seqsvr.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "seqsvr.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace zproto {

namespace {

const ::google::protobuf::Descriptor* FetchNextSequenceReq_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  FetchNextSequenceReq_reflection_ = NULL;
const ::google::protobuf::Descriptor* GetCurrentSequenceReq_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  GetCurrentSequenceReq_reflection_ = NULL;
const ::google::protobuf::Descriptor* SequenceRsp_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  SequenceRsp_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_seqsvr_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_seqsvr_2eproto() {
  protobuf_AddDesc_seqsvr_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "seqsvr.proto");
  GOOGLE_CHECK(file != NULL);
  FetchNextSequenceReq_descriptor_ = file->message_type(0);
  static const int FetchNextSequenceReq_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FetchNextSequenceReq, user_id_),
  };
  FetchNextSequenceReq_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      FetchNextSequenceReq_descriptor_,
      FetchNextSequenceReq::default_instance_,
      FetchNextSequenceReq_offsets_,
      -1,
      -1,
      -1,
      sizeof(FetchNextSequenceReq),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FetchNextSequenceReq, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FetchNextSequenceReq, _is_default_instance_));
  GetCurrentSequenceReq_descriptor_ = file->message_type(1);
  static const int GetCurrentSequenceReq_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GetCurrentSequenceReq, user_id_),
  };
  GetCurrentSequenceReq_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      GetCurrentSequenceReq_descriptor_,
      GetCurrentSequenceReq::default_instance_,
      GetCurrentSequenceReq_offsets_,
      -1,
      -1,
      -1,
      sizeof(GetCurrentSequenceReq),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GetCurrentSequenceReq, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GetCurrentSequenceReq, _is_default_instance_));
  SequenceRsp_descriptor_ = file->message_type(2);
  static const int SequenceRsp_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SequenceRsp, sequence_),
  };
  SequenceRsp_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      SequenceRsp_descriptor_,
      SequenceRsp::default_instance_,
      SequenceRsp_offsets_,
      -1,
      -1,
      -1,
      sizeof(SequenceRsp),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SequenceRsp, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SequenceRsp, _is_default_instance_));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_seqsvr_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      FetchNextSequenceReq_descriptor_, &FetchNextSequenceReq::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      GetCurrentSequenceReq_descriptor_, &GetCurrentSequenceReq::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      SequenceRsp_descriptor_, &SequenceRsp::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_seqsvr_2eproto() {
  delete FetchNextSequenceReq::default_instance_;
  delete FetchNextSequenceReq_reflection_;
  delete GetCurrentSequenceReq::default_instance_;
  delete GetCurrentSequenceReq_reflection_;
  delete SequenceRsp::default_instance_;
  delete SequenceRsp_reflection_;
}

void protobuf_AddDesc_seqsvr_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AddDesc_seqsvr_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\014seqsvr.proto\022\006zproto\"\'\n\024FetchNextSeque"
    "nceReq\022\017\n\007user_id\030\001 \001(\r\"(\n\025GetCurrentSeq"
    "uenceReq\022\017\n\007user_id\030\001 \001(\r\"\037\n\013SequenceRsp"
    "\022\020\n\010sequence\030\001 \001(\004B#\n\027com.zchat.engine.z"
    "protoB\006ZProtoH\002b\006proto3", 183);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "seqsvr.proto", &protobuf_RegisterTypes);
  FetchNextSequenceReq::default_instance_ = new FetchNextSequenceReq();
  GetCurrentSequenceReq::default_instance_ = new GetCurrentSequenceReq();
  SequenceRsp::default_instance_ = new SequenceRsp();
  FetchNextSequenceReq::default_instance_->InitAsDefaultInstance();
  GetCurrentSequenceReq::default_instance_->InitAsDefaultInstance();
  SequenceRsp::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_seqsvr_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_seqsvr_2eproto {
  StaticDescriptorInitializer_seqsvr_2eproto() {
    protobuf_AddDesc_seqsvr_2eproto();
  }
} static_descriptor_initializer_seqsvr_2eproto_;

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int FetchNextSequenceReq::kUserIdFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

FetchNextSequenceReq::FetchNextSequenceReq()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:zproto.FetchNextSequenceReq)
}

void FetchNextSequenceReq::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

FetchNextSequenceReq::FetchNextSequenceReq(const FetchNextSequenceReq& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:zproto.FetchNextSequenceReq)
}

void FetchNextSequenceReq::SharedCtor() {
    _is_default_instance_ = false;
  _cached_size_ = 0;
  user_id_ = 0u;
}

FetchNextSequenceReq::~FetchNextSequenceReq() {
  // @@protoc_insertion_point(destructor:zproto.FetchNextSequenceReq)
  SharedDtor();
}

void FetchNextSequenceReq::SharedDtor() {
  if (this != default_instance_) {
  }
}

void FetchNextSequenceReq::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* FetchNextSequenceReq::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return FetchNextSequenceReq_descriptor_;
}

const FetchNextSequenceReq& FetchNextSequenceReq::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_seqsvr_2eproto();
  return *default_instance_;
}

FetchNextSequenceReq* FetchNextSequenceReq::default_instance_ = NULL;

FetchNextSequenceReq* FetchNextSequenceReq::New(::google::protobuf::Arena* arena) const {
  FetchNextSequenceReq* n = new FetchNextSequenceReq;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void FetchNextSequenceReq::Swap(FetchNextSequenceReq* other) {
  if (other == this) return;
  InternalSwap(other);
}
void FetchNextSequenceReq::InternalSwap(FetchNextSequenceReq* other) {
  GetReflection()->Swap(this, other);}

::google::protobuf::Metadata FetchNextSequenceReq::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = FetchNextSequenceReq_descriptor_;
  metadata.reflection = FetchNextSequenceReq_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// FetchNextSequenceReq

// optional uint32 user_id = 1;
void FetchNextSequenceReq::clear_user_id() {
  user_id_ = 0u;
}
 ::google::protobuf::uint32 FetchNextSequenceReq::user_id() const {
  // @@protoc_insertion_point(field_get:zproto.FetchNextSequenceReq.user_id)
  return user_id_;
}
 void FetchNextSequenceReq::set_user_id(::google::protobuf::uint32 value) {
  
  user_id_ = value;
  // @@protoc_insertion_point(field_set:zproto.FetchNextSequenceReq.user_id)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int GetCurrentSequenceReq::kUserIdFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

GetCurrentSequenceReq::GetCurrentSequenceReq()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:zproto.GetCurrentSequenceReq)
}

void GetCurrentSequenceReq::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

GetCurrentSequenceReq::GetCurrentSequenceReq(const GetCurrentSequenceReq& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:zproto.GetCurrentSequenceReq)
}

void GetCurrentSequenceReq::SharedCtor() {
    _is_default_instance_ = false;
  _cached_size_ = 0;
  user_id_ = 0u;
}

GetCurrentSequenceReq::~GetCurrentSequenceReq() {
  // @@protoc_insertion_point(destructor:zproto.GetCurrentSequenceReq)
  SharedDtor();
}

void GetCurrentSequenceReq::SharedDtor() {
  if (this != default_instance_) {
  }
}

void GetCurrentSequenceReq::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* GetCurrentSequenceReq::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return GetCurrentSequenceReq_descriptor_;
}

const GetCurrentSequenceReq& GetCurrentSequenceReq::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_seqsvr_2eproto();
  return *default_instance_;
}

GetCurrentSequenceReq* GetCurrentSequenceReq::default_instance_ = NULL;

GetCurrentSequenceReq* GetCurrentSequenceReq::New(::google::protobuf::Arena* arena) const {
  GetCurrentSequenceReq* n = new GetCurrentSequenceReq;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void GetCurrentSequenceReq::Swap(GetCurrentSequenceReq* other) {
  if (other == this) return;
  InternalSwap(other);
}
void GetCurrentSequenceReq::InternalSwap(GetCurrentSequenceReq* other) {
  GetReflection()->Swap(this, other);}

::google::protobuf::Metadata GetCurrentSequenceReq::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = GetCurrentSequenceReq_descriptor_;
  metadata.reflection = GetCurrentSequenceReq_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// GetCurrentSequenceReq

// optional uint32 user_id = 1;
void GetCurrentSequenceReq::clear_user_id() {
  user_id_ = 0u;
}
 ::google::protobuf::uint32 GetCurrentSequenceReq::user_id() const {
  // @@protoc_insertion_point(field_get:zproto.GetCurrentSequenceReq.user_id)
  return user_id_;
}
 void GetCurrentSequenceReq::set_user_id(::google::protobuf::uint32 value) {
  
  user_id_ = value;
  // @@protoc_insertion_point(field_set:zproto.GetCurrentSequenceReq.user_id)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int SequenceRsp::kSequenceFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

SequenceRsp::SequenceRsp()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:zproto.SequenceRsp)
}

void SequenceRsp::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

SequenceRsp::SequenceRsp(const SequenceRsp& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:zproto.SequenceRsp)
}

void SequenceRsp::SharedCtor() {
    _is_default_instance_ = false;
  _cached_size_ = 0;
  sequence_ = GOOGLE_ULONGLONG(0);
}

SequenceRsp::~SequenceRsp() {
  // @@protoc_insertion_point(destructor:zproto.SequenceRsp)
  SharedDtor();
}

void SequenceRsp::SharedDtor() {
  if (this != default_instance_) {
  }
}

void SequenceRsp::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* SequenceRsp::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return SequenceRsp_descriptor_;
}

const SequenceRsp& SequenceRsp::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_seqsvr_2eproto();
  return *default_instance_;
}

SequenceRsp* SequenceRsp::default_instance_ = NULL;

SequenceRsp* SequenceRsp::New(::google::protobuf::Arena* arena) const {
  SequenceRsp* n = new SequenceRsp;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void SequenceRsp::Swap(SequenceRsp* other) {
  if (other == this) return;
  InternalSwap(other);
}
void SequenceRsp::InternalSwap(SequenceRsp* other) {
  GetReflection()->Swap(this, other);}

::google::protobuf::Metadata SequenceRsp::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = SequenceRsp_descriptor_;
  metadata.reflection = SequenceRsp_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// SequenceRsp

// optional uint64 sequence = 1;
void SequenceRsp::clear_sequence() {
  sequence_ = GOOGLE_ULONGLONG(0);
}
 ::google::protobuf::uint64 SequenceRsp::sequence() const {
  // @@protoc_insertion_point(field_get:zproto.SequenceRsp.sequence)
  return sequence_;
}
 void SequenceRsp::set_sequence(::google::protobuf::uint64 value) {
  
  sequence_ = value;
  // @@protoc_insertion_point(field_set:zproto.SequenceRsp.sequence)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace zproto

// @@protoc_insertion_point(global_scope)
