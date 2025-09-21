@class QLAnimationWindowEffect;

@interface QLWindowAnimation : NSAnimation {
    QLAnimationWindowEffect *_windowEffect;
}

@property (readonly) QLAnimationWindowEffect *windowEffect;

- (float)currentValue;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setCurrentProgress:(float)a0;
- (void).cxx_destruct;
- (void)discardWindowEffect;
- (float)_valueForProgress:(double)a0;
- (id)initWithDuration:(double)a0 animationTarget:(id)a1;

@end
