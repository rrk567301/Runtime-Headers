@interface CKContextXPCClient : NSObject

+ (id)xpcConnection;
+ (void)registerForServiceUpdateNotifications:(id)a0;
+ (void)initialize;
+ (id)isXPCConnectionError:(id)a0;
+ (void)invalidateXpcConnection;
+ (id)newXpcConnection;
+ (id)invalidateAndGetNewXpcConnection;

@end
