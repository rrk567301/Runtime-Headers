@class NSString;

@interface QLPropertyWindowEffect : QLAnimationWindowEffect {
    float _fromValue;
    float _toValue;
    NSString *_property;
}

+ (id)changeProperty:(id)a0 forWindow:(id)a1 from:(float)a2 to:(float)a3 duration:(double)a4;

- (void)dealloc;
- (void)setValue:(float)a0;

@end
