@interface ATXDemoAppLibraryProvider : NSObject

+ (BOOL)isAppLibraryDemoModeEnabled;
+ (id)bundleIdsForCategoryWithName:(id)a0 in:(id)a1;
+ (id)loadCategoriesFromDisk;
+ (id)demoSuggestionsAndRecents;
+ (id)demoAppLibraryPath;
+ (id)_parseCategory:(id)a0 realCategories:(id)a1;
+ (id)demoAppCategoriesForRealAppCategories:(id)a0;

@end
