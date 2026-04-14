@interface LACXPCInterface : NSObject

+ (id)interfaceForXPCProtocol:(id)a0;
+ (id)interfaceForAgentProxy;
+ (id)interfaceForEnvironment;
+ (id)interfaceForRemoteUI;
+ (id)interfaceForRemoteUIHost;
+ (id)interfaceForUIMechanism;

@end
