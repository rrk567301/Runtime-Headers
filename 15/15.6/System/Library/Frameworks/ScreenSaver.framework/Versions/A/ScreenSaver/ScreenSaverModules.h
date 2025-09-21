@class NSMutableDictionary;

@interface ScreenSaverModules : NSObject {
    NSMutableDictionary *_modules;
    NSMutableDictionary *_times;
}

@property char isPreview;
@property (readonly) char initialized;

+ (id)sharedInstance;
+ (id)homeFolder;
+ (id)findNewModuleForPath:(id)a0;

- (void)dealloc;
- (id)init;
- (id)basicModuleName;
- (id)moduleWithName:(id)a0;
- (id)_directoriesInSearchDomain;
- (Class)classForModule:(id)a0;
- (id)moduleWithPath:(id)a0;
- (void)_dropCrashReporterBreadCrumbForModule:(id)a0;
- (id)_findExtensionModules;
- (void)_initializeModules;
- (char)_moduleNeedsAcceleration:(id)a0;
- (id)_sortedModulesForType:(id)a0;
- (id)basicModule;
- (id)defaultModule;
- (id)findAll32BitModules;
- (id)findAllModules;
- (id)findModuleWithName:(id)a0;
- (id)findModuleWithPath:(id)a0;
- (void)findModulesWithOrder:(id)a0 forceRebuild:(char)a1;
- (id)loadModule:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 isPreview:(char)a2;
- (id)moduleNames;
- (char)modulePathIsAppleModule:(id)a0;
- (unsigned long long)moduleSearchDomains;
- (id)pathForModuleName:(id)a0;
- (id)randomModule;
- (id)sortedModulesForType:(id)a0;
- (void)unloadModule:(id)a0;

@end
