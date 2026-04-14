@class NSMutableArray;

@interface WBSRecentWebSearchesController : NSObject {
    NSMutableArray *_recentSearchEntries;
}

+ (BOOL)_shouldTrackSearches;
+ (unsigned long long)_maximumNumberOfSearchesToTrack;
+ (id)_defaultsKey;

- (void).cxx_destruct;
- (id)recentSearches;
- (void)_addRecentSearchEntry:(id)a0;
- (void)_saveRecentSearches;
- (void)_loadRecentSearchesIfNeeded;
- (id)recentSearchesMatchingPrefix:(id)a0;
- (void)_removeLegacyRecentSearchesData;
- (id)_recentSearchesDictionaries;
- (void)_saveRecentSearchDictionaries:(id)a0 toUserDefaultsUsingKey:(id)a1;
- (id)_recentSearchDictionariesFromUserDefaultsUsingKey:(id)a0;
- (void)_migrateLegacyData;
- (void)addRecentSearch:(id)a0;
- (void)clearRecentSearches;
- (void)clearRecentSearchesAddedAfterDate:(id)a0;
- (void)_addLegacySearch:(id)a0;

@end
