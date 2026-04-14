@class RemoteUIManagerConfig, NSString, LACRemoteUIParams, NSDate;
@protocol LACRemoteUIEndpointProvider, LACRemoteUI;

@interface _RemoteUIManager : NSObject <LACRemoteUIManaging, RemoteUIActivatorDelegate> {
    LACRemoteUIParams *_pendingRequest;
    LACRemoteUIParams *_request;
    id<LACRemoteUI> _dismissingUi;
    id /* block */ _pendingShowUiReply;
    id /* block */ _pendingUiActivationBlock;
    BOOL _uiDismissedBeforeConnection;
    BOOL _ignoreDeactivation;
    int _showUiCounter;
    int _dismissUiCounter;
    RemoteUIManagerConfig *_config;
    id<LACRemoteUIEndpointProvider> _endpointProvider;
    NSDate *_latestAllowedUIExitTimestamp;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithConfig:(id)a0;
- (id)workQueue;
- (void).cxx_destruct;
- (id)init;
- (id)anonymousListener;
- (void)checkHasPendingUIRequestsForRemoteUI:(id)a0 completion:(id /* block */)a1;
- (void)connectRemoteUI:(id)a0 requestID:(id)a1 reply:(id /* block */)a2;
- (void)disconnectRemoteUI;
- (void)_activatePendingUIIfNeeded;
- (void)_activateUi;
- (id)_anonymousListenerWithIdentifier:(id)a0;
- (void)_assignPendingRequest:(id)a0 reply:(id /* block */)a1;
- (void)_replyOnceToShowUi:(BOOL)a0 error:(id)a1;
- (void)_setupUiActivationTimeoutForParams:(id)a0;
- (void)anonymousListenerForHostedController:(long long)a0 mechanism:(id)a1 reply:(id /* block */)a2;
- (void)connectionToRemoteUIInvalidatedForIdentifier:(id)a0 reply:(id /* block */)a1;
- (void)didReceiveError:(id)a0 forRequestIdentifier:(id)a1;
- (void)didSuccessfullyFinishForRequestIdentifier:(id)a0;
- (void)dismissRemoteUI:(id)a0 uiMechanism:(id)a1 uiDisappeared:(BOOL)a2 shouldIdle:(BOOL)a3 reply:(id /* block */)a4;
- (void)prepareForHostedController:(long long)a0 mechanism:(id)a1 reply:(id /* block */)a2;
- (void)setEndpointProvider:(id)a0;
- (void)showUIWithParams:(id)a0 reply:(id /* block */)a1;

@end
