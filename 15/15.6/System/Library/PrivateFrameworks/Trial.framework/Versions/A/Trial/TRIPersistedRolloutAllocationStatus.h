@class NSString, NSMutableArray;

@interface TRIPersistedRolloutAllocationStatus : TRIPBMessage

@property (copy, nonatomic) NSString *rolloutId;
@property (nonatomic) char hasRolloutId;
@property (nonatomic) int deploymentId;
@property (nonatomic) char hasDeploymentId;
@property (retain, nonatomic) NSMutableArray *namespaceFactorPackArray;
@property (readonly, nonatomic) unsigned long long namespaceFactorPackArray_Count;
@property (copy, nonatomic) NSString *rampId;
@property (nonatomic) char hasRampId;

+ (id)descriptor;

@end
