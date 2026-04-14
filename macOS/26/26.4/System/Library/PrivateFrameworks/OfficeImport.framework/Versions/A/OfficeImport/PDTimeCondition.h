@class PDAnimationTarget;

@interface PDTimeCondition : NSObject {
    BOOL mHasDelay;
    int mDelay;
    BOOL mHasTriggerEvent;
    int mTriggerEvent;
    PDAnimationTarget *mTarget;
}

- (int)delay;
- (void)setTriggerEvent:(int)a0;
- (int)triggerEvent;
- (void)setDelay:(int)a0;
- (void)setTarget:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)description;
- (id)target;
- (BOOL)hasTriggerEvent;
- (BOOL)hasDelay;
- (int)writeDelay;

@end
