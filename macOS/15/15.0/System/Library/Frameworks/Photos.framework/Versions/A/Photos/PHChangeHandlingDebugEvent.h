@interface PHChangeHandlingDebugEvent : NSObject

@property double startTimestamp;
@property unsigned int qosClass;
@property unsigned long long threadID;
@property unsigned long long internalObserversCount;
@property unsigned long long externalObserversCount;
@property unsigned long long insertedCount;
@property unsigned long long updatedCount;
@property unsigned long long deletedCount;
@property BOOL unknownMergeEvent;
@property unsigned long long fetchResultCount;
@property double distributeInternalTimestamp;
@property double distributeExternalTimestamp;
@property double endTimestamp;
@property unsigned long long lastTransactionNumber;
@property long long transactionCount;
@property long long changeCount;
@property (readonly, getter=isValue) BOOL valid;

- (id)description;
- (BOOL)isValid;
- (void)start;
- (void)reset;

@end
