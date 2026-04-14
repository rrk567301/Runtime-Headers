@interface LACXPCInterface : NSObject

+ (id)interfaceForXPCProtocol:(id)a0;
+ (id)interfaceForAHP;
+ (id)interfaceForAHPDelegate;
+ (id)interfaceForAgentProxy;
+ (id)interfaceForEnvironment;
+ (id)interfaceForIdleUI;
+ (id)interfaceForIdleUIHost;
+ (id)interfaceForRemoteUI;
+ (id)interfaceForRemoteUIClient;
+ (id)interfaceForRemoteUIHost;
+ (id)interfaceForRemoteUIServer;
+ (id)interfaceForUIMechanism;
+ (id)interfaceForUserService;

@end
