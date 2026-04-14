@class NSMutableDictionary, NSDate;
@protocol PXGadgetRankStorage;

@interface PXForYouGadgetPriorityManager : NSObject

@property (readonly, nonatomic) NSMutableDictionary *currentEntries;
@property (readonly, nonatomic) id<PXGadgetRankStorage> rankStorage;
@property (nonatomic) BOOL needsSorting;
@property (nonatomic) long long nestedRegistration;
@property (retain, nonatomic) NSDate *baseNewDate;
@property (nonatomic) long long sortingAlgorithm;

- (void).cxx_destruct;
- (id)initWithStorage:(id)a0;
- (long long)rankForGadgetType:(unsigned long long)a0;
- (BOOL)invalidateRanks;
- (void)_sortCurrentEntries;
- (void)_persistSortedEntries:(id)a0;
- (void)_sortCurrentEntriesIfNeeded;
- (void)_splitCurrentEntriesIntoNew:(id)a0 andOld:(id)a1;
- (id)_sortingKeyForOldEntries;
- (void)startRegistration;
- (void)endRegistration;
- (void)registerRankable:(id)a0;
- (void)resetToDefaultPriorities;

@end
