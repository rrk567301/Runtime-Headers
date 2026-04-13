@class NSArray, PXGShader;

@interface PXGCombinedEffect : PXGEffect {
    PXGShader *_combinedShader;
}

@property (readonly, nonatomic) NSArray *effects;

+ (id)combinedShaderSourceForEffects:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (id)shader;
- (id)initWithEffects:(id)a0;
- (id)initWithEntityManager:(id)a0;

@end
