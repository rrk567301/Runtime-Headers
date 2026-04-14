@interface _LSDDeviceEncryptionClient : _LSDClient <_LSDDeviceEncryptionServiceProtocol>

- (void)encryptData:(id)a0 reply:(id /* block */)a1;
- (void)decryptData:(id)a0 reply:(id /* block */)a1;
- (id)initWithXPCConnection:(id)a0;

@end
