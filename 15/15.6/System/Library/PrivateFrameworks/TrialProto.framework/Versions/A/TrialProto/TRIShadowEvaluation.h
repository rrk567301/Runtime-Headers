@class TRIClientBackgroundMLTask, TRIMLRuntimeEvaluation;

@interface TRIShadowEvaluation : TRIPBMessage

@property (readonly, nonatomic) int typeOneOfCase;
@property (retain, nonatomic) TRIMLRuntimeEvaluation *mlRuntime;
@property (retain, nonatomic) TRIClientBackgroundMLTask *clientBackgroundMlTask;
@property (nonatomic) char hasClientBackgroundMlTask;

+ (id)descriptor;

@end
