@interface CKContextXPCClient : NSObject

+ (id)isXPCConnectionError:(id)a0;
+ (void)registerForServiceUpdateNotifications:(id)a0;
+ (void)initialize;
+ (id)xpcConnection;
+ (void)invalidateXpcConnection;
+ (id)newXpcConnection;
+ (id)invalidateAndGetNewXpcConnection;

@end
