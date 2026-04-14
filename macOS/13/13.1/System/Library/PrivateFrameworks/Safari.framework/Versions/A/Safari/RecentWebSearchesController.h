@interface RecentWebSearchesController : WBSRecentWebSearchesController

+ (id)sharedController;
+ (BOOL)_shouldTrackSearches;

- (void)clearRecentSearches;
- (void)clearRecentSearchesAddedAfterDate:(id)a0;
- (void)_migrateLegacyData;
- (void)_removeLegacyRecentSearchesData;

@end
