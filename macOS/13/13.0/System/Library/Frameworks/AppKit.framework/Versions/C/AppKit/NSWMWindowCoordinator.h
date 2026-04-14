@class NSString, WMWindowTransaction, WMClientWindowManager;

@interface NSWMWindowCoordinator : NSObject <WMClientWindowManagerDelegate, SLSWindowManagementBridgeDelegate> {
    WMWindowTransaction *_transaction;
    WMClientWindowManager *_windowManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)clientWindowManager:(id)a0 requestMakeKeyWindowWithIdentifier:(id)a1;
- (void)clientWindowManager:(id)a0 requestResignKeyWindowWithIdentifier:(id)a1;
- (void)clientWindowManager:(id)a0 updateStages:(id)a1;
- (void)clientWindowManager:(id)a0 updateStages:(id)a1 displayChangeSeed:(unsigned long long)a2;
- (void)clientWindowManager:(id)a0 windowMiniaturizationResponse:(id)a1;
- (void)clientWindowManager:(id)a0 windowDeminiaturizationResponse:(id)a1;
- (void)clientWindowManager:(id)a0 hideApplicationResponse:(id)a1;
- (void)clientWindowManager:(id)a0 unhideApplicationResponse:(id)a1;
- (void)performWindowManagementBridgeTransactionUsingBlock:(id /* block */)a0;
- (void)setWindowTags:(id)a0 onWindow:(unsigned int)a1 clear:(BOOL)a2;
- (void)performTransactionUsingBlock:(id /* block */)a0;
- (void)startLoginTransition;
- (void)_finishLoginTransition;
- (void)finishLoginTransitionWithCompletionHandler:(id /* block */)a0;
- (void)performCycleWindowsReversed:(BOOL)a0;
- (void)applicationDidFinishRestoration;
- (void)applicationWillBeginTermination;
- (void)applicationDidCancelTermination;
- (void)initializeStageFramesIfNeeded;
- (id)proposeKeyWindow:(id)a0 previousWindow:(id)a1;
- (id)proposeMainWindow:(id)a0 previousWindow:(id)a1;

@end
