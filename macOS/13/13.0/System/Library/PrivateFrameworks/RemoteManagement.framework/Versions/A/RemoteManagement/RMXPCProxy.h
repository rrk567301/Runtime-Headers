@interface RMXPCProxy : NSObject

+ (id)newInterface;
+ (id)newConnectionWithScope:(long long)a0;
+ (id)newAgentConnection;
+ (id)newDaemonConnection;
+ (id)newConnectionWithListenerEndpoint:(id)a0;

@end
