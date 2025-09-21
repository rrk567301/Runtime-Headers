@class NSString;

@interface TRIBmltDeploymentId : TRIPBMessage

@property (copy, nonatomic) NSString *taskId;
@property (nonatomic) char hasTaskId;
@property (nonatomic) unsigned int id_p;
@property (nonatomic) char hasId_p;

+ (id)descriptor;

@end
