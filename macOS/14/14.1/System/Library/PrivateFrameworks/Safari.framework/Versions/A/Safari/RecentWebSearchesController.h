@interface RecentWebSearchesController : WBSRecentWebSearchesController

+ (id)sharedController;
+ (BOOL)_shouldTrackSearches;

- (void)_removeLegacyRecentSearchesData;
- (void)_migrateLegacyData;
- (void)clearRecentSearches;
- (void)clearRecentSearchesAddedAfterDate:(id)a0;

@end
