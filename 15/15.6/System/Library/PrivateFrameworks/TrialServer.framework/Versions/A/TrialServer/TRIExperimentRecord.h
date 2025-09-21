@class NSString, NSArray, TRIClientExperimentArtifact, NSDate, TRIExperimentDeployment;
@protocol TRIFactorPackSetId;

@interface TRIExperimentRecord : NSObject <NSCopying>

@property (readonly, nonatomic) int deploymentEnvironment;
@property (readonly, nonatomic) TRIExperimentDeployment *experimentDeployment;
@property (readonly, nonatomic) NSString *treatmentId;
@property (readonly, nonatomic) NSString<TRIFactorPackSetId> *factorPackSetId;
@property (readonly, nonatomic) int type;
@property (readonly, nonatomic) long long status;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) NSArray *namespaces;
@property (readonly, nonatomic) char isShadow;
@property (readonly, nonatomic) char isManuallyTargeted;
@property (readonly, nonatomic) TRIClientExperimentArtifact *artifact;

+ (id)recordWithDeploymentEnvironment:(int)a0 experimentDeployment:(id)a1 treatmentId:(id)a2 factorPackSetId:(id)a3 type:(int)a4 status:(long long)a5 startDate:(id)a6 endDate:(id)a7 namespaces:(id)a8 isShadow:(char)a9 isManuallyTargeted:(char)a10 artifact:(id)a11;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (char)isEqualToRecord:(id)a0;
- (id)copyWithReplacementTreatmentId:(id)a0;
- (id)copyWithReplacementDeploymentEnvironment:(int)a0;
- (id)copyWithReplacementEndDate:(id)a0;
- (id)copyWithReplacementExperimentDeployment:(id)a0;
- (id)copyWithReplacementFactorPackSetId:(id)a0;
- (id)copyWithReplacementIsShadow:(char)a0;
- (id)copyWithReplacementNamespaces:(id)a0;
- (id)copyWithReplacementStartDate:(id)a0;
- (id)copyWithReplacementStatus:(long long)a0;
- (id)copyWithReplacementType:(int)a0;
- (id)copyWithReplacementArtifact:(id)a0;
- (id)copyWithReplacementIsManuallyTargeted:(char)a0;
- (id)counterfactualsTreatmentsToFactorPackSetIds;
- (char)hasCounterfactualTreatmentReferencingFactorPackSetId:(id)a0;
- (id)initWithDeploymentEnvironment:(int)a0 experimentDeployment:(id)a1 treatmentId:(id)a2 factorPackSetId:(id)a3 type:(int)a4 status:(long long)a5 startDate:(id)a6 endDate:(id)a7 namespaces:(id)a8 isShadow:(char)a9 isManuallyTargeted:(char)a10 artifact:(id)a11;
- (char)isExpiredExperiment;
- (id)versionedNamespaces;

@end
