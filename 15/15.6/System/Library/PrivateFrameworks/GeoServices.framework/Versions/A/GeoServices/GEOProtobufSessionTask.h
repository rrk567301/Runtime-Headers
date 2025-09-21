@class NSError, NSString, GEODataRequestThrottlerToken, PBCodable, GEOApplicationAuditToken, NSObject, GEODataURLSessionTask, GEOClientMetrics, GEOProtobufSession;
@protocol OS_dispatch_queue, GEOProtobufSessionTaskDelegate;

@interface GEOProtobufSessionTask : NSObject <GEODataURLSessionTaskDelegate> {
    Class _responseClass;
    GEODataURLSessionTask *_dataTask;
    GEOProtobufSession *_session;
    id<GEOProtobufSessionTaskDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSError *_error;
    PBCodable *_response;
    struct { int type; union { int raw; int tile; int placeRequest; } subtype; } _requestKind;
    GEOApplicationAuditToken *_auditToken;
    char _completedAsCancelled;
    GEODataRequestThrottlerToken *_throttleToken;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) char completedAsCancelled;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) PBCodable *response;
@property (readonly, nonatomic) unsigned long long outgoingPayloadSize;
@property (readonly, nonatomic) unsigned long long incomingPayloadSize;
@property (readonly, nonatomic) NSString *remoteAddressAndPort;
@property (readonly, nonatomic) GEOClientMetrics *clientMetrics;
@property (readonly, nonatomic) unsigned long long requestedMultipathServiceType;
@property (readonly, nonatomic) char mptcpNegotiated;
@property (readonly, nonatomic) char receivedRNFNotification;
@property (readonly, nonatomic) unsigned int requestTypeCode;
@property (readonly, nonatomic) GEODataURLSessionTask *dataTask;

- (id)init;
- (void).cxx_destruct;
- (void)start;
- (void)cancel;
- (void)dataURLSession:(id)a0 didCompleteTask:(id)a1;
- (char)parseProtocolVersionWithReader:(id)a0;
- (void)_decodeResponseFromTask:(id)a0 completion:(id /* block */)a1;
- (void)completeWithErrorCode:(long long)a0;
- (void)dataURLSession:(id)a0 willSendRequest:(id)a1 forTask:(id)a2 completionHandler:(id /* block */)a3;
- (id)parseInnerProtobufFromData:(id)a0;
- (char)parsePreambleWithReader:(id)a0;
- (id)parseResponseFromResponseData:(id)a0;
- (char)parseResponseTypeWithReader:(id)a0;

@end
