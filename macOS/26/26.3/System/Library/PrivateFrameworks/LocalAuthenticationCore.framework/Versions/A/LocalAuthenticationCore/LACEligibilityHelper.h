@class NSArray, LACDarwinNotificationCenter;

@interface LACEligibilityHelper : NSObject <LACDarwinNotificationCenterObserver, LACEligibilityHelping> {
    void /* unknown type, empty encoding */ cache;
    void /* function */ registeredNotificationsForDomains;
}

@property (class, nonatomic, readonly) LACEligibilityHelper *sharedInstance;

@property (nonatomic, copy) NSArray *registeredNotificationsForDomains;
@property (nonatomic, readonly) LACDarwinNotificationCenter *darwinNotificationCenter;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)isEligibleForDomain:(id)a0;
- (void)notificationCenter:(id)a0 didReceiveNotification:(const struct __CFString { } *)a1;

@end
