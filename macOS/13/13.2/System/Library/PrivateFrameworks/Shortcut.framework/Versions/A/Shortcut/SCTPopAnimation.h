@class SCTHelpPointerView;

@interface SCTPopAnimation : NSAnimation {
    SCTHelpPointerView *mAnimatedView;
    float mSlope;
    float mScale;
    float mScaleStep;
}

- (void)dealloc;
- (void)startAnimation;
- (void)setCurrentProgress:(float)a0;
- (id)initWithView:(id)a0;

@end
