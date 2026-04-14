@interface LocalAuthenticationCore.LACCompanionAuthenticationSessionProviderDummy : NSObject <LACDarwinNotificationCenterObserver> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_isSessionActive;
    void /* unknown type, empty encoding */ companion;
    void /* unknown type, empty encoding */ replyQueue;
    void /* unknown type, empty encoding */ isSessionActiveSubject;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)notificationCenter:(id)a0 didReceiveNotification:(const struct __CFString { } *)a1;

@end
