@interface ATXDemoAppLibraryProvider : NSObject

+ (id)loadCategoriesFromDisk;
+ (id)demoAppCategoriesForRealAppCategories:(id)a0;
+ (id)demoSuggestionsAndRecents;
+ (id)demoAppLibraryPath;
+ (id)bundleIdsForCategoryWithName:(id)a0 in:(id)a1;
+ (id)_parseCategory:(id)a0 realCategories:(id)a1;
+ (BOOL)isAppLibraryDemoModeEnabled;

@end
