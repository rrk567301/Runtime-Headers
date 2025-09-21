@interface SSRecentResultsManager : NSObject

+ (void)preheat;
+ (id)updateResult:(id)a0 topic:(id)a1 queryContext:(id)a2;
+ (void)cacheResult:(id)a0 searchString:(id)a1;
+ (void)cacheSearchString:(id)a0;
+ (void)deleteAllRecents;
+ (void)deleteResult:(id)a0;
+ (void)deleteResult:(id)a0 requiresRefresh:(BOOL)a1;
+ (BOOL)isValidSearchString:(id)a0;
+ (void)sendRefreshNotification;

@end
