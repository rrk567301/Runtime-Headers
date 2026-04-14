@interface LocalAuthenticationCore.LACCompanionAuthenticationSessionProviderDummy : NSObject <LACDarwinNotificationCenterObserver> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_isSessionActive;
    void /* unknown type, empty encoding */ companion;
    void /* unknown type, empty encoding */ replyQueue;
    void /* unknown type, empty encoding */ isSessionActiveSubject;
}

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)notificationCenter:(id)a0 didReceiveNotification:(const struct __CFString { } *)a1;

@end
