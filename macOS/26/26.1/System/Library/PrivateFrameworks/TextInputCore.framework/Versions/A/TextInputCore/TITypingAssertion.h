@class NSTimer, NSMutableSet;

@interface TITypingAssertion : NSObject {
    BOOL _active;
    NSMutableSet *_restingPathIndices;
}

@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic, getter=isActive) BOOL active;

+ (id)sharedTypingAssertion;

- (void)timerFired:(id)a0;
- (void)restTouchEndWithPathIndex:(long long)a0;
- (id)__restingPathIndices;
- (void)restTouchStartWithPathIndex:(long long)a0;
- (void)restResetTouches;
- (void)dealloc;
- (void)touchWithReason:(long long)a0;
- (void)_sbsSetTypingActive:(BOOL)a0;
- (void).cxx_destruct;
- (void)touchWithDuration:(double)a0 reason:(long long)a1;
- (id)init;

@end
