@class NSArray, NSString, SGTWindowAnimation;

@interface SGTAnimationWindowEffect : SGTWindowEffect <NSAnimationDelegate> {
    unsigned int _windowID;
    unsigned int _cid;
    SGTWindowAnimation *_animation;
    BOOL _mainEffect;
    BOOL _inverted;
}

@property (retain) SGTWindowAnimation *animation;
@property (readonly) double additionalDuration;
@property float progress;
@property BOOL inverted;
@property (retain) NSArray *subEffects;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invoke;
- (void)abort;
- (void)setValue:(float)a0;
- (void)done;
- (BOOL)stop;
- (id)prepare;
- (void).cxx_destruct;
- (void)animationDidEnd:(id)a0;
- (void)_setProgress:(float)a0;
- (id)initWithWindow:(id)a0 animation:(id)a1;
- (void)invertWithCompletionBlock:(id /* block */)a0;
- (id)subEffectWithID:(unsigned int)a0;

@end
