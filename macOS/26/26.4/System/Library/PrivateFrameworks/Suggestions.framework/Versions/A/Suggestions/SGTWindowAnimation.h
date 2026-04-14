@class SGTAnimationWindowEffect;

@interface SGTWindowAnimation : NSAnimation {
    SGTAnimationWindowEffect *_windowEffect;
}

@property (readonly) SGTAnimationWindowEffect *windowEffect;

- (float)currentValue;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)setCurrentProgress:(float)a0;
- (void)discardWindowEffect;

@end
