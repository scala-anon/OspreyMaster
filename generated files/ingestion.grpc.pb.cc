// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: ingestion.proto

#include "ingestion.pb.h"
#include "ingestion.grpc.pb.h"

#include <functional>
#include <grpcpp/support/async_stream.h>
#include <grpcpp/support/async_unary_call.h>
#include <grpcpp/impl/channel_interface.h>
#include <grpcpp/impl/client_unary_call.h>
#include <grpcpp/support/client_callback.h>
#include <grpcpp/support/message_allocator.h>
#include <grpcpp/support/method_handler.h>
#include <grpcpp/impl/rpc_service_method.h>
#include <grpcpp/support/server_callback.h>
#include <grpcpp/impl/server_callback_handlers.h>
#include <grpcpp/server_context.h>
#include <grpcpp/impl/service_type.h>
#include <grpcpp/support/sync_stream.h>
namespace dp {
namespace service {
namespace ingestion {

static const char* DpIngestionService_method_names[] = {
  "/dp.service.ingestion.DpIngestionService/registerProvider",
  "/dp.service.ingestion.DpIngestionService/ingestData",
  "/dp.service.ingestion.DpIngestionService/ingestDataStream",
  "/dp.service.ingestion.DpIngestionService/ingestDataBidiStream",
  "/dp.service.ingestion.DpIngestionService/queryRequestStatus",
};

std::unique_ptr< DpIngestionService::Stub> DpIngestionService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< DpIngestionService::Stub> stub(new DpIngestionService::Stub(channel, options));
  return stub;
}

DpIngestionService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options)
  : channel_(channel), rpcmethod_registerProvider_(DpIngestionService_method_names[0], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_ingestData_(DpIngestionService_method_names[1], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_ingestDataStream_(DpIngestionService_method_names[2], options.suffix_for_stats(),::grpc::internal::RpcMethod::CLIENT_STREAMING, channel)
  , rpcmethod_ingestDataBidiStream_(DpIngestionService_method_names[3], options.suffix_for_stats(),::grpc::internal::RpcMethod::BIDI_STREAMING, channel)
  , rpcmethod_queryRequestStatus_(DpIngestionService_method_names[4], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status DpIngestionService::Stub::registerProvider(::grpc::ClientContext* context, const ::dp::service::ingestion::RegisterProviderRequest& request, ::dp::service::ingestion::RegisterProviderResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::dp::service::ingestion::RegisterProviderRequest, ::dp::service::ingestion::RegisterProviderResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_registerProvider_, context, request, response);
}

void DpIngestionService::Stub::async::registerProvider(::grpc::ClientContext* context, const ::dp::service::ingestion::RegisterProviderRequest* request, ::dp::service::ingestion::RegisterProviderResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::dp::service::ingestion::RegisterProviderRequest, ::dp::service::ingestion::RegisterProviderResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_registerProvider_, context, request, response, std::move(f));
}

void DpIngestionService::Stub::async::registerProvider(::grpc::ClientContext* context, const ::dp::service::ingestion::RegisterProviderRequest* request, ::dp::service::ingestion::RegisterProviderResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_registerProvider_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::dp::service::ingestion::RegisterProviderResponse>* DpIngestionService::Stub::PrepareAsyncregisterProviderRaw(::grpc::ClientContext* context, const ::dp::service::ingestion::RegisterProviderRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::dp::service::ingestion::RegisterProviderResponse, ::dp::service::ingestion::RegisterProviderRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_registerProvider_, context, request);
}

::grpc::ClientAsyncResponseReader< ::dp::service::ingestion::RegisterProviderResponse>* DpIngestionService::Stub::AsyncregisterProviderRaw(::grpc::ClientContext* context, const ::dp::service::ingestion::RegisterProviderRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncregisterProviderRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status DpIngestionService::Stub::ingestData(::grpc::ClientContext* context, const ::dp::service::ingestion::IngestDataRequest& request, ::dp::service::ingestion::IngestDataResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::dp::service::ingestion::IngestDataRequest, ::dp::service::ingestion::IngestDataResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_ingestData_, context, request, response);
}

void DpIngestionService::Stub::async::ingestData(::grpc::ClientContext* context, const ::dp::service::ingestion::IngestDataRequest* request, ::dp::service::ingestion::IngestDataResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::dp::service::ingestion::IngestDataRequest, ::dp::service::ingestion::IngestDataResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_ingestData_, context, request, response, std::move(f));
}

void DpIngestionService::Stub::async::ingestData(::grpc::ClientContext* context, const ::dp::service::ingestion::IngestDataRequest* request, ::dp::service::ingestion::IngestDataResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_ingestData_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::dp::service::ingestion::IngestDataResponse>* DpIngestionService::Stub::PrepareAsyncingestDataRaw(::grpc::ClientContext* context, const ::dp::service::ingestion::IngestDataRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::dp::service::ingestion::IngestDataResponse, ::dp::service::ingestion::IngestDataRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_ingestData_, context, request);
}

::grpc::ClientAsyncResponseReader< ::dp::service::ingestion::IngestDataResponse>* DpIngestionService::Stub::AsyncingestDataRaw(::grpc::ClientContext* context, const ::dp::service::ingestion::IngestDataRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncingestDataRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::ClientWriter< ::dp::service::ingestion::IngestDataRequest>* DpIngestionService::Stub::ingestDataStreamRaw(::grpc::ClientContext* context, ::dp::service::ingestion::IngestDataStreamResponse* response) {
  return ::grpc::internal::ClientWriterFactory< ::dp::service::ingestion::IngestDataRequest>::Create(channel_.get(), rpcmethod_ingestDataStream_, context, response);
}

void DpIngestionService::Stub::async::ingestDataStream(::grpc::ClientContext* context, ::dp::service::ingestion::IngestDataStreamResponse* response, ::grpc::ClientWriteReactor< ::dp::service::ingestion::IngestDataRequest>* reactor) {
  ::grpc::internal::ClientCallbackWriterFactory< ::dp::service::ingestion::IngestDataRequest>::Create(stub_->channel_.get(), stub_->rpcmethod_ingestDataStream_, context, response, reactor);
}

::grpc::ClientAsyncWriter< ::dp::service::ingestion::IngestDataRequest>* DpIngestionService::Stub::AsyncingestDataStreamRaw(::grpc::ClientContext* context, ::dp::service::ingestion::IngestDataStreamResponse* response, ::grpc::CompletionQueue* cq, void* tag) {
  return ::grpc::internal::ClientAsyncWriterFactory< ::dp::service::ingestion::IngestDataRequest>::Create(channel_.get(), cq, rpcmethod_ingestDataStream_, context, response, true, tag);
}

::grpc::ClientAsyncWriter< ::dp::service::ingestion::IngestDataRequest>* DpIngestionService::Stub::PrepareAsyncingestDataStreamRaw(::grpc::ClientContext* context, ::dp::service::ingestion::IngestDataStreamResponse* response, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncWriterFactory< ::dp::service::ingestion::IngestDataRequest>::Create(channel_.get(), cq, rpcmethod_ingestDataStream_, context, response, false, nullptr);
}

::grpc::ClientReaderWriter< ::dp::service::ingestion::IngestDataRequest, ::dp::service::ingestion::IngestDataResponse>* DpIngestionService::Stub::ingestDataBidiStreamRaw(::grpc::ClientContext* context) {
  return ::grpc::internal::ClientReaderWriterFactory< ::dp::service::ingestion::IngestDataRequest, ::dp::service::ingestion::IngestDataResponse>::Create(channel_.get(), rpcmethod_ingestDataBidiStream_, context);
}

void DpIngestionService::Stub::async::ingestDataBidiStream(::grpc::ClientContext* context, ::grpc::ClientBidiReactor< ::dp::service::ingestion::IngestDataRequest,::dp::service::ingestion::IngestDataResponse>* reactor) {
  ::grpc::internal::ClientCallbackReaderWriterFactory< ::dp::service::ingestion::IngestDataRequest,::dp::service::ingestion::IngestDataResponse>::Create(stub_->channel_.get(), stub_->rpcmethod_ingestDataBidiStream_, context, reactor);
}

::grpc::ClientAsyncReaderWriter< ::dp::service::ingestion::IngestDataRequest, ::dp::service::ingestion::IngestDataResponse>* DpIngestionService::Stub::AsyncingestDataBidiStreamRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) {
  return ::grpc::internal::ClientAsyncReaderWriterFactory< ::dp::service::ingestion::IngestDataRequest, ::dp::service::ingestion::IngestDataResponse>::Create(channel_.get(), cq, rpcmethod_ingestDataBidiStream_, context, true, tag);
}

::grpc::ClientAsyncReaderWriter< ::dp::service::ingestion::IngestDataRequest, ::dp::service::ingestion::IngestDataResponse>* DpIngestionService::Stub::PrepareAsyncingestDataBidiStreamRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncReaderWriterFactory< ::dp::service::ingestion::IngestDataRequest, ::dp::service::ingestion::IngestDataResponse>::Create(channel_.get(), cq, rpcmethod_ingestDataBidiStream_, context, false, nullptr);
}

