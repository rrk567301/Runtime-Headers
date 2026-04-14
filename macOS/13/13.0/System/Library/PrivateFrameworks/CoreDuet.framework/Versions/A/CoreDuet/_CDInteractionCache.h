@class NSArray, _CDInteractionStore, NSPredicate, NSMutableOrderedSet, NSObject, NSDate;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface _CDInteractionCache : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_timer;
    NSDate *_timeOfLastFetch;
}

@property (readonly, nonatomic) NSMutableOrderedSet *mutableInteractions;
@property (readonly, nonatomic) _CDInteractionStore *interactionStore;
@property (readonly, nonatomic) unsigned long long size;
@property (readonly, nonatomic) NSPredicate *predicate;
@property (readonly, nonatomic) id /* block */ filterBlock;
@property (readonly, copy, nonatomic) NSArray *interactions;

- (void).cxx_destruct;
- (void)interactionsRecorded:(id)a0;
- (void)refetch;
- (id)initWithInteractionStore:(id)a0 size:(unsigned long long)a1 queryPredicate:(id)a2 filterBlock:(id /* block */)a3;
- (void)_refetch;
- (void)_cacheInteractions:(id)a0;

@end
