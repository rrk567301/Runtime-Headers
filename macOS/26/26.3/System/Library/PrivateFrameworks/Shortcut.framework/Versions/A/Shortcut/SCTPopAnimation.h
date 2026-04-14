@class SCTHelpPointerView;

@interface SCTPopAnimation : NSAnimation {
    SCTHelpPointerView *mAnimatedView;
    float mSlope;
    float mScale;
    float mScaleStep;
}

- (id)initWithView:(id)a0;
- (void)startAnimation;
- (void)setCurrentProgress:(float)a0;
- (void)dealloc;

@end
