@class NSPointerArray, NSObject;
@protocol OS_dispatch_queue;

@interface AXFUserSessionObserver : NSObject

@property (class, readonly) AXFUserSessionObserver *shared;

@property (retain, nonatomic) NSPointerArray *_observers;
@property (nonatomic) char _observingNotifications;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *_localQueue;
@property (readonly, nonatomic) char onConsole;
@property (readonly, nonatomic) char screenLocked;
@property (readonly, nonatomic) char isLoginDone;
@property (readonly, nonatomic) char isScreenSaverShowing;
@property (readonly, nonatomic) char isScreenSharing;

+ (char)_getBoolValueFromCGSSessionProperty:(struct __CFString { } *)a0;

- (id)init;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (void)_handleNotification:(id)a0;
- (void)_handleCGRemoteConnect;
- (void)_handleCGRemoteDisconnect;
- (void)_sendInitialObserverState:(id)a0;
- (void)_startObservingNotifications;
- (void)_stopObservingNotifications;

@end
