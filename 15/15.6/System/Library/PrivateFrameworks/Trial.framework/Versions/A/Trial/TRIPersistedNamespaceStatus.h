@class NSString, TRIPBTimestamp;

@interface TRIPersistedNamespaceStatus : TRIPBMessage

@property (copy, nonatomic) NSString *namespaceName;
@property (nonatomic) char hasNamespaceName;
@property (nonatomic) unsigned int namespaceCompatibilityVersion;
@property (nonatomic) char hasNamespaceCompatibilityVersion;
@property (retain, nonatomic) TRIPBTimestamp *latestNotificationQueryLocalTime;
@property (nonatomic) char hasLatestNotificationQueryLocalTime;
@property (nonatomic) char lastFetchWasSuccess;
@property (nonatomic) char hasLastFetchWasSuccess;

+ (id)descriptor;

@end
