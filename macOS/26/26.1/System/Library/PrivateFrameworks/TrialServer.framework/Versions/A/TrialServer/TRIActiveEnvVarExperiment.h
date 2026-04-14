@class NSArray;

@interface TRIActiveEnvVarExperiment : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *targetedBundleIds;
@property (readonly, nonatomic) NSArray *factorLevelStrings;

+ (id)envVarExperimentWithTargetedBundleIds:(id)a0 factorLevelStrings:(id)a1;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithReplacementFactorLevelStrings:(id)a0;
- (id)copyWithReplacementTargetedBundleIds:(id)a0;
- (id)initWithTargetedBundleIds:(id)a0 factorLevelStrings:(id)a1;
- (BOOL)isEqualToenvVarExperiment:(id)a0;

@end
