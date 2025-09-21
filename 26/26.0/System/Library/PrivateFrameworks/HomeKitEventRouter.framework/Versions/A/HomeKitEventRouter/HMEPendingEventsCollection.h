@class NSArray, NSMutableArray;

@interface HMEPendingEventsCollection : NSObject

@property (retain, nonatomic) NSMutableArray *mutableEventItems;
@property (readonly, copy, nonatomic) NSArray *eventItems;

- (id)init;
- (id)initWithEvents:(id)a0;
- (void).cxx_destruct;
- (void)addEventInfoItems:(id)a0;
- (BOOL)hasEventItem;
- (id)popEventItemsUpWithFragments:(BOOL)a0 toSizeInBytes:(unsigned long long)a1 usedBytes:(unsigned long long *)a2;
- (void)_addEventInfo:(id)a0;
- (void)addEventInfo:(id)a0;
- (void)combinePreviousEvents:(id)a0;
- (unsigned long long)eventInfoMaxSizeInBytes:(id)a0;
- (void)resetItems;

@end
