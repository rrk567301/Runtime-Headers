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

- (void)pause;
- (id)sessionID;
- (id)logDescription;
- (void)dealloc;
- (long long)run;
- (id)queue;
- (id)description;
- (id)workingDirectory;
- (void)setInstallState:(id)a0;
- (id)targetVolume;
- (id)installPlanPath;
- (void)addLSPath:(id)a0;
- (void)addSecEquivPath:(id)a0;
- (id)buildInstallQueue;
- (id)deferredPath;
- (BOOL)deferredPathsMustRestart;
- (id)deleteFilePath;
- (BOOL)doingUpgrade;
- (BOOL)hasDeferredPaths;
- (unsigned int)hintFlagsForPath:(id)a0 withPackage:(id)a1;
- (id)initWithPackageController:(id)a0 withSessionState:(id)a1 withInstallJob:(id)a2 withInstallState:(id)a3;
- (id)installPlan;
- (id)lastAccessedHintRegex;
- (id)packageController;
- (id)patchRootPath;
- (void)readHints;
- (void)runContinue;
- (id)secEquivPaths;
- (void)setDeferredPathsMustRestart:(BOOL)a0;
- (void)setHasDeferredPaths:(BOOL)a0;
- (void)stepInto;
- (void)stepOver;

@end
