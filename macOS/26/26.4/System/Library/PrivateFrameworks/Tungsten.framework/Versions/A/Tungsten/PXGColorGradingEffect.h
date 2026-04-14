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
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)shader;
- (id)initWithEntityManager:(id)a0;

@end
