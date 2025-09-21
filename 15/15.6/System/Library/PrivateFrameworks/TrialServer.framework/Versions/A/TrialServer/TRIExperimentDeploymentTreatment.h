@class NSString;

@interface TRIExperimentDeploymentTreatment : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSString *experimentId;
@property (readonly, nonatomic) int deploymentId;
@property (readonly, nonatomic) NSString *treatmentId;

+ (id)treatmentTripleWithExperimentId:(id)a0 deploymentId:(int)a1 treatmentId:(id)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithReplacementTreatmentId:(id)a0;
- (id)copyWithReplacementDeploymentId:(int)a0;
- (id)copyWithReplacementExperimentId:(id)a0;
- (id)initWithExperimentId:(id)a0 deploymentId:(int)a1 treatmentId:(id)a2;
- (char)isEqualTotreatmentTriple:(id)a0;

@end
