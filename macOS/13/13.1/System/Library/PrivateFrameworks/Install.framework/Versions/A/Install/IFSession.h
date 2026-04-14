@class NSLock, NSMutableDictionary, NSConditionLock, IFSessionState, IFInstallQueueElement, NSMutableArray, IFRunnerProxy;

@interface IFSession : NSObject {
    NSMutableDictionary *_activeSessions;
    NSMutableArray *_installJobList;
    NSConditionLock *_installJobListLock;
    NSConditionLock *_debugLock;
    NSLock *_sessionLock;
    BOOL _currentMediaHasFinishedInstalling;
    BOOL _debugStep;
    IFSessionState *_sessionState;
    IFInstallQueueElement *_frontQueueElement;
    id /* block */ _warningHandler;
}

@property BOOL userConsentedInstall;
@property (retain) IFRunnerProxy *runnerProxy;

+ (void)initialize;
+ (id)sharedSession;
+ (void)setSessionType:(Class)a0;
+ (void)_setSharedAuthorization:(struct AuthorizationOpaqueRef { } *)a0;

- (void)dealloc;
- (id)init;
- (void)pause;
- (void)closeSession:(id)a0;
- (id)openSession;
- (void)runContinue;
- (void)stepOver;
- (void)stepInto;
- (void)_runMetaQueueEngine;
- (void)_sendOthersAreInstallingMessageWithID:(id)a0;
- (void)_setWarningHandler:(id /* block */)a0;
- (BOOL)installPackages:(id)a0 withOptions:(id)a1 inSession:(id)a2;
- (BOOL)preauthorizeForRights:(int)a0;
- (BOOL)preauthorizeForRights:(int)a0 withCompletion:(id /* block */)a1 onRunLoop:(struct __CFRunLoop { } *)a2;
- (int)authLevelForRights:(int)a0;
- (id)queueElementForActionsGroup:(id)a0;
- (void)setCurrentMediaHasFinishedInstalling:(BOOL)a0;
- (id)endJobIdentifier;
- (void)_dumpStatsFromSessionState:(id)a0;
- (void)_collectPerformanceFromQueue:(id)a0 inSessionState:(id)a1;
- (id)_pkInstallElementsForPackageReps:(id)a0 installState:(id)a1;
- (int)metaCount;
- (id)qAtMetaIndex:(int)a0;
- (void)enableDebugger;
- (void)stepOutOf;
- (id)installJobWithItems:(id)a0 installOptions:(id)a1 inSession:(id)a2;
- (id)endOfInstallJob;
- (BOOL)_checkPackageIntegrity:(id)a0 againstRealPackage:(id)a1;
- (id)_makePackageControllersFromIFDPackageReps:(id)a0 installOptions:(id)a1;
- (id)_setWorkingDirectoryAtPath:(id)a0;
- (id)_sessionStateForID:(id)a0;

@end
