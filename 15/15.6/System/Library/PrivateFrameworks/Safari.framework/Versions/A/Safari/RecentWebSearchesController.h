@interface RecentWebSearchesController : WBSRecentWebSearchesController

+ (id)sharedController;
+ (long long)_ageLimitInDaysForRecentSearches;
+ (char)_shouldTrackSearches;

- (void)clearRecentSearches;
- (void)clearRecentSearchesAddedAfterDate:(id)a0;

@end
