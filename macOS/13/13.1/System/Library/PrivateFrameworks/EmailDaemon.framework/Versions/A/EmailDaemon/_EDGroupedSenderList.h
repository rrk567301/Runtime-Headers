@class NSMutableDictionary, NSMutableOrderedSet;

@interface _EDGroupedSenderList : NSObject {
    NSMutableDictionary *_groupsBySender;
    NSMutableOrderedSet *_orderedGroups;
    id /* block */ _comparator;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) unsigned long long count;

- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (id)objectForKeyedSubscript:(id)a0;
- (void).cxx_destruct;
- (id)initWithSortDescriptors:(id)a0;
- (id)groupedSenderAtIndex:(unsigned long long)a0;
- (id)groupedSenderForSenderAddress:(id)a0;
- (id)orderedGroupedSendersWithLimit:(unsigned long long)a0;
- (void)addGroupedSender:(id)a0;
- (void)removeGroupedSender:(id)a0;
- (void)_checkConsistencyAndRebuildIfNecessary;

@end
