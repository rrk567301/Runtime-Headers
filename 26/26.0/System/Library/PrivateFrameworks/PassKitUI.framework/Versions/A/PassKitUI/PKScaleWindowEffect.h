@class QLScaleWindowEffect;

@interface PKScaleWindowEffect : QLScaleWindowEffect {
    void /* function */ *_function;
}

@property (retain) QLScaleWindowEffect *nextEffect;
@property double nextEffectDelay;

- (void)done;
- (void).cxx_destruct;
- (float)animation:(id)a0 valueForProgress:(float)a1;
- (void)setEaseFunction:(void /* function */ *)a0;

@end
