@class NSXPCConnection;

@interface WBSFileVaultRecoveryKeyListenerProxy : NSObject <WBSFileVaultRecoveryKeyListenerProtocol> {
    NSXPCConnection *_connection;
}

- (id)init;
- (id)_remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)_setUpConnection:(id)a0;
- (void).cxx_destruct;
- (id)_reconnectIfNecessary;
- (void)deleteRecoveryKeyForVolumeID:(id)a0 serialNumber:(id)a1 completion:(id /* block */)a2;
- (void)recoveryKeyForVolumeID:(id)a0 serialNumber:(id)a1 completion:(id /* block */)a2;
- (void)recoveryKeysForSerialNumber:(id)a0 completion:(id /* block */)a1;
- (void)saveRecoveryKeyWithRequest:(id)a0 completion:(id /* block */)a1;

@end
