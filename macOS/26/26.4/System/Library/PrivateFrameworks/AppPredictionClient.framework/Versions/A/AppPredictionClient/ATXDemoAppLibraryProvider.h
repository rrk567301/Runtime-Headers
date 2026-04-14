@interface ATXDemoAppLibraryProvider : NSObject

+ (id)demoAppLibraryPath;
+ (id)_parseCategory:(id)a0 realCategories:(id)a1;
+ (id)demoSuggestionsAndRecents;
+ (id)demoAppCategoriesForRealAppCategories:(id)a0;
+ (id)bundleIdsForCategoryWithName:(id)a0 in:(id)a1;
+ (BOOL)isAppLibraryDemoModeEnabled;
+ (id)loadCategoriesFromDisk;

@end
