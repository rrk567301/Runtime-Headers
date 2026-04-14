@class NSString, NSObject;
@protocol LACRemoteUIManaging, OS_dispatch_queue, RemoteUIActivatorDelegate;

@interface RemoteUIManager : NSObject <RemoteUIActivatorDelegate, LACRemoteUIManaging> {
    id<LACRemoteUIManaging, RemoteUIActivatorDelegate> _responder;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)initWithConfig:(id)a0;
- (id)workQueue;
- (void).cxx_destruct;
- (id)init;
- (id)anonymousListener;
- (void)checkHasPendingUIRequestsForRemoteUI:(id)a0 completion:(id /* block */)a1;
- (void)connectRemoteUI:(id)a0 requestID:(id)a1 reply:(id /* block */)a2;
- (void)disconnectRemoteUI;
- (void)anonymousListenerForHostedController:(long long)a0 mechanism:(id)a1 reply:(id /* block */)a2;
- (void)connectionToRemoteUIInvalidatedForIdentifier:(id)a0 reply:(id /* block */)a1;
- (void)didReceiveError:(id)a0 forRequestIdentifier:(id)a1;
- (void)didSuccessfullyFinishForRequestIdentifier:(id)a0;
- (void)dismissRemoteUI:(id)a0 uiMechanism:(id)a1 uiDisappeared:(BOOL)a2 shouldIdle:(BOOL)a3 reply:(id /* block */)a4;
- (void)prepareForHostedController:(long long)a0 mechanism:(id)a1 reply:(id /* block */)a2;
- (void)setEndpointProvider:(id)a0;
- (void)showUIWithParams:(id)a0 reply:(id /* block */)a1;

@end
