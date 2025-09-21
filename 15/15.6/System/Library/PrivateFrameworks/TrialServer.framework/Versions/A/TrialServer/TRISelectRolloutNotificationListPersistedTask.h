@class TRIPersistedTaskAttribution, NSMutableArray;

@interface TRISelectRolloutNotificationListPersistedTask : TRIPBMessage

@property (retain, nonatomic) TRIPersistedTaskAttribution *taskAttribution;
@property (nonatomic) char hasTaskAttribution;
@property (nonatomic) int retryCount;
@property (nonatomic) char hasRetryCount;
@property (retain, nonatomic) NSMutableArray *namespacesArray;
@property (readonly, nonatomic) unsigned long long namespacesArray_Count;

+ (id)descriptor;

@end
