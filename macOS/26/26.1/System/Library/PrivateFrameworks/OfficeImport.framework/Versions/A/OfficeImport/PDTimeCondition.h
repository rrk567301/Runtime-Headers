@class PDAnimationTarget;

@interface PDTimeCondition : NSObject {
    BOOL mHasDelay;
    int mDelay;
    BOOL mHasTriggerEvent;
    int mTriggerEvent;
    PDAnimationTarget *mTarget;
}

- (int)triggerEvent;
- (id)target;
- (void)setDelay:(int)a0;
- (void)setTriggerEvent:(int)a0;
- (int)delay;
- (void)setTarget:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (BOOL)hasTriggerEvent;
- (BOOL)hasDelay;
- (int)writeDelay;

@end
