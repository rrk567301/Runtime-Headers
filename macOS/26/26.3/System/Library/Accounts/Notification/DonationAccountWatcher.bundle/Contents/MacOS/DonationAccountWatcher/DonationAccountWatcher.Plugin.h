@interface DonationAccountWatcher.Plugin : NSObject <ACDAccountNotificationPlugin> {
    void /* unknown type, empty encoding */ store;
    void /* unknown type, empty encoding */ logger;
}

- (void)account:(id)a0 didChangeWithType:(int)a1 inStore:(id)a2 oldAccount:(id)a3;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;

@end
