@class TRIPersistedTaskAttribution, TRIPBTimestamp, NSMutableArray;

@interface TRIFetchExperimentNotificationsPersistedTask : TRIPBMessage

@property (retain, nonatomic) TRIPBTimestamp *earliestTimestamp;
@property (nonatomic) char hasEarliestTimestamp;
@property (retain, nonatomic) NSMutableArray *namespacesArray;
@property (readonly, nonatomic) unsigned long long namespacesArray_Count;
@property (nonatomic) char rollbacksOnly;
@property (nonatomic) char hasRollbacksOnly;
@property (retain, nonatomic) TRIPersistedTaskAttribution *taskAttribution;
@property (nonatomic) char hasTaskAttribution;
@property (nonatomic) int retryCount;
@property (nonatomic) char hasRetryCount;
@property (nonatomic) char limitedCarryOnly;
@property (nonatomic) char hasLimitedCarryOnly;

+ (id)descriptor;

@end
