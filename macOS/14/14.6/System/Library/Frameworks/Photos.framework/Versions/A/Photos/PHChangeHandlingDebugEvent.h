@interface PHChangeHandlingDebugEvent : NSObject

@property unsigned long long internalObserversCount;
@property unsigned long long externalObserversCount;
@property unsigned long long insertedCount;
@property unsigned long long updatedCount;
@property unsigned long long deletedCount;
@property BOOL unknownMergeEvent;
@property unsigned long long fetchResultCount;
@property double startTimestamp;
@property double distributeInternalTimestamp;
@property double distributeExternalTimestamp;
@property double endTimestamp;
@property unsigned int qosClass;

- (id)description;
- (id)init;
- (void)reset;
- (id)initWithStartTimestamp:(double)a0;

@end
