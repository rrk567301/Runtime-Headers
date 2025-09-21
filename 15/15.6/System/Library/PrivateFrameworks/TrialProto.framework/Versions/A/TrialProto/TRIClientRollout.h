@class NSString, TRIShadowEvaluation, TRIAssignment, NSMutableArray;

@interface TRIClientRollout : TRIPBMessage

@property (copy, nonatomic) NSString *rolloutId;
@property (nonatomic) char hasRolloutId;
@property (nonatomic) unsigned int deploymentId;
@property (nonatomic) char hasDeploymentId;
@property (retain, nonatomic) TRIAssignment *assignment;
@property (nonatomic) char hasAssignment;
@property (retain, nonatomic) TRIShadowEvaluation *shadowEvaluation;
@property (nonatomic) char hasShadowEvaluation;
@property (retain, nonatomic) NSMutableArray *selectedNamespaceArray;
@property (readonly, nonatomic) unsigned long long selectedNamespaceArray_Count;
@property (copy, nonatomic) NSString *rampId;
@property (nonatomic) char hasRampId;
@property (copy, nonatomic) NSString *channelId;
@property (nonatomic) char hasChannelId;

+ (id)descriptor;

@end
