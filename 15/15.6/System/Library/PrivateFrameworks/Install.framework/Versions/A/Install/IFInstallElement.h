@class NSString, NSConditionLock, NSDictionary, IFInstallPlan, NSMutableSet, IFInstallJob, IFInstallQueue, IFPackageController, IFUpgradeHints;

@interface IFInstallElement : IFInstallQueueElement {
    IFInstallPlan *_installPlan;
    IFPackageController *_pkgController;
    NSString *_pkgTitle;
    IFInstallQueue *_installQ;
    NSMutableSet *_secEquivPaths;
    char _isUpgrade;
    NSDictionary *_installState;
    IFInstallJob *_installJob;
    char _hasDeferredPaths;
    char _deferredPathsMustRestart;
    NSConditionLock *_debugLock;
    char _debugStep;
    IFUpgradeHints *_hints;
    NSString *_lastAccessedHintRegex;
}

- (void)dealloc;
- (id)description;
- (long long)run;
- (void)pause;
- (id)queue;
- (void)setInstallState:(id)a0;
- (id)sessionID;
- (id)logDescription;
- (id)workingDirectory;
- (id)targetVolume;
- (id)installPlanPath;
- (void)addLSPath:(id)a0;
- (void)addSecEquivPath:(id)a0;
- (id)buildInstallQueue;
- (id)deferredPath;
- (char)deferredPathsMustRestart;
- (id)deleteFilePath;
- (char)doingUpgrade;
- (char)hasDeferredPaths;
- (unsigned int)hintFlagsForPath:(id)a0 withPackage:(id)a1;
- (id)initWithPackageController:(id)a0 withSessionState:(id)a1 withInstallJob:(id)a2 withInstallState:(id)a3;
- (id)installPlan;
- (id)lastAccessedHintRegex;
- (id)packageController;
- (id)patchRootPath;
- (void)readHints;
- (void)runContinue;
- (id)secEquivPaths;
- (void)setDeferredPathsMustRestart:(char)a0;
- (void)setHasDeferredPaths:(char)a0;
- (void)stepInto;
- (void)stepOver;

@end
