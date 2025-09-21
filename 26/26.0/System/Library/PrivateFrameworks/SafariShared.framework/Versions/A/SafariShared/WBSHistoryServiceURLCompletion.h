@class NSObject;
@protocol OS_dispatch_queue;

@interface WBSHistoryServiceURLCompletion : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    struct URLCompletionEntryMap { struct HashTable<SafariShared::URLCompletionEntryKey, SafariShared::URLCompletionEntry, SafariShared::URLCompletionEntryKeyExtractor, SafariShared::URLCompletionEntryHash, SafariShared::URLCompletionEntryValueTraits, SafariShared::URLCompletionEntryKeyTraits, WTF::FastMalloc> { struct URLCompletionEntry *m_table; } _map; struct unordered_map<NSString *, std::unique_ptr<SafariShared::URLCompletionEntryExtras>, std::hash<NSString *>, std::equal_to<NSString *>, std::allocator<std::pair<NSString *const, std::unique_ptr<SafariShared::URLCompletionEntryExtras>>>> { struct __hash_table<std::__hash_value_type<NSString *, std::unique_ptr<SafariShared::URLCompletionEntryExtras>>, std::__unordered_map_hasher<NSString *, std::__hash_value_type<NSString *, std::unique_ptr<SafariShared::URLCompletionEntryExtras>>, std::hash<NSString *>, std::equal_to<NSString *>>, std::__unordered_map_equal<NSString *, std::__hash_value_type<NSString *, std::unique_ptr<SafariShared::URLCompletionEntryExtras>>, std::equal_to<NSString *>, std::hash<NSString *>>, std::allocator<std::__hash_value_type<NSString *, std::unique_ptr<SafariShared::URLCompletionEntryExtras>>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, std::unique_ptr<SafariShared::URLCompletionEntryExtras>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, std::unique_ptr<SafariShared::URLCompletionEntryExtras>>, void *> *> *>>> { void **__ptr_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, std::unique_ptr<SafariShared::URLCompletionEntryExtras>>, void *> *> *>> { unsigned long long __size_; } __deleter_; } __bucket_list_; struct __hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, std::unique_ptr<SafariShared::URLCompletionEntryExtras>>, void *> *> { void *__next_; } __first_node_; unsigned long long __size_; float __max_load_factor_; } __table_; } _extras; } _map;
    struct unordered_multimap<NSString *, NSString *, std::hash<NSString *>, std::equal_to<NSString *>, std::allocator<std::pair<NSString *const, NSString *>>> { struct __hash_table<std::__hash_value_type<NSString *, NSString *>, std::__unordered_map_hasher<NSString *, std::__hash_value_type<NSString *, NSString *>, std::hash<NSString *>, std::equal_to<NSString *>>, std::__unordered_map_equal<NSString *, std::__hash_value_type<NSString *, NSString *>, std::equal_to<NSString *>, std::hash<NSString *>>, std::allocator<std::__hash_value_type<NSString *, NSString *>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, NSString *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, NSString *>, void *> *> *>>> { void **__ptr_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, NSString *>, void *> *> *>> { unsigned long long __size_; } __deleter_; } __bucket_list_; struct __hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, NSString *>, void *> *> { void *__next_; } __first_node_; unsigned long long __size_; float __max_load_factor_; } __table_; } _redirectSources;
}

- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_endOfRedirectChain:(id)a0;
- (id)_warmUpWithDatabase:(id)a0;
- (void)computeFrequentlyVisitedSites:(unsigned long long)a0 minimalVisitCountScore:(unsigned long long)a1 blockList:(id)a2 allowList:(id)a3 options:(unsigned long long)a4 currentTime:(double)a5 completionHandler:(id /* block */)a6;
- (double)lastVisitTimeForURLString:(id)a0;
- (void)noteRedirectFromURLString:(id)a0 toURLString:(id)a1;
- (BOOL)queryVisitCounts:(id)a0 outVisitCountScore:(long long *)a1 outDailyVisitCounts:(id *)a2 outWeeklyVisitCounts:(id *)a3;
- (void)recordVisit:(id)a0 sourceVisit:(id)a1 title:(id)a2 loadSuccessful:(BOOL)a3 origin:(long long)a4 increaseVisitCount:(BOOL)a5 score:(int)a6 statusCode:(long long)a7;
- (void)removeURLStrings:(id)a0;
- (void)searchForUserTypedString:(id)a0 options:(unsigned long long)a1 currentTime:(double)a2 enumerationGroup:(id)a3 enumerationBlock:(id /* block */)a4;
- (void)updateItemWithLatestVisit:(id)a0 database:(id)a1;
- (void)updateURLString:(id)a0 autocompleteTriggerData:(id)a1;
- (void)updateVisit:(id)a0 oldScore:(int)a1 newScore:(int)a2 completionHandler:(id /* block */)a3;
- (void)updateVisit:(id)a0 title:(id)a1 databaseID:(id)a2;
- (id)warmUpWithDatabase:(id)a0;

@end
