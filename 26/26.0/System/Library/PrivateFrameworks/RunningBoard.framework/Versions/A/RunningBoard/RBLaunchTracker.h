@class NSMutableDictionary;
@protocol RBTimeProviding;

@interface RBLaunchTracker : NSObject {
    NSMutableDictionary *_lastLaunch;
    NSMutableDictionary *_launchBeforeLast;
    id<RBTimeProviding> _timeProvider;
}

- (double)nextAllowedLaunchOfIdentity:(id)a0;
- (id)initWithTimeProvider:(id)a0;
- (void)trackLaunchOfIdentity:(id)a0;
- (void).cxx_destruct;

@end
