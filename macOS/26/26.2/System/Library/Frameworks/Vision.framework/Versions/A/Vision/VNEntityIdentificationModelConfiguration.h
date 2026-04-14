@class NSArray, VNRequestSpecifier, VNEntityIdentificationModelAlgorithm;

@interface VNEntityIdentificationModelConfiguration : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long _maximumEntities;
    unsigned long long _maximumTrainingPrintsPerEntity;
}

@property (class, readonly) unsigned long long maximumAllowableEntities;
@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) VNEntityIdentificationModelAlgorithm *algorithm;
@property (readonly, copy) VNRequestSpecifier *entityPrintOriginatingRequestSpecifier;
@property (readonly, copy) NSArray *acceptableEntityPrintOriginatingRequestSpecifiers;
@property unsigned long long maximumEntities;
@property unsigned long long maximumTrainingPrintsPerEntity;

+ (unsigned long long)maximumAllowableFaceprintsPerIdentity;
+ (id)newConfigurationForEntityPrintsGeneratedByRequest:(id)a0 error:(id *)a1;

- (id)algorithmOfClass:(Class)a0 error:(id *)a1;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)resolvedAlgorithmAndReturnError:(id *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (int)faceID3ModelMaximumElementsPerID;
- (id)description;
- (int)faceID3IndexMode;
- (int)faceID3ModelMaximumIDs;
- (int)faceID3ModelSeed;
- (int)faceIDModelMaximumElementsPerID;
- (id)initWithEntityPrintOriginatingRequestSpecifier:(id)a0;

@end
