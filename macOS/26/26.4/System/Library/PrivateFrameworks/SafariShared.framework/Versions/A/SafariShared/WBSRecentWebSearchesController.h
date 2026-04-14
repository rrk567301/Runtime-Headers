@class WBSHistory, NSMutableArray;

@interface WBSRecentWebSearchesController : NSObject {
    NSMutableArray *_recentSearchEntries;
    WBSHistory *_history;
    WBSRecentWebSearchesController *_defaultController;
}

@property (readonly) BOOL hasRecentSearchesToDisplayInRecentSearchesView;

+ (long long)_ageLimitInDaysForRecentSearches;
+ (id)_defaultsKey;
+ (BOOL)_shouldTrackSearches;

- (void).cxx_destruct;
- (void)_addRecentSearchEntry:(id)a0;
- (id)_dateThresholdForFiltering;
- (id)_effectiveRecentSearchEntries;
- (id)_filteredSearchesForPrefix:(id)a0 recentSearches:(id)a1;
- (id)_getRecentWebSearchEntries;
- (void)_loadRecentSearchesIfNeeded;
- (void)_postClearingNotificationForSearches:(id)a0;
- (void)_pruneRecentSearchesOlderThanOneMonth;
- (id)_recentSearchDictionariesFromUserDefaultsUsingKey:(id)a0;
- (id)_recentSearchesDictionaries;
- (id)_recentSearchesFilteredByDateThreshold;
- (void)_removeDuplicatedURLs;
- (void)_saveRecentSearchDictionaries:(id)a0 toUserDefaultsUsingKey:(id)a1;
- (void)_saveRecentSearches;
- (void)_sortRecentSearchesConsideringFrequency:(id)a0 completionHandler:(id /* block */)a1;
- (void)addRecentSearch:(id)a0 fromURL:(id)a1;
- (void)clearRecentSearch:(id)a0;
- (void)clearRecentSearches;
- (void)clearRecentSearchesAddedAfterDate:(id)a0;
- (id)initWithHistoryStore:(id)a0 defaultController:(id)a1;
- (void)recentSearchesMatchingPrefix:(id)a0 completionHandler:(id /* block */)a1;
- (void)recentWebSearchEntriesFilteredByTimeIntervalForDisplayInMainRecentSearchesViewWithCompletionHandler:(id /* block */)a0;

@end
