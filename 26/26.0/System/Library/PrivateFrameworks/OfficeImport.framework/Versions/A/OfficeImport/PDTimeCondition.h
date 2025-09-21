@class PDAnimationTarget;

@interface PDTimeCondition : NSObject {
    BOOL mHasDelay;
    int mDelay;
    BOOL mHasTriggerEvent;
    int mTriggerEvent;
    PDAnimationTarget *mTarget;
}

- (int)triggerEvent;
- (void)setTriggerEvent:(int)a0;
- (void)setDelay:(int)a0;
- (int)delay;
- (id)init;
- (id)target;
- (id)description;
- (void)setTarget:(id)a0;
- (void).cxx_destruct;
- (BOOL)hasTriggerEvent;
- (BOOL)hasDelay;
- (int)writeDelay;

@end
