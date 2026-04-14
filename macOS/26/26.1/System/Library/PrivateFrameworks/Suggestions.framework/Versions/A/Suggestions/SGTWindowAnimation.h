@class SGTAnimationWindowEffect;

@interface SGTWindowAnimation : NSAnimation {
    SGTAnimationWindowEffect *_windowEffect;
}

@property (readonly) SGTAnimationWindowEffect *windowEffect;

- (void)setCurrentProgress:(float)a0;
- (float)currentValue;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)discardWindowEffect;

@end