::grpc::Status DpIngestionService::Stub::queryRequestStatus(::grpc::ClientContext* context, const ::dp::service::ingestion::QueryRequestStatusRequest& request, ::dp::service::ingestion::QueryRequestStatusResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::dp::service::ingestion::QueryRequestStatusRequest, ::dp::service::ingestion::QueryRequestStatusResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_queryRequestStatus_, context, request, response);
}

void DpIngestionService::Stub::async::queryRequestStatus(::grpc::ClientContext* context, const ::dp::service::ingestion::QueryRequestStatusRequest* request, ::dp::service::ingestion::QueryRequestStatusResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::dp::service::ingestion::QueryRequestStatusRequest, ::dp::service::ingestion::QueryRequestStatusResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_queryRequestStatus_, context, request, response, std::move(f));
}

void DpIngestionService::Stub::async::queryRequestStatus(::grpc::ClientContext* context, const ::dp::service::ingestion::QueryRequestStatusRequest* request, ::dp::service::ingestion::QueryRequestStatusResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_queryRequestStatus_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::dp::service::ingestion::QueryRequestStatusResponse>* DpIngestionService::Stub::PrepareAsyncqueryRequestStatusRaw(::grpc::ClientContext* context, const ::dp::service::ingestion::QueryRequestStatusRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::dp::service::ingestion::QueryRequestStatusResponse, ::dp::service::ingestion::QueryRequestStatusRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_queryRequestStatus_, context, request);
}

