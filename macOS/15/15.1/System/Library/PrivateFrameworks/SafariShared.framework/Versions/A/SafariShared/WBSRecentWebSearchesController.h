@class NSMutableArray;

@interface WBSRecentWebSearchesController : NSObject {
    NSMutableArray *_recentSearchEntries;
}

+ (unsigned long long)_maximumNumberOfSearchesToTrack;
+ (id)_defaultsKey;
+ (BOOL)_shouldTrackSearches;

- (void).cxx_destruct;
- (id)recentSearches;
- (void)_addRecentSearchEntry:(id)a0;
- (void)_loadRecentSearchesIfNeeded;
- (id)_recentSearchDictionariesFromUserDefaultsUsingKey:(id)a0;
- (id)_recentSearchesDictionaries;
- (void)_saveRecentSearchDictionaries:(id)a0 toUserDefaultsUsingKey:(id)a1;
- (void)_saveRecentSearches;
- (void)addRecentSearch:(id)a0;
- (void)clearRecentSearch:(id)a0;
- (void)clearRecentSearches;
- (void)clearRecentSearchesAddedAfterDate:(id)a0;
- (id)recentSearchesMatchingPrefix:(id)a0;
- (id)recentWebSearcheEntries;

@end
