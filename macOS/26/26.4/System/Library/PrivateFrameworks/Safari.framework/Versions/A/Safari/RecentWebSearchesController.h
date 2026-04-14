@interface RecentWebSearchesController : WBSRecentWebSearchesController

+ (long long)_ageLimitInDaysForRecentSearches;
+ (BOOL)_shouldTrackSearches;

@end
