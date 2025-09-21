@interface SYApplicationStateObserver : NSObject {
    _Atomic BOOL _appStateIsActive;
    BOOL _needsRegisterForAppStateNotifications;
    id /* block */ _becomeActiveHandler;
    id /* block */ _resignActiveHandler;
}

- (void)_handleAppResignActive:(id)a0;
- (BOOL)appIsActive;
- (void)_handleAppBecomeActive:(id)a0;
- (void)registerForAppStateNotifications;
- (void).cxx_destruct;
- (void)_updateAppStateOnMainThread;
- (void)_updateAppStateWithCompletion:(id /* block */)a0;
- (id)initWithBecomeActiveHandler:(id /* block */)a0 resignActiveHandler:(id /* block */)a1;

@end
