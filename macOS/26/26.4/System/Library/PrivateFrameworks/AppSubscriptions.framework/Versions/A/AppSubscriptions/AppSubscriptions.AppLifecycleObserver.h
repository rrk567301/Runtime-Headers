@interface AppSubscriptions.AppLifecycleObserver : _TtCs12_SwiftObject {
    void /* unknown type, empty encoding */ dispatcher;
    void /* unknown type, empty encoding */ notificationCenter;
}

- (void)didBecomeActive;
- (void)willEnterForeground;
- (void)willTerminate;
- (void)didFinishLaunching;
- (void)didEnterBackground;
- (void)willResignActive;

@end
