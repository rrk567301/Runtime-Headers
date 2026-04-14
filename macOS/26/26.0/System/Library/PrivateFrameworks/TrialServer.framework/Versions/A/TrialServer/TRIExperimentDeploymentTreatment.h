@class NSString;

@interface TRIExperimentDeploymentTreatment : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *experimentId;
@property (readonly, nonatomic) int deploymentId;
@property (readonly, nonatomic) NSString *treatmentId;

+ (id)treatmentTripleWithExperimentId:(id)a0 deploymentId:(int)a1 treatmentId:(id)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithReplacementExperimentId:(id)a0;
- (id)init;
- (id)description;
- (id)initWithExperimentId:(id)a0 deploymentId:(int)a1 treatmentId:(id)a2;
- (id)copyWithReplacementDeploymentId:(int)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithReplacementTreatmentId:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqualTotreatmentTriple:(id)a0;

@end
