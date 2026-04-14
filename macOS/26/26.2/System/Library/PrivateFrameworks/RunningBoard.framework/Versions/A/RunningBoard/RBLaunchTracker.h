@class NSMutableDictionary;
@protocol RBTimeProviding;

@interface RBLaunchTracker : NSObject {
    NSMutableDictionary *_lastLaunch;
    NSMutableDictionary *_launchBeforeLast;
    id<RBTimeProviding> _timeProvider;
}

- (id)initWithTimeProvider:(id)a0;
- (double)nextAllowedLaunchOfIdentity:(id)a0;
- (void).cxx_destruct;
- (void)trackLaunchOfIdentity:(id)a0;

@end
