@class QLAnimationWindowEffect;

@interface QLWindowAnimation : NSAnimation {
    QLAnimationWindowEffect *_windowEffect;
}

@property (readonly) QLAnimationWindowEffect *windowEffect;

- (void)setCurrentProgress:(float)a0;
- (float)currentValue;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)discardWindowEffect;
- (float)_valueForProgress:(double)a0;
- (id)initWithDuration:(double)a0 animationTarget:(id)a1;

@end
