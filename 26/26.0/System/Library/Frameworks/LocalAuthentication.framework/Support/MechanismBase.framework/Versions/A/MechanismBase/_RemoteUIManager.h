@class RemoteUIManagerConfig, NSString, RemoteUIParams, NSDate;
@protocol LACRemoteUI, RemoteUIEndpointProvider;

@interface _RemoteUIManager : NSObject <RemoteUIManaging, RemoteUIActivatorDelegate> {
    RemoteUIParams *_pendingRequest;
    RemoteUIParams *_request;
    id<LACRemoteUI> _dismissingUi;
    id /* block */ _pendingShowUiReply;
    id /* block */ _pendingUiActivationBlock;
    BOOL _uiDismissedBeforeConnection;
    BOOL _ignoreDeactivation;
    int _showUiCounter;
    int _dismissUiCounter;
    RemoteUIManagerConfig *_config;
    id<RemoteUIEndpointProvider> _endpointProvider;
    NSDate *_latestAllowedUIExitTimestamp;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)workQueue;
- (id)anonymousListener;
- (id)init;
- (id)initWithConfig:(id)a0;
- (void).cxx_destruct;
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
- (void)connectionToViewServiceInvalidatedForIdentifier:(id)a0 reply:(id /* block */)a1;
- (void)didReceiveExpectedError:(id)a0;
- (void)didReceiveUnexpectedError:(id)a0;
- (void)didSuccessfullyFinishForRequestIdentifier:(id)a0;
- (void)dismissRemoteUI:(id)a0 uiMechanism:(id)a1 uiDisappeared:(BOOL)a2 shouldIdle:(BOOL)a3 reply:(id /* block */)a4;
- (void)prepareForHostedController:(long long)a0 mechanism:(id)a1 reply:(id /* block */)a2;
- (void)setEndpointProvider:(id)a0;
- (void)showUIWithParams:(id)a0 reply:(id /* block */)a1;

@end
