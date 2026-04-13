@interface CKContextXPCClient : NSObject

+ (void)initialize;
+ (id)xpcConnection;
+ (void)registerForServiceUpdateNotifications:(id)a0;
+ (id)isXPCConnectionError:(id)a0;
+ (void)invalidateXpcConnection;
+ (id)newXpcConnection;
+ (id)invalidateAndGetNewXpcConnection;

@end
