@class NSTimer, NSMutableSet;

@interface TITypingAssertion : NSObject {
    char _active;
    NSMutableSet *_restingPathIndices;
}

@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic, getter=isActive) char active;

+ (id)sharedTypingAssertion;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)timerFired:(id)a0;
- (id)__restingPathIndices;
- (void)_sbsSetTypingActive:(char)a0;
- (void)restResetTouches;
- (void)restTouchEndWithPathIndex:(long long)a0;
- (void)restTouchStartWithPathIndex:(long long)a0;
- (void)touchWithDuration:(double)a0 reason:(long long)a1;
- (void)touchWithReason:(long long)a0;

@end
