@class RemoteUIManagerConfig, NSString, MechanismUI, NSDate;
@protocol RemoteUIEndpointProvider, LARemoteUIHost, LAUIMechanism, LARemoteUI;

@interface _RemoteUIManager : NSObject <RemoteUIManaging, RemoteUIActivatorDelegate> {
    MechanismUI<LAUIMechanism, LARemoteUIHost> *_uiMechanism;
    id /* block */ _pendingShowUiReply;
    id /* block */ _pendingUiActivationBlock;
    MechanismUI<LAUIMechanism, LARemoteUIHost> *_pendingUiMechanism;
    id<LARemoteUI> _dismissingUi;
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

- (id)init;
- (void).cxx_destruct;
- (id)anonymousListener;
- (id)workQueue;
- (id)initWithConfig:(id)a0;
- (void)checkClearForIdleExitWithCompletion:(id /* block */)a0;
- (void)connectRemoteUI:(id)a0 reply:(id /* block */)a1;
- (void)disconnectRemoteUI;
- (void)_activateUi;
- (void)_assignPendingMechanism:(id)a0 reply:(id /* block */)a1;
- (void)_replyOnceToShowUi:(BOOL)a0 error:(id)a1;
- (void)_setupUiActivationTimeoutForParams:(id)a0;
- (void)connectionToViewServiceInvalidated:(id /* block */)a0;
- (void)didReceiveExpectedError:(id)a0;
- (void)didReceiveUnexpectedError:(id)a0;
- (void)dismissRemoteUI:(id)a0 uiMechanism:(id)a1 uiDisappeared:(BOOL)a2 reply:(id /* block */)a3;
- (void)prepareForRemoteViewControllerWithMechanism:(id)a0 reply:(id /* block */)a1;
- (void)setEndpointProvider:(id)a0;
- (void)showUIWithParams:(id)a0 reply:(id /* block */)a1;

@end
