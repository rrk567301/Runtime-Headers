@class NSMutableDictionary, NSHashTable;

@interface ATXContextHeuristicCache : NSObject {
    NSMutableDictionary *_cache;
    NSHashTable *_criteriaTable;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

- (id)allRelevantSuggestionsForDate:(id)a0;
- (void)evictAll;
- (id)heuristicsCached;
- (void)evictBefore:(id)a0;
- (id)init;
- (id)nextChangeAfterDate:(id)a0;
- (void).cxx_destruct;
- (id)suggestionsForKey:(id)a0;
- (void)dealloc;
- (void)setSuggestions:(id)a0 forKey:(id)a1;
- (void)evict:(id)a0;

@end
