@class CDPInternalWalrusStateController;

@interface CDPWalrusDaemonService : NSObject {
    unsigned long long _entitlements;
}

@property (retain, nonatomic) CDPInternalWalrusStateController *walrusStateController;

- (id)initWithEntitlements:(unsigned long long)a0;
- (void)_pcsKeysForServices:(id)a0 pcsController:(id)a1 completion:(id /* block */)a2;
- (id)defaultWalrusStateController;
- (BOOL)_allowWalrusAccess;
- (oneway void)updateWebAccessStatus:(unsigned long long)a0 completion:(id /* block */)a1;
- (oneway void)combinedWalrusStatusWithContext:(id)a0 completion:(id /* block */)a1;
- (oneway void)updateWalrusStatus:(unsigned long long)a0 authenticatedContext:(id)a1 completion:(id /* block */)a2;
- (oneway void)webAccessStatusWithCompletion:(id /* block */)a0;
- (void)_checkWalrusBeforeFetchingPCSKeysForServices:(id)a0 pcsController:(id)a1 completion:(id /* block */)a2;
- (oneway void)pcsKeysForServices:(id)a0 completion:(id /* block */)a1;
- (oneway void)repairWalrusWithCompletion:(id /* block */)a0;
- (oneway void)walrusStatusWithContext:(id)a0 completion:(id /* block */)a1;
- (id)initWithEntitlements:(unsigned long long)a0 walrusController:(id)a1;
- (void).cxx_destruct;
- (oneway void)broadcastWalrusStateChange;
- (BOOL)_allowWalrusPCSKeysAccess;

@end
