@interface CKContextXPCClient : NSObject

+ (void)initialize;
+ (id)xpcConnection;
+ (id)isXPCConnectionError:(id)a0;
+ (void)invalidateXpcConnection;
+ (id)newXpcConnection;
+ (id)invalidateAndGetNewXpcConnection;
+ (void)registerForServiceUpdateNotifications:(id)a0;

@end
