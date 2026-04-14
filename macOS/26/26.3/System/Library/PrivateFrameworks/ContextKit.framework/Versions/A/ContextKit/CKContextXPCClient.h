@interface CKContextXPCClient : NSObject

+ (void)initialize;
+ (id)xpcConnection;
+ (id)newXpcConnection;
+ (void)registerForServiceUpdateNotifications:(id)a0;
+ (id)invalidateAndGetNewXpcConnection;
+ (id)isXPCConnectionError:(id)a0;
+ (void)invalidateXpcConnection;

@end
