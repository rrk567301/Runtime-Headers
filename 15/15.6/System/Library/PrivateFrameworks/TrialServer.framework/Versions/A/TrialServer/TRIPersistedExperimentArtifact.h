@class NSString, TRIPBTimestamp, NSData, TRIPBUInt32Array, NSMutableArray;

@interface TRIPersistedExperimentArtifact : TRIPBMessage

@property (copy, nonatomic) NSString *experimentId;
@property (nonatomic) char hasExperimentId;
@property (nonatomic) int deploymentId;
@property (nonatomic) char hasDeploymentId;
@property (nonatomic) int cloudKitContainer;
@property (nonatomic) char hasCloudKitContainer;
@property (copy, nonatomic) NSString *teamId;
@property (nonatomic) char hasTeamId;
@property (nonatomic) int status;
@property (nonatomic) char hasStatus;
@property (nonatomic) int type;
@property (nonatomic) char hasType;
@property (nonatomic) int priority;
@property (nonatomic) char hasPriority;
@property (nonatomic) int projectId;
@property (nonatomic) char hasProjectId;
@property (copy, nonatomic) NSData *encodedExperimentDefinition;
@property (nonatomic) char hasEncodedExperimentDefinition;
@property (copy, nonatomic) NSString *encodedExperimentDefinitionSignature;
@property (nonatomic) char hasEncodedExperimentDefinitionSignature;
@property (copy, nonatomic) NSData *publicCertificate;
@property (nonatomic) char hasPublicCertificate;
@property (nonatomic) char internalBuildOnly;
@property (nonatomic) char hasInternalBuildOnly;
@property (retain, nonatomic) TRIPBTimestamp *deploymentDate;
@property (nonatomic) char hasDeploymentDate;
@property (retain, nonatomic) NSMutableArray *namespacesArray;
@property (readonly, nonatomic) unsigned long long namespacesArray_Count;
@property (retain, nonatomic) TRIPBUInt32Array *namespaceCompatibilityVersionsArray;
@property (readonly, nonatomic) unsigned long long namespaceCompatibilityVersionsArray_Count;
@property (nonatomic) int deploymentEnvironment;
@property (nonatomic) char hasDeploymentEnvironment;

+ (id)descriptor;

@end
