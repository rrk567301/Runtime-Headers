@class NSMutableSet;

@interface _GCCurrentApplicationForegroundMonitor : NSObject {
    NSMutableSet *_observers;
    _Atomic char _appInBackground;
}

@property (readonly, getter=isAppInBackground) char appInBackground;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (void)CBApplicationDidBecomeActive:(id)a0;
- (void)CBApplicationWillResignActive:(id)a0;
- (void)CBApplicationDidBecomeActive;
- (void)CBApplicationWillResignActive;
- (void)addObserver:(id)a0 notifyCurrent:(char)a1;

@end
