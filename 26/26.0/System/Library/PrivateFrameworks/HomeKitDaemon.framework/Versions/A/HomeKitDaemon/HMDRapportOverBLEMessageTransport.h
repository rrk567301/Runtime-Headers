@class HMFTimer, NSMutableDictionary, NSString, RPCompanionLinkClient, NSMutableArray, NSObject;
@protocol HMDRemoteMessageListener, HMDRapportOverBLEDeviceWrapperFactory, HMDRapportOverBLEDiscoveryClientFactory, OS_dispatch_queue;

@interface HMDRapportOverBLEMessageTransport : HMDRemoteMessageTransport <HMFTimerDelegate>

@property (readonly, nonatomic) id<HMDRapportOverBLEDiscoveryClientFactory> discoClientFactory;
@property (readonly, nonatomic) id<HMDRapportOverBLEDeviceWrapperFactory> deviceWrapperFactory;
@property (retain) NSMutableDictionary *deviceContextCache;
@property (retain, nonatomic) RPCompanionLinkClient *discoveryClient;
@property (retain) NSMutableArray *messageQueue;
@property (copy, nonatomic) HMFTimer *discoveryIdleTimer;
@property (retain, nonatomic) id<HMDRemoteMessageListener> remoteMessageListener;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isValidMessage:(id)a0;
- (BOOL)canSendMessage:(id)a0;
- (void)sendMessage:(id)a0 completionHandler:(id /* block */)a1;
- (id)start;
- (void)timerDidFire:(id)a0;
- (id)_rpOptions:(id)a0 stringForKey:(id)a1;
- (id)initWithAccountRegistry:(id)a0;
- (void).cxx_destruct;
- (id)_IDSIdentifierForDestination:(id)a0;
- (void)_sendMessagesToDevice:(id)a0 messages:(id)a1;
- (void)_sendMessage:(id)a0 completionHandler:(id /* block */)a1;
- (id)_createBLEClientForDevice:(id)a0;
- (void)_createOrKickContext:(id)a0;
- (void)_deactivateDiscoveryClient;
- (void)_newDiscoveryClient;
- (void)didReceiveRequest:(id)a0 options:(id)a1 responseHandler:(id /* block */)a2;
- (void)foundDevice:(id)a0;
- (id)initWithAccountRegistry:(id)a0 rapportMessaging:(id)a1 discoClientFactory:(id)a2 deviceWrapperFactory:(id)a3;

@end
