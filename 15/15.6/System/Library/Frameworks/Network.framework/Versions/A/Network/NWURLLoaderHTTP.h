@class NSString, NWConcrete_nw_connection, NWURLSessionTaskConfiguration, NSURLRequest, NWURLError, NSObject, NSCachedURLResponse, NWURLLoaderCache;
@protocol NWURLSessionRequestBodyProvider, OS_sec_trust, OS_nw_content_context, OS_nw_protocol_metadata, OS_nw_http_fields, NWURLLoaderClient, OS_dispatch_queue;

@interface NWURLLoaderHTTP : NSObject <NWURLLoader> {
    char _pendingErrorFromFailedConnection;
    char _ready;
    char _receivedResponseHeader;
    char _pendingCompletion;
    char _protocolSwitched;
    char _becameStream;
    char _cancelled;
    char _allowCaching;
    char _loadingFromCache;
    char _revalidateCachedResponse;
    char _requestCompleteInternal;
    char _requireH1;
    char _hasCustomProxyConfigs;
    char _preConnectedRetryCount;
    NSURLRequest *_request;
    long long _bodyKnownSize;
    NWURLSessionTaskConfiguration *_configuration;
    id<NWURLLoaderClient> _client;
    NSObject<OS_dispatch_queue> *_queue;
    id<NWURLSessionRequestBodyProvider> _requestBodyProvider;
    NWConcrete_nw_connection *_connection;
    NSObject<OS_nw_content_context> *_requestContext;
    NWURLError *_pendingError;
    NWURLLoaderCache *_cache;
    NSCachedURLResponse *_cachedResponseFound;
    unsigned long long _cachedResponseDataOffset;
    NSCachedURLResponse *_cachedResponseToStore;
    NSString *_multipartBoundary;
    id /* block */ _responseCompletionHandler;
    id /* block */ _requestCompletionHandler;
    NSObject<OS_nw_protocol_metadata> *_httpConnectionMetadata;
    void *_responseStallTimer;
    NSObject<OS_nw_http_fields> *_trailerFieldsInternal;
    NSObject<OS_sec_trust> *_peerTrustInternal;
}

@property (readonly, nonatomic) NSString *multipartMixedReplaceBoundary;
@property (readonly, nonatomic) NSObject<OS_sec_trust> *peerTrust;
@property (readonly, nonatomic) char requestComplete;
@property (readonly, nonatomic) NSObject<OS_nw_http_fields> *trailerFields;
@property (readonly, nonatomic) NWConcrete_nw_connection *underlyingConnection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)stop;
- (void)start:(id /* block */)a0;
- (char)allowsWriteAfterBecomingStream;
- (char)canHandleRedirectionToRequest:(id)a0;
- (void)notifyRequestCompletion:(id /* block */)a0;
- (void)readDataOfMinimumIncompleteLength:(unsigned long long)a0 maximumLength:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (void)readResponse:(id /* block */)a0;
- (void)restartStallTimer:(id)a0;
- (id)takeCachedResponse;
- (void)updateClient:(id)a0;
- (void)writeData:(id)a0 complete:(char)a1 completionHandler:(id /* block */)a2;

@end
