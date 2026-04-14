@interface SSFilterUtilities : NSObject

+ (id)filtersForResult:(id)a0;
+ (id)folderScopesFromURLs:(id)a0;
+ (id)uttypesFromFilterQueries:(id)a0;
+ (id)typeForURL:(id)a0;
+ (BOOL)appResultBuilderSupportsResult:(id)a0;
+ (id)appFilterForResult:(id)a0;
+ (BOOL)contactResultBuilderSupportsResult:(id)a0;
+ (id)filterForResult:(id)a0;
+ (id)hiddenFilterBundleIDs;
+ (BOOL)linkResultBuilderSupportsResult:(id)a0;
+ (BOOL)pasteboardResultBuilderSupportsResult:(id)a0;
+ (BOOL)settingsResultBuilderSupportsResult:(id)a0;
+ (BOOL)shortcutResultSupportsResult:(id)a0;
+ (BOOL)windowResultBuilderSupportsResult:(id)a0;

@end
