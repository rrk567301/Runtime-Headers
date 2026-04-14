@class NSMutableSet;

@interface _GCCurrentApplicationForegroundMonitor : NSObject {
    NSMutableSet *_observers;
    _Atomic BOOL _appInBackground;
}

@property (readonly, getter=isAppInBackground) BOOL appInBackground;

- (id)init;
- (void).cxx_destruct;
- (void)CBApplicationDidBecomeActive:(id)a0;
- (void)CBApplicationWillResignActive:(id)a0;

@end
