@class NSTimer, NSMutableSet;

@interface TITypingAssertion : NSObject {
    BOOL _active;
    NSMutableSet *_restingPathIndices;
}

@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic, getter=isActive) BOOL active;

+ (id)sharedTypingAssertion;

- (void)dealloc;
- (void)restResetTouches;
- (void)timerFired:(id)a0;
- (id)__restingPathIndices;
- (void)restTouchEndWithPathIndex:(long long)a0;
- (id)init;
- (void)touchWithDuration:(double)a0 reason:(long long)a1;
- (void)_sbsSetTypingActive:(BOOL)a0;
- (void)restTouchStartWithPathIndex:(long long)a0;
- (void)touchWithReason:(long long)a0;
- (void).cxx_destruct;

@end
