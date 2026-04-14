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
@property (readonly, nonatomic) BOOL isManuallyTargeted;
@property (readonly, nonatomic) TRIClientExperimentArtifact *artifact;
@property (readonly, nonatomic) int experimentType;

+ (id)recordWithDeploymentEnvironment:(int)a0 experimentDeployment:(id)a1 treatmentId:(id)a2 factorPackSetId:(id)a3 type:(int)a4 status:(long long)a5 startDate:(id)a6 endDate:(id)a7 namespaces:(id)a8 isManuallyTargeted:(BOOL)a9 artifact:(id)a10 experimentType:(int)a11;

- (id)copyWithReplacementStartDate:(id)a0;
- (id)copyWithReplacementArtifact:(id)a0;
- (BOOL)isEqualToRecord:(id)a0;
- (id)copyWithReplacementNamespaces:(id)a0;
- (id)copyWithReplacementTreatmentId:(id)a0;
- (BOOL)isExpiredExperiment;
- (id)initWithDeploymentEnvironment:(int)a0 experimentDeployment:(id)a1 treatmentId:(id)a2 factorPackSetId:(id)a3 type:(int)a4 status:(long long)a5 startDate:(id)a6 endDate:(id)a7 namespaces:(id)a8 isManuallyTargeted:(BOOL)a9 artifact:(id)a10 experimentType:(int)a11;
- (unsigned long long)hash;
- (id)copyWithReplacementEndDate:(id)a0;
- (id)copyWithReplacementFactorPackSetId:(id)a0;
- (id)copyWithReplacementDeploymentEnvironment:(int)a0;
- (BOOL)requiresTreatmentInstall;
- (id)copyWithReplacementStatus:(long long)a0;
- (id)copyWithReplacementType:(int)a0;
- (id)copyWithReplacementIsManuallyTargeted:(BOOL)a0;
- (id)copyWithReplacementExperimentType:(int)a0;
- (id)description;
- (id)versionedNamespaces;
- (id)copyWithReplacementExperimentDeployment:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)hasCounterfactualTreatmentReferencingFactorPackSetId:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)counterfactualsTreatmentsToFactorPackSetIds;

@end
