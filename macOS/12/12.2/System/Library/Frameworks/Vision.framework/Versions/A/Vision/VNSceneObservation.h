@class NSArray, NSString;

@interface VNSceneObservation : VNFeaturePrintObservation

@property (readonly, nonatomic) NSArray *sceneprints;
@property (readonly, copy, nonatomic) NSString *sceneprintVersion;

+ (BOOL)supportsSecureCoding;
+ (id)defaultOriginatingRequestClassNameForRequestRevision:(unsigned long long)a0;
+ (id)sceneprintCurrentVersion;
+ (id)observationWithSceneprints:(id)a0;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)data;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)elementType;
- (unsigned long long)elementCount;
- (id)vn_cloneObject;
- (id)initWithRequestRevision:(unsigned long long)a0 sceneprints:(id)a1;
- (id)initWithOriginatingRequestSpecifier:(id)a0 sceneprints:(id)a1;

@end
