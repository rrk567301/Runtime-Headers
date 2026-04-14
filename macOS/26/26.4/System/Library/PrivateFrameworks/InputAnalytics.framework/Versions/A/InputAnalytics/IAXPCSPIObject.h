@interface IAXPCSPIObject : NSObject

+ (id)syncQueue;
+ (id)xpcClient;
+ (void)invalidateConnection;

@end
