@interface PHChangeHandlingDebugEvent : NSObject

@property unsigned long long kind;
@property double startTimestamp;
@property unsigned int qosClass;
@property unsigned long long threadID;
@property unsigned long long internalObserversCount;
@property unsigned long long externalObserversCount;
@property double distributeInternalTimestamp;
@property double distributeExternalTimestamp;
@property double endTimestamp;
@property unsigned long long insertedCount;
@property unsigned long long updatedCount;
@property unsigned long long deletedCount;
@property BOOL unknownMergeEvent;
@property unsigned long long fetchResultCount;
@property unsigned long long lastTransactionNumber;
@property long long transactionCount;
@property long long changeCount;
@property BOOL cloudSyncEnabled;
@property double lastSyncTimestamp;
@property double firstSyncTimestamp;
@property (readonly, getter=isValue) BOOL valid;

- (id)description;
- (BOOL)isValid;
- (void)reset;
- (void)_start;
- (void)startProcessPendingChanges;
- (void)startPublishCloudStatus;

@end
