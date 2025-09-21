@class TRIPersistedNetworkBehavior;

@interface TRIScheduleFetchExperimentNotificationsPersistedTask : TRIPBMessage

@property (nonatomic) char rollbacksOnly;
@property (nonatomic) char hasRollbacksOnly;
@property (retain, nonatomic) TRIPersistedNetworkBehavior *networkBehavior;
@property (nonatomic) char hasNetworkBehavior;

+ (id)descriptor;

@end
