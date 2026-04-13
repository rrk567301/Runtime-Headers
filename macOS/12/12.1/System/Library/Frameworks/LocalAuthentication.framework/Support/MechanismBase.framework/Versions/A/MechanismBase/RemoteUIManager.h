@class NSXPCConnection, MechanismBase;
@protocol LARemoteUIHost, LAUIMechanism;

@interface RemoteUIManager : NSObject <LARemoteUIHost> {
    MechanismBase<LAUIMechanism, LARemoteUIHost> *_uiMechanism;
    id /* block */ _pendingShowUiReply;
    id /* block */ _pendingUiActivationBlock;
    id _pendingUiMechanism;
    id _dismissingUi;
    BOOL _uiDismissedBeforeConnection;
    int _showUiCounter;
    int _dismissUiCounter;
    NSXPCConnection *_agentConnection;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)connectRemoteUI:(id)a0 reply:(id /* block */)a1;
- (void)disconnectRemoteUI;
- (void)_assignPendingMechanism:(id)a0 reply:(id /* block */)a1;
- (BOOL)_activatePlatformUIWithParams:(id)a0;
- (void)_setupUiActivationTimeout;
- (void)_activateUi;
- (id)_connectToUIAgent:(id)a0;
- (void)_replyOnceToShowUi:(BOOL)a0 error:(id)a1;
- (void)showUIWithParams:(id)a0 reply:(id /* block */)a1;
- (void)prepareForRemoteViewControllerWithMechanism:(id)a0 reply:(id /* block */)a1;
- (void)connectionToViewServiceInvalidated;
- (void)dismissRemoteUI:(id)a0 uiMechanism:(id)a1 uiDisappeared:(BOOL)a2 reply:(id /* block */)a3;

@end
