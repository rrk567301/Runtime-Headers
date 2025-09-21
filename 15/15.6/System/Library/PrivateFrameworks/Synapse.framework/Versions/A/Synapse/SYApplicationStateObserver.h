@interface SYApplicationStateObserver : NSObject {
    _Atomic char _appStateIsActive;
    char _needsRegisterForAppStateNotifications;
    id /* block */ _becomeActiveHandler;
    id /* block */ _resignActiveHandler;
}

- (void).cxx_destruct;
- (char)appIsActive;
- (void)_handleAppBecomeActive:(id)a0;
- (void)_handleAppResignActive:(id)a0;
- (void)_updateAppStateOnMainThread;
- (void)_updateAppStateWithCompletion:(id /* block */)a0;
- (id)initWithBecomeActiveHandler:(id /* block */)a0 resignActiveHandler:(id /* block */)a1;
- (void)registerForAppStateNotifications;

@end
