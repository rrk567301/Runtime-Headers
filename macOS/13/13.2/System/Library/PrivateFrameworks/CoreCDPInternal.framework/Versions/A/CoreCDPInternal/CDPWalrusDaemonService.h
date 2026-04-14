@class CDPInternalWalrusStateController;

@interface CDPWalrusDaemonService : NSObject {
    unsigned long long _entitlements;
}

@property (retain, nonatomic) CDPInternalWalrusStateController *walrusStateController;

- (void).cxx_destruct;
- (id)initWithEntitlements:(unsigned long long)a0;
- (oneway void)broadcastWalrusStateChange;
- (oneway void)updateWalrusStatus:(unsigned long long)a0 completion:(id /* block */)a1;
- (oneway void)pcsKeysForServices:(id)a0 completion:(id /* block */)a1;
- (oneway void)updateWebAccessStatus:(unsigned long long)a0 completion:(id /* block */)a1;
- (oneway void)webAccessStatusWithCompletion:(id /* block */)a0;
- (oneway void)walrusStatusWithContext:(id)a0 completion:(id /* block */)a1;
- (id)initWithEntitlements:(unsigned long long)a0 walrusController:(id)a1;
- (id)defaultWalrusStateController;
- (BOOL)_allowWalrusAccess;
- (BOOL)_allowWalrusPCSKeysAccess;

@end
