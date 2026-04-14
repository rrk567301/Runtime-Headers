@class PDAnimationTarget;

@interface PDTimeCondition : NSObject {
    BOOL mHasDelay;
    int mDelay;
    BOOL mHasTriggerEvent;
    int mTriggerEvent;
    PDAnimationTarget *mTarget;
}

- (void)setTarget:(id)a0;
- (int)delay;
- (void)setTriggerEvent:(int)a0;
- (int)triggerEvent;
- (void)setDelay:(int)a0;
- (id)target;
- (void).cxx_destruct;
- (id)description;
- (id)init;
- (BOOL)hasTriggerEvent;
- (BOOL)hasDelay;
- (int)writeDelay;

@end
