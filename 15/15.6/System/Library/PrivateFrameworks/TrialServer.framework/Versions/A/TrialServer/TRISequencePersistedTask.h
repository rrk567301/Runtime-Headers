@class TRIAnyPersistedTask;

@interface TRISequencePersistedTask : TRIPBMessage

@property (retain, nonatomic) TRIAnyPersistedTask *task;
@property (nonatomic) char hasTask;
@property (retain, nonatomic) TRIAnyPersistedTask *dependentTask;
@property (nonatomic) char hasDependentTask;

+ (id)descriptor;

@end
