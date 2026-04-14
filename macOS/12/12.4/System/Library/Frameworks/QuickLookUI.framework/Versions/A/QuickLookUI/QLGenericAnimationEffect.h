@class NSString;

@interface QLGenericAnimationEffect : QLAnimationWindowEffect {
    id _object;
    NSString *_key;
}

+ (id)genericAnimationForObject:(id)a0 key:(id)a1 duration:(double)a2;

- (void)dealloc;
- (void)setValue:(float)a0;

@end
