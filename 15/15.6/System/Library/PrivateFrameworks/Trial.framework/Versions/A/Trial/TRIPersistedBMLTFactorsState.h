@class NSString;

@interface TRIPersistedBMLTFactorsState : TRIPBMessage

@property (copy, nonatomic) NSString *bmltId;
@property (nonatomic) char hasBmltId;
@property (nonatomic) int deploymentId;
@property (nonatomic) char hasDeploymentId;

+ (id)descriptor;

@end
