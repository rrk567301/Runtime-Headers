@class NSString, CDPContext;

@interface CDPWalrusStateController : NSObject <CDPWalrusStatusProvider> {
    CDPContext *_context;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContext:(id)a0;
- (BOOL)shouldOpenGate;
- (void)broadcastWalrusStateChange;
- (void)repairWalrusStatusWithCompletion:(id /* block */)a0;
- (void)pcsKeysForServices:(id)a0 completion:(id /* block */)a1;
- (id)combinedWalrusStatus:(id *)a0;
- (void)updateWalrusStatus:(unsigned long long)a0 authenticatedContext:(id)a1 completion:(id /* block */)a2;
- (void)_startObservingWalrusStateChangeNotification;
- (void)walrusStatusWithCompletion:(id /* block */)a0;
- (unsigned long long)walrusStatus:(id *)a0;
- (void).cxx_destruct;
- (void)combinedWalrusStatusWithCompletion:(id /* block */)a0;
- (id)_makeAnalyticsEvent:(unsigned long long)a0 state:(id)a1 error:(id)a2;

@end
