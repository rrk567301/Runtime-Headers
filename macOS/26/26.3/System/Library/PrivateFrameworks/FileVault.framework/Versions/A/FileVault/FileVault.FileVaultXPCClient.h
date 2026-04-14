@interface FileVault.FileVaultXPCClient : NSObject <FileVault.FileVaultXPCProtocol> {
    void /* unknown type, empty encoding */ connection;
    void /* unknown type, empty encoding */ proxy;
}

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)echoWithMessage:(id)a0 with:(id /* block */)a1;
- (void)userAccountUpdaterReplaceiCloudRecoveryKeyFor:(id)a0 username:(id)a1 password:(id)a2 with:(id /* block */)a3;

@end
