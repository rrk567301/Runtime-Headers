@class TRIPBTimestamp, TRIClientBackgroundMLTask, TRIPBUInt32Array;

@interface TRIPersistedClientBMLTArtifact : TRIPBMessage

@property (retain, nonatomic) TRIClientBackgroundMLTask *backgroundMlTask;
@property (nonatomic) char hasBackgroundMlTask;
@property (retain, nonatomic) TRIPBUInt32Array *populationsArray;
@property (readonly, nonatomic) unsigned long long populationsArray_Count;
@property (retain, nonatomic) TRIPBTimestamp *deploymentDate;
@property (nonatomic) char hasDeploymentDate;
@property (nonatomic) unsigned long long downloadSize;
@property (nonatomic) char hasDownloadSize;
@property (nonatomic) int deploymentType;
@property (nonatomic) char hasDeploymentType;

+ (id)descriptor;

@end
