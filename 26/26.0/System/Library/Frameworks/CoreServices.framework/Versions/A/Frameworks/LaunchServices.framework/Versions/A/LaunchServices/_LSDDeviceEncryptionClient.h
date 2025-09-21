@interface _LSDDeviceEncryptionClient : _LSDClient <_LSDDeviceEncryptionServiceProtocol>

- (id)initWithXPCConnection:(id)a0;
- (void)decryptData:(id)a0 reply:(id /* block */)a1;
- (void)encryptData:(id)a0 reply:(id /* block */)a1;

@end
