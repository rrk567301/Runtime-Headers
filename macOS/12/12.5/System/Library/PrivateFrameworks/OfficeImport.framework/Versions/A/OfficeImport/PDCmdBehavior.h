@interface PDCmdBehavior : PDAnimateBehavior {
    BOOL mHasBehaviorType;
    int mBehaviorType;
}

- (void)setBehaviorType:(int)a0;
- (BOOL)hasBehaviorType;
- (int)behaviorType;

@end
