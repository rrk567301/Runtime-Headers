@class NSMutableDictionary, NSHashTable;

@interface ATXContextHeuristicCache : NSObject {
    NSMutableDictionary *_cache;
    NSHashTable *_criteriaTable;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

- (void)evictAll;
- (id)nextChangeAfterDate:(id)a0;
- (id)heuristicsCached;
- (void)evict:(id)a0;
- (void)dealloc;
- (id)allRelevantSuggestionsForDate:(id)a0;
- (void)evictBefore:(id)a0;
- (void).cxx_destruct;
- (id)suggestionsForKey:(id)a0;
- (void)setSuggestions:(id)a0 forKey:(id)a1;
- (id)init;

@end
