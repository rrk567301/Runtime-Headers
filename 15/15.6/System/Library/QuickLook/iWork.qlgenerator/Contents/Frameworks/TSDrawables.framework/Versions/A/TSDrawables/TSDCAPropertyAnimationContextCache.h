@class NSString;

@interface TSDCAPropertyAnimationContextCache : TSDCAAnimationContextCache

@property (readonly, nonatomic) NSString *keyPath;
@property (readonly, nonatomic) char isAnimationKeyTypeOfRotation;
@property (readonly, nonatomic) char isAnimationKeyHidden;
@property (readonly, nonatomic) char isAnimationKeyDoubleSided;
@property (readonly, nonatomic, getter=isAdditive) char additive;
@property (nonatomic) char isObjectTypeCGColor;
@property (nonatomic) char isContentsAnimation;

- (void).cxx_destruct;
- (id)initWithAnimation:(id)a0;
- (id)adjustedResultWithValue:(id)a0;
- (id)interpolatedValueFrom:(id)a0 to:(id)a1 percent:(double)a2;
- (id)valueForKeyPath:(id)a0 atTime:(double)a1 animationCache:(id)a2;

@end
