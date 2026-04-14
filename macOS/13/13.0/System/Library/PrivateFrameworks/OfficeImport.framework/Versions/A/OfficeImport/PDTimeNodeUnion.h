@class PDVideoNode, PDParallelTimeNode, PDSequentialTimeNode, PDCmdBehavior, PDSetBehavior, PDAnimateMotionBehavior, PDAnimateScaleBehavior, PDAnimateColorBehavior, PDAudioNode, PDAnimateRotateBehavior, PDAnimateEffectBehavior, PDAnimateTimeBehavior;

@interface PDTimeNodeUnion : NSObject {
    PDAnimateTimeBehavior *mTimeBehavior;
    PDAnimateEffectBehavior *mEffectBehavior;
    PDAnimateMotionBehavior *mMotionBehavior;
    PDAnimateRotateBehavior *mRotateBehavior;
    PDAnimateScaleBehavior *mScaleBehavior;
    PDAnimateColorBehavior *mColorBehavior;
    PDAudioNode *mAudio;
    PDVideoNode *mVideo;
    PDParallelTimeNode *mParallelTimeNodeGroup;
    PDSequentialTimeNode *mSequentialTimeNodeGroup;
    PDSetBehavior *mSetBehavior;
    PDCmdBehavior *mCmdBehavior;
}

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)setBehavior:(id)a0;
- (id)behavior;
- (id)audio;
- (id)sequential;
- (id)video;
- (id)commonBehavior;
- (id)timeBehavior;
- (void)setTimeBehavior:(id)a0;
- (id)effectBehavior;
- (void)setEffectBehavior:(id)a0;
- (id)motionBehavior;
- (void)setMotionBehavior:(id)a0;
- (id)rotateBehavior;
- (void)setRotateBehavior:(id)a0;
- (id)scaleBehavior;
- (void)setScaleBehavior:(id)a0;
- (id)colorBehavior;
- (void)setColorBehavior:(id)a0;
- (void)setAudio:(id)a0;
- (void)setVideo:(id)a0;
- (id)parallel;
- (void)setParallel:(id)a0;
- (void)setSequential:(id)a0;
- (id)cmdBehavior;
- (void)setCmdBehavior:(id)a0;

@end
