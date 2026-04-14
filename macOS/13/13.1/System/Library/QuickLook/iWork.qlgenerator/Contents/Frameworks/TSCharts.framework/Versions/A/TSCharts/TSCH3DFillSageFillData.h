@class TSCH3DFill, NSMutableArray;

@interface TSCH3DFillSageFillData : NSObject <TSCH3DSageFillData> {
    TSCH3DFill *_fill;
    NSMutableArray *_textures;
    NSMutableArray *_textureBlendModes;
}

+ (id)dataWithFill:(id)a0;

- (void).cxx_destruct;
- (unsigned long long)layerCount;
- (id)environment;
- (float)opacity;
- (id)materialAtIndex:(unsigned long long)a0;
- (float)shininess;
- (struct Color { float x0; float x1; float x2; float x3; })diffuse;
- (struct Color { float x0; float x1; float x2; float x3; })specular;
- (id)initWithFill:(id)a0;
- (id)lightingModel;
- (id)phongMaterials;
- (struct Color { float x0; float x1; float x2; float x3; })emissive;
- (BOOL)isLayerEnabledForIndex:(unsigned long long)a0;
- (float)layerScaleForIndex:(unsigned long long)a0;
- (float)layerRotationForIndex:(unsigned long long)a0;
- (BOOL)layerIsEnvironmentMapForIndex:(unsigned long long)a0;
- (long long)layerBlendModeForIndex:(unsigned long long)a0;
- (int)layerTilingModeForIndex:(unsigned long long)a0;
- (id)layerLightenPercentageForIndex:(unsigned long long)a0;
- (id)textureForIndex:(unsigned long long)a0;
- (id)fillSetIdentifier;
- (void)p_addMaterial:(id)a0 blendMode:(long long)a1;
- (id)diffuseMaterial;
- (id)modulateMaterial;
- (unsigned long long)diffuseCount;
- (unsigned long long)modulateCount;

@end
