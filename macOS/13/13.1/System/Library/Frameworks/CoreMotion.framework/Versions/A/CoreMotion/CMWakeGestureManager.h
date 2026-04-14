@protocol CMWakeGestureDelegate;

@interface CMWakeGestureManager : NSObject

@property (nonatomic) id<CMWakeGestureDelegate> delegate;

+ (id)sharedManager;
+ (BOOL)isWakeGestureAvailable;
+ (BOOL)isWakeGestureOverrideEnabled;

- (id)initWithQueue:(id)a0;
- (void)startWakeGestureUpdates;
- (void)stopWakeGestureUpdates;
- (void)setBacklightState:(long long)a0;
- (BOOL)simulateGestureWithDelay:(double)a0 Duration:(double)a1;
- (void)simulateGesture:(long long)a0 after:(double)a1;
- (void)forceDetected;
- (void)logAssert;

@end
