@class PXGShader, PXGUniform, PXGColorLookupCube;

@interface PXGColorGradingEffect : PXGEffect {
    PXGShader *_shader;
    PXGUniform *_cubeUniform;
    PXGUniform *_valuesUniform;
    PXGUniform *_grayUniform;
}

@property (retain, nonatomic) PXGColorLookupCube *colorLookupCube;
@property (nonatomic) float intensity;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)shader;
- (id)initWithEntityManager:(id)a0;

@end
