@class NSMutableDictionary;

@interface ScreenSaverModules : NSObject {
    NSMutableDictionary *_modules;
    NSMutableDictionary *_times;
}

@property BOOL isPreview;

+ (id)sharedInstance;
+ (id)homeFolder;
+ (id)findNewModuleForPath:(id)a0;

- (void)dealloc;
- (id)init;
- (id)moduleNames;
- (unsigned long long)moduleSearchDomains;
- (id)_directoriesInSearchDomain;
- (BOOL)modulePathIsAppleModule:(id)a0;
- (id)moduleWithName:(id)a0;
- (id)moduleWithPath:(id)a0;
- (id)findModuleWithName:(id)a0;
- (id)findModuleWithPath:(id)a0;
- (id)findAllModules;
- (id)findAll32BitModules;
- (id)pathForModuleName:(id)a0;
- (id)basicModuleName;
- (id)basicModule;
- (id)defaultModule;
- (id)randomModule;
- (id)_findExtensionModules;
- (void)findModulesWithOrder:(id)a0 forceRebuild:(BOOL)a1;
- (id)sortedModulesForType:(id)a0;
- (id)loadModule:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 isPreview:(BOOL)a2;
- (BOOL)_moduleNeedsAcceleration:(id)a0;
- (Class)classForModule:(id)a0;
- (void)_dropCrashReporterBreadCrumbForModule:(id)a0;

@end
