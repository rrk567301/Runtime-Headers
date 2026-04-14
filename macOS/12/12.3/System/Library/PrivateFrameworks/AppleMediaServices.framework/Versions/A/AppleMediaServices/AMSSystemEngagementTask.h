@class NSError, NSString, NSXPCConnection, AMSEngagementRequest, AMSEngagementResult, AMSBagKeySet, NSObject, AMSProcessInfo;
@protocol OS_dispatch_queue, OS_dispatch_group, AMSBagProtocol;

@interface AMSSystemEngagementTask : AMSTask <AMSSystemEngagementTaskClientInterface, AMSBagConsumer>

@property (class, readonly) NSString *bagSubProfile;
@property (class, readonly) NSString *bagSubProfileVersion;
@property (class, readonly) AMSBagKeySet *bagKeySet;

@property (readonly) NSObject<OS_dispatch_queue> *connectionQueue;
@property (retain) NSObject<OS_dispatch_group> *dispatchGroup;
@property (retain) NSError *error;
@property (retain) AMSEngagementResult *result;
@property (retain) NSXPCConnection *underlyingRemoteConnection;
@property (retain) id<AMSBagProtocol> bag;
@property (retain) AMSProcessInfo *clientInfo;
@property (readonly) AMSEngagementRequest *request;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createBagForSubProfile;

- (void).cxx_destruct;
- (id)present;
- (id)_remoteConnection;
- (id)initWithRequest:(id)a0;
- (id)_remoteObjectProxy;
- (id)_newRemoteConnection;
- (id)initWithRequest:(id)a0 bag:(id)a1;
- (id)_snapshotBagDataPromise;
- (void)_activateRemoteEngagementConnectionWithBagData:(id)a0 clientInfoData:(id)a1 engagementRequestData:(id)a2;
- (void)engagementTaskDidFinishWithActivationId:(id)a0 result:(id)a1 error:(id)a2 completion:(id /* block */)a3;
- (void)_remoteConnectionDidDeactivate;

@end
