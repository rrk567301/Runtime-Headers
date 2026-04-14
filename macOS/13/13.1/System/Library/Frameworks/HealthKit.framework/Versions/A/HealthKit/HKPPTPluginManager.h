@class NSMutableDictionary;

@interface HKPPTPluginManager : NSObject {
    NSMutableDictionary *_testClasses;
    NSMutableDictionary *_builtinTests;
}

+ (id)sharedPluginManager;

- (id)init;
- (void).cxx_destruct;
- (id)builtinTests;
- (Class)classForTestType:(id)a0;
- (void)registerDriverClass:(Class)a0;
- (void)_loadPPTBundles;

@end
