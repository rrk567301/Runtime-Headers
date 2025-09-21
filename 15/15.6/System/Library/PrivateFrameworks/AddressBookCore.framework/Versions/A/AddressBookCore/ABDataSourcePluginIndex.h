@class NSMutableDictionary;

@interface ABDataSourcePluginIndex : NSObject {
    NSMutableDictionary *_bundlesByClass;
    NSMutableDictionary *_infoByClasses;
    char _didIndexPlugins;
}

+ (void)initialize;
+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void)log:(id)a0;
- (id)availablePluginClasses;
- (id)bundleForClassName:(id)a0;
- (id)debugPluginPaths;
- (void)indexPlugins;
- (id)infoForClassName:(id)a0;
- (char)loadBundleForClassName:(id)a0 error:(id *)a1;
- (id)sourceBundlePaths;
- (id)systemPluginPaths;

@end
