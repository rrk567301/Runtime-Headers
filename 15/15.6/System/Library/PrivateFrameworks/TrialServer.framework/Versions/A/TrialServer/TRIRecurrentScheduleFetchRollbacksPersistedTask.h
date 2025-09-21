@class TRIPersistedTaskAttribution;

@interface TRIRecurrentScheduleFetchRollbacksPersistedTask : TRIPBMessage

@property (retain, nonatomic) TRIPersistedTaskAttribution *taskAttribution;
@property (nonatomic) char hasTaskAttribution;
@property (nonatomic) char isRepeatedInstance;
@property (nonatomic) char hasIsRepeatedInstance;

+ (id)descriptor;

@end
