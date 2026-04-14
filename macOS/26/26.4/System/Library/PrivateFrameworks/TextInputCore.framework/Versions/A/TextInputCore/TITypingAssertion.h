@class NSTimer, NSMutableSet;

@interface TITypingAssertion : NSObject {
    BOOL _active;
    NSMutableSet *_restingPathIndices;
}

@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic, getter=isActive) BOOL active;

+ (id)sharedTypingAssertion;

- (void)timerFired:(id)a0;
- (void)restTouchStartWithPathIndex:(long long)a0;
- (void)touchWithDuration:(double)a0 reason:(long long)a1;
- (id)__restingPathIndices;
- (void)restTouchEndWithPathIndex:(long long)a0;
- (void).cxx_destruct;
- (id)init;
- (void)touchWithReason:(long long)a0;
- (void)restResetTouches;
- (void)dealloc;
- (void)_sbsSetTypingActive:(BOOL)a0;

@end
