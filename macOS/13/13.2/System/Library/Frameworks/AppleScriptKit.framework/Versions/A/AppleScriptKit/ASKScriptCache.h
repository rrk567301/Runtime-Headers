@class NSMutableDictionary;

@interface ASKScriptCache : NSObject {
    NSMutableDictionary *_scripts;
    NSMutableDictionary *_scriptPaths;
    BOOL _hasLoadedAllScripts;
}

+ (id)sharedScriptCache;
+ (id)scriptWithName:(id)a0 inBundleWithIdentifier:(id)a1;

- (void)dealloc;
- (id)init;
- (void)addScript:(id)a0;
- (void)removeAllScripts;
- (void)addScript:(id)a0 withName:(id)a1;
- (void)addScriptPath:(id)a0 withName:(id)a1;
- (void)removeScriptWithName:(id)a0;
- (id)scriptWithName:(id)a0;
- (void)loadAllScriptsForBundle:(id)a0;
- (void)loadAllScriptPathsForBundle:(id)a0;

@end
