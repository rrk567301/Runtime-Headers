@interface FileVault.FileVaultXPCClient : NSObject <FileVault.FileVaultXPCProtocol> {
    void /* unknown type, empty encoding */ connection;
    void /* unknown type, empty encoding */ proxy;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)echoWithMessage:(id)a0 with:(id /* block */)a1;

@end
