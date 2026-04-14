@interface CKContextXPCClient : NSObject

+ (void)initialize;
+ (id)xpcConnection;
+ (void)registerForServiceUpdateNotifications:(id)a0;
+ (id)invalidateAndGetNewXpcConnection;
+ (void)invalidateXpcConnection;
+ (id)newXpcConnection;
+ (id)isXPCConnectionError:(id)a0;

@end
