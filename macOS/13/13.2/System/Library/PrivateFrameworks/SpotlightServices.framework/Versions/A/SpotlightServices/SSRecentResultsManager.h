@interface SSRecentResultsManager : NSObject

+ (void)preheat;
+ (void)cacheSearchString:(id)a0;
+ (void)cacheResult:(id)a0 searchString:(id)a1;
+ (void)deleteResult:(id)a0;
+ (void)deleteAllRecents;
+ (id)updateResult:(id)a0 topic:(id)a1;

@end
