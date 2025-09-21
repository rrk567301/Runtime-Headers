@class NSString, NSArray, NSDictionary, SGTypeDescription, NSData;

@interface SGREMaterial : NSObject {
    void /* function */ surfaceShaderFunctionName;
    void /* function */ geometryModifierFunctionName;
    void /* function */ uniforms;
    void /* function */ functionConstantInputs;
    void /* function */ textures;
    void /* function */ warnings;
    void /* unknown type, empty encoding */ graph;
    void /* unknown type, empty encoding */ internalGraph;
    void /* unknown type, empty encoding */ config;
    void /* unknown type, empty encoding */ textureAssignments;
    void /* unknown type, empty encoding */ customUniformsType;
    void /* unknown type, empty encoding */ functionConstantValues;
    void /* unknown type, empty encoding */ edgeDigest;
    void /* unknown type, empty encoding */ sourceHash;
    void /* unknown type, empty encoding */ operationalHash;
    void /* unknown type, empty encoding */ operationalHashString;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *surfaceShaderFunctionName;
@property (nonatomic, readonly) NSString *geometryModifierFunctionName;
@property (nonatomic, readonly) NSArray *uniforms;
@property (nonatomic, copy) NSArray *functionConstantInputs;
@property (nonatomic, copy) NSDictionary *textures;
@property (nonatomic, readonly) unsigned long long lightingModel;
@property (nonatomic, readonly) unsigned long long blending;
@property (nonatomic, readonly) BOOL hasPremultipliedAlpha;
@property (nonatomic, readonly) BOOL matchUnlitColor;
@property (nonatomic, readonly) NSArray *warnings;
@property (nonatomic, readonly) BOOL hasSurfaceShaderUniforms;
@property (nonatomic, readonly) BOOL hasGeometryModifierUniforms;
@property (nonatomic, readonly) BOOL hasConnectedLightSpillNodes;
@property (nonatomic, readonly) BOOL hasConnectedLightSpillNodesWithRoughness;
@property (nonatomic, readonly) BOOL hasBackgroundBlur;
@property (nonatomic, readonly) BOOL hasGeometryModifierOffset;
@property (nonatomic, readonly) BOOL hasTimeVaryingFeatures;
@property (nonatomic, readonly) BOOL applyPostProcessTonemap;
@property (nonatomic, readonly) SGTypeDescription *customUniformsType;
@property (nonatomic, readonly) NSData *SHA512Hash;
@property (nonatomic, readonly) NSString *debugHash;
@property (nonatomic, readonly) long long hash;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
