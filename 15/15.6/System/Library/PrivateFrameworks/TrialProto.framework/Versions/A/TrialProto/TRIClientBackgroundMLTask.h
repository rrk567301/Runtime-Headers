@class TRIPBStruct, NSString, TRIPBTimestamp, TRIClientSelectedNamespace, TRIAssignment, NSMutableArray;

@interface TRIClientBackgroundMLTask : TRIPBMessage

@property (copy, nonatomic) NSString *taskId;
@property (nonatomic) char hasTaskId;
@property (nonatomic) unsigned int deploymentId;
@property (nonatomic) char hasDeploymentId;
@property (nonatomic) int projectId;
@property (nonatomic) char hasProjectId;
@property (copy, nonatomic) NSString *namespaceId;
@property (nonatomic) char hasNamespaceId;
@property (copy, nonatomic) NSString *pluginId;
@property (nonatomic) char hasPluginId;
@property (retain, nonatomic) TRIPBStruct *schedulingPolicy;
@property (nonatomic) char hasSchedulingPolicy;
@property (retain, nonatomic) TRIAssignment *customTargeting;
@property (nonatomic) char hasCustomTargeting;
@property (retain, nonatomic) NSMutableArray *customTargetingKeysArray;
@property (readonly, nonatomic) unsigned long long customTargetingKeysArray_Count;
@property (retain, nonatomic) TRIAssignment *assignment;
@property (nonatomic) char hasAssignment;
@property (retain, nonatomic) TRIPBTimestamp *endDate;
@property (nonatomic) char hasEndDate;
@property (retain, nonatomic) TRIClientSelectedNamespace *selectedNamespace;
@property (nonatomic) char hasSelectedNamespace;
@property (retain, nonatomic) TRIPBTimestamp *startDate;
@property (nonatomic) char hasStartDate;

+ (id)descriptor;

@end
