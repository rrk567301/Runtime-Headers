@interface CMActivityManager : NSObject {
    id _internal;
}

@property (copy) id /* block */ activityHandler;
@property (readonly, nonatomic, getter=isActivityAvailable) char activityAvailable;

- (void)dealloc;
- (id)init;
- (long long)overrideOscarSideband:(char)a0 withState:(long long)a1;
- (long long)simulateMotionState:(char)a0 withState:(long long)a1;
- (long long)simulateMotionStateYouthWithState:(long long)a0;

@end
