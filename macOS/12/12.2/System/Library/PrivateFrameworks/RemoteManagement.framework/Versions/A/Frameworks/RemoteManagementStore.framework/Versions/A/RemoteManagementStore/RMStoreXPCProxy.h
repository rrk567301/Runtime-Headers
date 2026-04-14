@interface RMStoreXPCProxy : NSObject

+ (id)newConnection;
+ (id)newInterface;
+ (id)newDaemonConnection;
+ (id)newAgentConnection;
+ (id)newConnectionWithListenerEndpoint:(id)a0;

@end
