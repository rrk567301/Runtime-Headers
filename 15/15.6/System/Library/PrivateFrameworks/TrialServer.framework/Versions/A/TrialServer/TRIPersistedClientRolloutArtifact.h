@class TRIPBTimestamp, TRIPBUInt32Array, TRIClientRollout;

@interface TRIPersistedClientRolloutArtifact : TRIPBMessage

@property (retain, nonatomic) TRIClientRollout *rollout;
@property (nonatomic) char hasRollout;
@property (retain, nonatomic) TRIPBUInt32Array *populationsArray;
@property (readonly, nonatomic) unsigned long long populationsArray_Count;
@property (retain, nonatomic) TRIPBTimestamp *deploymentDate;
@property (nonatomic) char hasDeploymentDate;
@property (nonatomic) unsigned long long downloadSize;
@property (nonatomic) char hasDownloadSize;

+ (id)descriptor;

@end
