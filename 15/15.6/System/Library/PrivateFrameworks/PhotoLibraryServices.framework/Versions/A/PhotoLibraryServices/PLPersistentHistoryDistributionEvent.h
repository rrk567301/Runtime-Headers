@class NSString, NSNumber;

@interface PLPersistentHistoryDistributionEvent : PFAbstractStateCaptureEvent

@property (copy) NSString *reason;
@property (readonly) NSString *eventDescription;
@property unsigned long long observerCount;
@property char shouldDistributeTransactions;
@property (copy) NSNumber *lastTransaction;
@property void *iteratorPointer;
@property char forceUserInterfaceReload;
@property unsigned long long transactionCount;
@property unsigned long long localEventCount;
@property char unknownMergeEvent;
@property (copy) NSNumber *iteratedTransaction;
@property double mergeTimestamp;
@property unsigned long long mergeThreadID;
@property char mergeInvalidated;
@property unsigned long long mergedContextCount;
@property unsigned long long releventContextCount;
@property double postTimestamp;

- (void).cxx_destruct;
- (void)reset;
- (void)startDistributionWithReason:(id)a0;

@end
