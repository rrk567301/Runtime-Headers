@class TRIPersistedTaskAttribution, NSMutableArray;

@interface TRISelectRolloutNotificationListPersistedTask : TRIPBMessage

@property (retain, nonatomic) TRIPersistedTaskAttribution *taskAttribution;
@property (nonatomic) BOOL hasTaskAttribution;
@property (nonatomic) int retryCount;
@property (nonatomic) BOOL hasRetryCount;
@property (retain, nonatomic) NSMutableArray *namespacesArray;
@property (readonly, nonatomic) unsigned long long namespacesArray_Count;
@property (retain, nonatomic) NSMutableArray *excludedNamespacesArray;
@property (readonly, nonatomic) unsigned long long excludedNamespacesArray_Count;

+ (id)descriptor;

@end
