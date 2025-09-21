@class NSString, TRIMLRuntimeSchedulingPolicy;

@interface TRIMLRuntimeEvaluation : TRIPBMessage

@property (copy, nonatomic) NSString *pluginId;
@property (nonatomic) char hasPluginId;
@property (retain, nonatomic) TRIMLRuntimeSchedulingPolicy *schedulingPolicy;
@property (nonatomic) char hasSchedulingPolicy;
@property (copy, nonatomic) NSString *evaluationId;
@property (nonatomic) char hasEvaluationId;
@property (nonatomic) int pluginProjectId;
@property (nonatomic) char hasPluginProjectId;
@property (copy, nonatomic) NSString *pluginProjectName;
@property (nonatomic) char hasPluginProjectName;

+ (id)descriptor;

@end
