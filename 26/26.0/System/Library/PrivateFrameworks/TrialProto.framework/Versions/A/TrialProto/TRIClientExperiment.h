@class NSString, TRIPBTimestamp, NSMutableDictionary, TRICounterfactualLogging, TRIAssignment, TRILowLevelExperimentConfiguration;

@interface TRIClientExperiment : TRIPBMessage

@property (copy, nonatomic) NSString *experimentId;
@property (nonatomic) BOOL hasExperimentId;
@property (nonatomic) int projectId;
@property (nonatomic) BOOL hasProjectId;
@property (retain, nonatomic) TRIPBTimestamp *startDate;
@property (nonatomic) BOOL hasStartDate;
@property (retain, nonatomic) TRIPBTimestamp *endDate;
@property (nonatomic) BOOL hasEndDate;
@property (retain, nonatomic) TRIAssignment *assignment;
@property (nonatomic) BOOL hasAssignment;
@property (nonatomic) unsigned int seed;
@property (nonatomic) BOOL hasSeed;
@property (nonatomic) unsigned int deploymentId;
@property (nonatomic) BOOL hasDeploymentId;
@property (copy, nonatomic) NSString *projectName;
@property (nonatomic) BOOL hasProjectName;
@property (copy, nonatomic) NSString *channelId;
@property (nonatomic) BOOL hasChannelId;
@property (retain, nonatomic) NSMutableDictionary *factorPackSetMapping;
@property (readonly, nonatomic) unsigned long long factorPackSetMapping_Count;
@property (retain, nonatomic) TRILowLevelExperimentConfiguration *lowLevelConfiguration;
@property (nonatomic) BOOL hasLowLevelConfiguration;
@property (nonatomic) int type;
@property (nonatomic) BOOL hasType;
@property (nonatomic) int priority;
@property (nonatomic) BOOL hasPriority;
@property (nonatomic) BOOL dynamicEnrollmentEnabled;
@property (nonatomic) BOOL hasDynamicEnrollmentEnabled;
@property (nonatomic) int experimentType;
@property (nonatomic) BOOL hasExperimentType;
@property (nonatomic) unsigned int schemaVersion;
@property (nonatomic) BOOL hasSchemaVersion;
@property (retain, nonatomic) TRICounterfactualLogging *counterfactualLogging;
@property (nonatomic) BOOL hasCounterfactualLogging;

+ (id)descriptor;

@end
