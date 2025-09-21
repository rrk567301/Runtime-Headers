@class TRICounterfactualLogging, NSString, TRIPBTimestamp, TRIShadowEvaluation, NSMutableDictionary, TRIAssignment, TRILowLevelExperimentConfiguration;

@interface TRIClientExperiment : TRIPBMessage

@property (copy, nonatomic) NSString *experimentId;
@property (nonatomic) char hasExperimentId;
@property (nonatomic) int projectId;
@property (nonatomic) char hasProjectId;
@property (retain, nonatomic) TRIPBTimestamp *startDate;
@property (nonatomic) char hasStartDate;
@property (retain, nonatomic) TRIPBTimestamp *endDate;
@property (nonatomic) char hasEndDate;
@property (retain, nonatomic) TRIAssignment *assignment;
@property (nonatomic) char hasAssignment;
@property (nonatomic) unsigned int seed;
@property (nonatomic) char hasSeed;
@property (nonatomic) unsigned int deploymentId;
@property (nonatomic) char hasDeploymentId;
@property (copy, nonatomic) NSString *projectName;
@property (nonatomic) char hasProjectName;
@property (retain, nonatomic) TRIShadowEvaluation *shadowEvaluation;
@property (nonatomic) char hasShadowEvaluation;
@property (copy, nonatomic) NSString *channelId;
@property (nonatomic) char hasChannelId;
@property (retain, nonatomic) NSMutableDictionary *factorPackSetMapping;
@property (readonly, nonatomic) unsigned long long factorPackSetMapping_Count;
@property (retain, nonatomic) TRILowLevelExperimentConfiguration *lowLevelConfiguration;
@property (nonatomic) char hasLowLevelConfiguration;
@property (nonatomic) int type;
@property (nonatomic) char hasType;
@property (nonatomic) int priority;
@property (nonatomic) char hasPriority;
@property (nonatomic) char dynamicEnrollmentEnabled;
@property (nonatomic) char hasDynamicEnrollmentEnabled;
@property (nonatomic) int experimentType;
@property (nonatomic) char hasExperimentType;
@property (nonatomic) unsigned int schemaVersion;
@property (nonatomic) char hasSchemaVersion;
@property (retain, nonatomic) TRICounterfactualLogging *counterfactualLogging;
@property (nonatomic) char hasCounterfactualLogging;

+ (id)descriptor;

@end
