@class NSString, CDPContext;

@interface CDPWalrusStateController : NSObject <CDPWalrusStatusProvider> {
    CDPContext *_context;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContext:(id)a0;
- (void)_startObservingWalrusStateChangeNotification;
- (void)repairWalrusStatusWithCompletion:(id /* block */)a0;
- (id)_makeAnalyticsEvent:(unsigned long long)a0 state:(id)a1 error:(id)a2;
- (unsigned long long)walrusStatus:(id *)a0;
- (void)updateWalrusStatus:(unsigned long long)a0 authenticatedContext:(id)a1 completion:(id /* block */)a2;
- (void)walrusStatusWithCompletion:(id /* block */)a0;
- (void)pcsKeysForServices:(id)a0 completion:(id /* block */)a1;
- (BOOL)shouldOpenGate;
- (id)combinedWalrusStatus:(id *)a0;
- (void)combinedWalrusStatusWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)broadcastWalrusStateChange;

@end
