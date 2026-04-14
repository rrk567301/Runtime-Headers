@class NSString, NSNumber;

@interface PLPersistentHistoryDistributionEvent : PFAbstractStateCaptureEvent

@property (copy) NSString *reason;
@property (readonly) NSString *eventDescription;
@property unsigned long long observerCount;
@property BOOL shouldDistributeTransactions;
@property (copy) NSNumber *lastTransaction;
@property void *iteratorPointer;
@property BOOL forceUserInterfaceReload;
@property unsigned long long transactionCount;
@property unsigned long long localEventCount;
@property BOOL unknownMergeEvent;
@property (copy) NSNumber *iteratedTransaction;
@property double mergeTimestamp;
@property unsigned long long mergeThreadID;
@property BOOL mergeInvalidated;
@property unsigned long long mergedContextCount;
@property unsigned long long releventContextCount;
@property double postTimestamp;

- (void)reset;
- (void).cxx_destruct;
- (void)startDistributionWithReason:(id)a0;

@end
