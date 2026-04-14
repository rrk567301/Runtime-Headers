@interface ATXDemoAppLibraryProvider : NSObject

+ (id)demoAppCategoriesForRealAppCategories:(id)a0;
+ (id)_parseCategory:(id)a0 realCategories:(id)a1;
+ (BOOL)isAppLibraryDemoModeEnabled;
+ (id)demoSuggestionsAndRecents;
+ (id)loadCategoriesFromDisk;
+ (id)bundleIdsForCategoryWithName:(id)a0 in:(id)a1;
+ (id)demoAppLibraryPath;

@end
