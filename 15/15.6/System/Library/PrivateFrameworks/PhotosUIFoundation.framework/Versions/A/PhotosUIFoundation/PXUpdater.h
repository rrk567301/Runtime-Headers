@class NSMutableIndexSet;

@interface PXUpdater : NSObject {
    SEL *_orderedUpdateSelectors;
    unsigned long long _orderedUpdateSelectorsCapacity;
    unsigned long long _orderedUpdateSelectorsCount;
    NSMutableIndexSet *_updateSelectorsNeedingUpdate;
    NSMutableIndexSet *_updateSelectorsAlreadyUpdated;
    char _hasUpdatedForCurrentPass;
}

@property (nonatomic, getter=isUpdatePassScheduled) char updatePassScheduled;
@property (nonatomic) char extraChecksEnabled;
@property (readonly, weak, nonatomic) id target;
@property (nonatomic) SEL needsUpdateSelector;
@property (readonly, nonatomic) char isPerformingUpdates;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithTarget:(id)a0;
- (void)updateIfNeeded;
- (void)addUpdateSelector:(SEL)a0;
- (void)addUpdateSelector:(SEL)a0 needsUpdate:(char)a1;
- (id)initWithTarget:(id)a0 needsUpdateSelector:(SEL)a1;
- (void)setNeedsUpdateOf:(SEL)a0;
- (void)_scheduleUpdatePassIfNeeded;
- (char)hasAlreadyUpdatedSelector:(SEL)a0;

@end
