@class NSString;

@interface TRIExperimentDeploymentTreatment : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *experimentId;
@property (readonly, nonatomic) int deploymentId;
@property (readonly, nonatomic) NSString *treatmentId;

+ (id)treatmentTripleWithExperimentId:(id)a0 deploymentId:(int)a1 treatmentId:(id)a2;

- (id)copyWithReplacementTreatmentId:(id)a0;
- (id)copyWithReplacementDeploymentId:(int)a0;
- (id)description;
- (id)initWithExperimentId:(id)a0 deploymentId:(int)a1 treatmentId:(id)a2;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithReplacementExperimentId:(id)a0;
- (BOOL)isEqualTotreatmentTriple:(id)a0;

@end
