@class NSUserDefaults;

@interface SMDManagement_XPCClientConnection : SMDXPCClientConnection <SMDManagementProtocol>

@property (retain) NSUserDefaults *managementDefaults;

+ (id)daemonProtocolInterface;
+ (id)daemonProtocolInterfaceInstance;

- (void).cxx_destruct;
- (id)init;
- (void)getMDMConfigWithReply:(id /* block */)a0;
- (void)getMDMStatusWithReply:(id /* block */)a0;
- (void)removeMDMConfigWithReply:(id /* block */)a0;
- (void)setMDMConfigWithConfig:(id)a0 reply:(id /* block */)a1;
- (void)setMDMStatusWithStatus:(id)a0 reply:(id /* block */)a1;

@end
