@class PDAnimationTarget;

@interface PDTimeCondition : NSObject {
    char mHasDelay;
    int mDelay;
    char mHasTriggerEvent;
    int mTriggerEvent;
    PDAnimationTarget *mTarget;
}

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)setTarget:(id)a0;
- (id)target;
- (int)delay;
- (void)setDelay:(int)a0;
- (void)setTriggerEvent:(int)a0;
- (int)triggerEvent;
- (char)hasTriggerEvent;
- (char)hasDelay;
- (int)writeDelay;

@end
