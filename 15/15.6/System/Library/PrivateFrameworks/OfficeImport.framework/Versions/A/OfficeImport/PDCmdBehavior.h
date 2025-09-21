@interface PDCmdBehavior : PDAnimateBehavior {
    char mHasBehaviorType;
    int mBehaviorType;
}

- (char)hasBehaviorType;
- (int)behaviorType;
- (void)setBehaviorType:(int)a0;

@end
