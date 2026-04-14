@class NSString, NSConditionLock, NSDictionary, IFInstallPlan, NSMutableSet, IFInstallJob, IFInstallQueue, IFPackageController, IFUpgradeHints;

@interface IFInstallElement : IFInstallQueueElement {
    IFInstallPlan *_installPlan;
    IFPackageController *_pkgController;
    NSString *_pkgTitle;
    IFInstallQueue *_installQ;
    NSMutableSet *_secEquivPaths;
    BOOL _isUpgrade;
    NSDictionary *_installState;
    IFInstallJob *_installJob;
    BOOL _hasDeferredPaths;
    BOOL _deferredPathsMustRestart;
    NSConditionLock *_debugLock;
    BOOL _debugStep;
    IFUpgradeHints *_hints;
    NSString *_lastAccessedHintRegex;
}

- (long long)run;
- (void)dealloc;
- (id)description;
- (void)pause;
- (void)setInstallState:(id)a0;
- (id)queue;
- (id)sessionID;
- (id)workingDirectory;
- (id)targetVolume;
- (id)logDescription;
- (id)installPlan;
- (id)packageController;
- (void)readHints;
- (id)buildInstallQueue;
- (id)initWithPackageController:(id)a0 withSessionState:(id)a1 withInstallJob:(id)a2 withInstallState:(id)a3;
- (BOOL)doingUpgrade;
- (void)addLSPath:(id)a0;
- (void)addSecEquivPath:(id)a0;
- (id)secEquivPaths;
- (id)deleteFilePath;
- (id)installPlanPath;
- (id)patchRootPath;
- (id)deferredPath;
- (BOOL)hasDeferredPaths;
- (BOOL)deferredPathsMustRestart;
- (void)setHasDeferredPaths:(BOOL)a0;
- (void)setDeferredPathsMustRestart:(BOOL)a0;
- (void)runContinue;
- (void)stepOver;
- (void)stepInto;
- (id)lastAccessedHintRegex;
- (unsigned int)hintFlagsForPath:(id)a0 withPackage:(id)a1;

@end
