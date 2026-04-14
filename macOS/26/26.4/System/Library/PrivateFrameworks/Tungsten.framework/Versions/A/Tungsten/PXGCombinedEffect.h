@class NSArray, PXGShader;

@interface PXGCombinedEffect : PXGEffect {
    PXGShader *_combinedShader;
}

@property (readonly, nonatomic) NSArray *effects;

+ (id)combinedShaderSourceForEffects:(id)a0;

- (void).cxx_destruct;
- (id)description;
- (id)initWithEffects:(id)a0;
- (id)shader;
- (id)initWithEntityManager:(id)a0;

@end
