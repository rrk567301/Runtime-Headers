@class NSArray;

@interface TRIActiveEnvVarExperiment : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *targetedBundleIds;
@property (readonly, nonatomic) NSArray *factorLevelStrings;

+ (id)envVarExperimentWithTargetedBundleIds:(id)a0 factorLevelStrings:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)copyWithReplacementFactorLevelStrings:(id)a0;
- (id)copyWithReplacementTargetedBundleIds:(id)a0;
- (id)initWithTargetedBundleIds:(id)a0 factorLevelStrings:(id)a1;
- (BOOL)isEqualToenvVarExperiment:(id)a0;

@end
