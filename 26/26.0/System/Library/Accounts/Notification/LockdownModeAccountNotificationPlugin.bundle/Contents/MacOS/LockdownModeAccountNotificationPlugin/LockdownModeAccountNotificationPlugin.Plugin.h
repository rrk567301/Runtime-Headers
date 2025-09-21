@interface LockdownModeAccountNotificationPlugin.Plugin : NSObject <ACDAccountNotificationPlugin>

- (void)account:(id)a0 didChangeWithType:(int)a1 inStore:(id)a2 oldAccount:(id)a3;
- (id)init;

@end
