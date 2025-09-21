@interface _ASAgentFileVaultRecoveryKeyListener : NSObject <NSXPCListenerDelegate, WBSFileVaultRecoveryKeyListenerProtocol> {
    void /* unknown type, empty encoding */ listener;
    void /* unknown type, empty encoding */ internalLock;
    void /* unknown type, empty encoding */ $__lazy_storage_$_accountStore;
}

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (void)deleteRecoveryKeyForVolumeID:(id)a0 serialNumber:(id)a1 completion:(id /* block */)a2;
- (void)recoveryKeyForVolumeID:(id)a0 serialNumber:(id)a1 completion:(id /* block */)a2;
- (void)recoveryKeysForSerialNumber:(id)a0 completion:(id /* block */)a1;
- (void)saveRecoveryKeyWithRequest:(id)a0 completion:(id /* block */)a1;

@end
