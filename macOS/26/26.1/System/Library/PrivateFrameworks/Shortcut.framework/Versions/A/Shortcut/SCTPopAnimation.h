@class SCTHelpPointerView;

@interface SCTPopAnimation : NSAnimation {
    SCTHelpPointerView *mAnimatedView;
    float mSlope;
    float mScale;
    float mScaleStep;
}

- (void)startAnimation;
- (void)setCurrentProgress:(float)a0;
- (void)dealloc;
- (id)initWithView:(id)a0;

@end