::grpc::ClientAsyncResponseReader< ::dp::service::ingestion::QueryRequestStatusResponse>* DpIngestionService::Stub::AsyncqueryRequestStatusRaw(::grpc::ClientContext* context, const ::dp::service::ingestion::QueryRequestStatusRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncqueryRequestStatusRaw(context, request, cq);
  result->StartCall();
  return result;
}

DpIngestionService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      DpIngestionService_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< DpIngestionService::Service, ::dp::service::ingestion::RegisterProviderRequest, ::dp::service::ingestion::RegisterProviderResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](DpIngestionService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::dp::service::ingestion::RegisterProviderRequest* req,
             ::dp::service::ingestion::RegisterProviderResponse* resp) {
               return service->registerProvider(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      DpIngestionService_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< DpIngestionService::Service, ::dp::service::ingestion::IngestDataRequest, ::dp::service::ingestion::IngestDataResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](DpIngestionService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::dp::service::ingestion::IngestDataRequest* req,
             ::dp::service::ingestion::IngestDataResponse* resp) {
               return service->ingestData(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      DpIngestionService_method_names[2],
      ::grpc::internal::RpcMethod::CLIENT_STREAMING,
      new ::grpc::internal::ClientStreamingHandler< DpIngestionService::Service, ::dp::service::ingestion::IngestDataRequest, ::dp::service::ingestion::IngestDataStreamResponse>(
          [](DpIngestionService::Service* service,
             ::grpc::ServerContext* ctx,
             ::grpc::ServerReader<::dp::service::ingestion::IngestDataRequest>* reader,
             ::dp::service::ingestion::IngestDataStreamResponse* resp) {
               return service->ingestDataStream(ctx, reader, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      DpIngestionService_method_names[3],
      ::grpc::internal::RpcMethod::BIDI_STREAMING,
      new ::grpc::internal::BidiStreamingHandler< DpIngestionService::Service, ::dp::service::ingestion::IngestDataRequest, ::dp::service::ingestion::IngestDataResponse>(
          [](DpIngestionService::Service* service,
             ::grpc::ServerContext* ctx,
             ::grpc::ServerReaderWriter<::dp::service::ingestion::IngestDataResponse,
             ::dp::service::ingestion::IngestDataRequest>* stream) {
               return service->ingestDataBidiStream(ctx, stream);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      DpIngestionService_method_names[4],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< DpIngestionService::Service, ::dp::service::ingestion::QueryRequestStatusRequest, ::dp::service::ingestion::QueryRequestStatusResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](DpIngestionService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::dp::service::ingestion::QueryRequestStatusRequest* req,
             ::dp::service::ingestion::QueryRequestStatusResponse* resp) {
               return service->queryRequestStatus(ctx, req, resp);
             }, this)));
}

DpIngestionService::Service::~Service() {
}

::grpc::Status DpIngestionService::Service::registerProvider(::grpc::ServerContext* context, const ::dp::service::ingestion::RegisterProviderRequest* request, ::dp::service::ingestion::RegisterProviderResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status DpIngestionService::Service::ingestData(::grpc::ServerContext* context, const ::dp::service::ingestion::IngestDataRequest* request, ::dp::service::ingestion::IngestDataResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status DpIngestionService::Service::ingestDataStream(::grpc::ServerContext* context, ::grpc::ServerReader< ::dp::service::ingestion::IngestDataRequest>* reader, ::dp::service::ingestion::IngestDataStreamResponse* response) {
  (void) context;
  (void) reader;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status DpIngestionService::Service::ingestDataBidiStream(::grpc::ServerContext* context, ::grpc::ServerReaderWriter< ::dp::service::ingestion::IngestDataResponse, ::dp::service::ingestion::IngestDataRequest>* stream) {
  (void) context;
  (void) stream;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status DpIngestionService::Service::queryRequestStatus(::grpc::ServerContext* context, const ::dp::service::ingestion::QueryRequestStatusRequest* request, ::dp::service::ingestion::QueryRequestStatusResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace dp
}  // namespace service
}  // namespace ingestion

