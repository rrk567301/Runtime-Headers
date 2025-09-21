@interface SSRecentResultsManager : NSObject

+ (void)preheat;
+ (void)cacheResult:(id)a0 searchString:(id)a1;
+ (void)cacheSearchString:(id)a0;
+ (void)deleteAllRecents;
+ (void)deleteResult:(id)a0;
+ (void)deleteResult:(id)a0 requiresRefresh:(char)a1;
+ (char)isValidSearchString:(id)a0;
+ (void)sendRefreshNotification;
+ (id)updateResult:(id)a0 topic:(id)a1 queryContext:(id)a2;

@end
