@class NSObject, NSXPCConnection;
@protocol CLEEDRequestDelegate, OS_dispatch_queue;

@interface CLEEDHelper : NSObject <CLEEDInterface, CLEEDRequestDelegate>

@property (weak, nonatomic) id<CLEEDRequestDelegate> helperDelegate;
@property (retain, nonatomic) NSXPCConnection *fConnection;
@property (readonly, weak, nonatomic) NSObject<OS_dispatch_queue> *fClientQueue;

+ (long long)validateServerCertificateChallenge:(id)a0;

- (void)cleanup;
- (id)initWithDelegate:(id)a0 queue:(id)a1;
- (void)handleInterruption;
- (void)dealloc;
- (void).cxx_destruct;
- (void)fetchMitigationsWithCompletion:(id /* block */)a0;
- (void)fetchCloakingKeyWithCompletion:(id /* block */)a0;
- (void)fetchAdrPreCachingStatusWithCompletion:(id /* block */)a0;
- (void)fetchAllPendingRequestsWithCompletion:(id /* block */)a0;
- (void)fetchCurrentMediaUploadRequestWithCompletion:(id /* block */)a0;
- (void)fetchCurrentStreamingRequestWithCompletion:(id /* block */)a0;
- (void)fetchEmergencyContactNamesWithCompletion:(id /* block */)a0;
- (void)fetchPreCachedAdrEnablementStatusWithCompletion:(id /* block */)a0;
- (void)handleRemoteProxyError:(id)a0 forProcessIdentifier:(int)a1;
- (void)handleResponse:(BOOL)a0 forRequest:(id)a1 completion:(id /* block */)a2;
- (void)mediaUploadList:(id)a0 forRequestID:(id)a1 completion:(id /* block */)a2;
- (void)notifyHelperInvalidation;
- (void)notifyMitigationNeeded:(id)a0;
- (void)notifyNewRequestAvailable;
- (void)streamingSessionEndedForRequestID:(id)a0 completion:(id /* block */)a1;

@end
