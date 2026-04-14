@class NSMutableDictionary, NSHashTable;

@interface ATXContextHeuristicCache : NSObject {
    NSMutableDictionary *_cache;
    NSHashTable *_criteriaTable;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

- (void)evict:(id)a0;
- (id)nextChangeAfterDate:(id)a0;
- (id)suggestionsForKey:(id)a0;
- (id)allRelevantSuggestionsForDate:(id)a0;
- (void)evictBefore:(id)a0;
- (void)evictAll;
- (void).cxx_destruct;
- (id)init;
- (id)heuristicsCached;
- (void)dealloc;
- (void)setSuggestions:(id)a0 forKey:(id)a1;

@end
