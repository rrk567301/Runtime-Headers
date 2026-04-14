@class NSObject;
@protocol HMDRemoteMessageListener, OS_dispatch_queue;

@interface HMDRapportOverBLEMessageTransport : HMDRemoteMessageTransport

@property (retain, nonatomic) id<HMDRemoteMessageListener> remoteMessageListener;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;

- (void).cxx_destruct;
- (id)start;
- (void)sendMessage:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)canSendMessage:(id)a0;
- (BOOL)isValidMessage:(id)a0;
- (id)_IDSIdentifierForDestination:(id)a0;
- (id)_createBLEClientForDevice:(id)a0;
- (id)_newDiscoveryClient:(id)a0 discoveredClientPromise:(id)a1;
- (id)_rpOptions:(id)a0 stringForKey:(id)a1;
- (void)didReceiveRequest:(id)a0 options:(id)a1 responseHandler:(id /* block */)a2;
- (id)initWithAccountRegistry:(id)a0;
- (id)initWithAccountRegistry:(id)a0 rapportMessaging:(id)a1;

@end
