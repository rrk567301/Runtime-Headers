@interface SGTFadeWindowEffect : SGTAnimationWindowEffect {
    double _initialAlpha;
    double _finalAlpha;
}

+ (id)fadeWindow:(id)a0 fromAlpha:(double)a1 toAlpha:(double)a2 duration:(double)a3;

- (void)done;
- (void)setValue:(float)a0;

@end
