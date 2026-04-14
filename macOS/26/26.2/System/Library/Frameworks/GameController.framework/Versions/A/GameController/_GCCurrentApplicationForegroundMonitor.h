@class NSMutableSet;

@interface _GCCurrentApplicationForegroundMonitor : NSObject {
    NSMutableSet *_observers;
    _Atomic BOOL _appInBackground;
    unsigned long long _state;
}

@property (class, readonly) BOOL currentProcessFollowsRegularActivationPolicy;

@property (readonly, getter=isAppInBackground) BOOL appInBackground;

+ (void)initialize;
+ (id)sharedInstance;

- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)CBApplicationWillResignActive;
- (void)CBApplicationDidBecomeActive;
- (void)_ui_init:(_Atomic BOOL *)a0;
- (void)addObserver:(id)a0 notifyCurrent:(BOOL)a1;

@end
