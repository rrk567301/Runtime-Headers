@interface VNPersonsModelConfiguration : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly, nonatomic) unsigned long long maximumAllowableIdentities;
@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long maximumIdentities;
@property (nonatomic) unsigned long long maximumTrainingFaceprintsPerIdentity;
@property (nonatomic) unsigned long long faceprintRequestRevision;

+ (unsigned long long)maximumAllowableFaceprintsPerIdentity;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (int)faceIDModelMaximumElementsPerID;

@end
