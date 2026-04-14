@class NSArray, NSString;

@interface VNSceneObservation : VNFeaturePrintObservation

@property (readonly, nonatomic) NSArray *sceneprints;
@property (readonly, copy, nonatomic) NSString *sceneprintVersion;

+ (id)defaultOriginatingRequestClassNameForRequestRevision:(unsigned long long)a0;
+ (BOOL)supportsSecureCoding;
+ (id)sceneprintCurrentVersion;
+ (id)observationWithSceneprints:(id)a0;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (unsigned long long)elementType;
- (void).cxx_destruct;
- (id)data;
- (unsigned long long)elementCount;
- (id)VNCoreMLTransformerSceneprintsAndReturnError:(id *)a0;
- (id)initWithOriginatingRequestSpecifier:(id)a0 sceneprints:(id)a1;
- (id)initWithRequestRevision:(unsigned long long)a0 sceneprints:(id)a1;
- (id)vn_cloneObject;

@end
