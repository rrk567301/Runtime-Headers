@class NSString;

@interface QLGenericAnimationEffect : QLAnimationWindowEffect {
    id _object;
    NSString *_key;
}

+ (id)genericAnimationForObject:(id)a0 key:(id)a1 duration:(double)a2;

- (void)setValue:(float)a0;
- (void).cxx_destruct;

@end
