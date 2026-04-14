@interface CKContextXPCClient : NSObject

+ (void)initialize;
+ (id)xpcConnection;
+ (id)isXPCConnectionError:(id)a0;
+ (void)invalidateXpcConnection;
+ (void)registerForServiceUpdateNotifications:(id)a0;
+ (id)invalidateAndGetNewXpcConnection;
+ (id)newXpcConnection;

@end
