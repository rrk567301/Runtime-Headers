@class NSMutableDictionary;

@interface HKPPTPluginManager : NSObject {
    NSMutableDictionary *_testClasses;
    NSMutableDictionary *_builtinTests;
}

+ (id)sharedPluginManager;

- (void).cxx_destruct;
- (id)init;
- (void)_loadPPTBundles;
- (id)builtinTests;
- (Class)classForTestType:(id)a0;
- (void)registerDriverClass:(Class)a0;

@end
