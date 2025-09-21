@class TRIPersistedAllocationCommon, NSString, NSMutableArray;

@interface TRIPersistedExperimentAllocationStatus : TRIPBMessage

@property (retain, nonatomic) TRIPersistedAllocationCommon *common;
@property (nonatomic) char hasCommon;
@property (copy, nonatomic) NSString *experimentId;
@property (nonatomic) char hasExperimentId;
@property (nonatomic) int deploymentId;
@property (nonatomic) char hasDeploymentId;
@property (copy, nonatomic) NSString *treatmentId;
@property (nonatomic) char hasTreatmentId;
@property (retain, nonatomic) NSMutableArray *namespaceArray;
@property (readonly, nonatomic) unsigned long long namespaceArray_Count;

+ (id)descriptor;

@end
