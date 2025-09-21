@protocol HMEThreadSafePendingEventsCollectionDelegate;

@interface HMEThreadSafePendingEventsCollection : HMEPendingEventsCollection {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    long long _expectedEventAdditionCount;
}

@property (nonatomic) char isFinishedAddingItems;
@property (weak, nonatomic) id<HMEThreadSafePendingEventsCollectionDelegate> delegate;

- (void).cxx_destruct;
- (id)initWithEvents:(id)a0;
- (void)didFinishAddingAdditionalEvents;
- (void)addEventInfoItems:(id)a0;
- (char)hasEventItem;
- (id)popEventItemsUpWithFragments:(char)a0 toSizeInBytes:(unsigned long long)a1 usedBytes:(unsigned long long *)a2;
- (void)willAddAdditionalEvents;
- (void)addEventInfo:(id)a0;
- (void)combinePreviousEvents:(id)a0;
- (id)eventItems;
- (void)resetItems;

@end
