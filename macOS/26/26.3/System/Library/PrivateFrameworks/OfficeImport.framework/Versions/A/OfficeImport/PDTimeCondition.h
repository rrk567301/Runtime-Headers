@class PDAnimationTarget;

@interface PDTimeCondition : NSObject {
    BOOL mHasDelay;
    int mDelay;
    BOOL mHasTriggerEvent;
    int mTriggerEvent;
    PDAnimationTarget *mTarget;
}

- (void)setTriggerEvent:(int)a0;
- (void)setDelay:(int)a0;
- (id)description;
- (id)init;
- (int)triggerEvent;
- (int)delay;
- (void).cxx_destruct;
- (void)setTarget:(id)a0;
- (id)target;
- (BOOL)hasTriggerEvent;
- (BOOL)hasDelay;
- (int)writeDelay;

@end
