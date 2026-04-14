@class NSString, NSMutableDictionary, RPCompanionLinkClient, NSObject;
@protocol OS_dispatch_queue, HMDRapportMessagingReachabilityDelegate, HMDRapportMessagingClientFactory;

@interface HMDRapportMessaging : HMFObject <HMFLogging> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSObject<OS_dispatch_queue> *_workQueue;
    id<HMDRapportMessagingClientFactory> _clientFactory;
    RPCompanionLinkClient *_discoveryClient;
    NSMutableDictionary *_receiverContexts;
    NSMutableDictionary *_deviceClients;
}

@property (weak, nonatomic) id<HMDRapportMessagingReachabilityDelegate> reachabilityDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)logCategory;

- (id)_clientForIDSIdentifier:(id)a0 withDevice:(id)a1;
- (BOOL)isRapportDeviceDiscoveredWithIdentifier:(id)a0;
- (void)_invalidateDestinationDeviceWithIDSIdentifier:(id)a0;
- (void)registerRequestHandlerForRequestID:(id)a0 withRequestHandler:(id /* block */)a1;
- (id)initWithClientFactory:(id)a0;
- (void)configureDiscoveryClientForRequestIDs:(id)a0 withCompletion:(id /* block */)a1;
- (void)_completeQuededRequestsOnWorkQueue:(id)a0;
- (void)_configureDiscoveryClientWithCompletion:(id /* block */)a0 forRequestIDs:(id)a1;
- (void)_updateDevice:(id)a0 reachable:(BOOL)a1;
- (void)sendRequest:(id)a0 requestID:(id)a1 destinationID:(id)a2 options:(id)a3 responseHandler:(id /* block */)a4;
- (void)_handleRequest:(id)a0 forTopic:(id)a1 options:(id)a2 responseHandler:(id /* block */)a3;
- (id)_createRapportClientForDevice:(id)a0;
- (void).cxx_destruct;
- (void)_queueRequest:(id)a0 forTopic:(id)a1 options:(id)a2 responseHandler:(id /* block */)a3;

@end
