@interface EventDHCP : NSObject

+ (void)logChangesForBSS:(id)a0 withLAN:(id)a1;
+ (id)mostRecentJoinOn:(id)a0 ssid:(id)a1 before:(id)a2 withPersistentContainer:(id)a3;
+ (BOOL)processEvent:(id)a0 dhcpServerInfo:(id)a1 onBSS:(id)a2 andNetwork:(id)a3 withPersistentContainer:(id)a4;

@end
