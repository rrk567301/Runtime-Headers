@class VNPersonsModelAlgorithm, NSNumber;

@interface VNPersonsModelConfiguration : NSObject <NSCopying, NSSecureCoding> {
    NSNumber *_explicitlySetMaximumIdentities;
    NSNumber *_explicitlySetMaximumTrainingFaceprintsPerIdentity;
}

@property (class, readonly, nonatomic) unsigned long long maximumAllowableIdentities;
@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) VNPersonsModelAlgorithm *algorithm;
@property (nonatomic) unsigned long long maximumIdentities;
@property (nonatomic) unsigned long long maximumTrainingFaceprintsPerIdentity;
@property (nonatomic) unsigned long long faceprintRequestRevision;

+ (unsigned long long)maximumAllowableFaceprintsPerIdentity;

- (int)faceID3ModelMaximumIDs;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)faceID3ModelMaximumElementsPerID;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (int)faceID3IndexMode;
- (id)resolvedAlgorithmAndReturnError:(id *)a0;
- (id)algorithmOfClass:(Class)a0 error:(id *)a1;
- (id)init;
- (id)description;
- (int)faceID2ModelMaximumElementsPerID;
- (id)initWithCoder:(id)a0;
- (int)faceID3ModelSeed;

@end
