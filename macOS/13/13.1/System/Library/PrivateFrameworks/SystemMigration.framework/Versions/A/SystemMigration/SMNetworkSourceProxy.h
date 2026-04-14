@class NSMutableDictionary, NSDictionary, NSString, NSObject, SMNNetworkSession;
@protocol OS_dispatch_queue;

@interface SMNetworkSourceProxy : NSObject <SMNRemoteProxy, MigrationProgressEventsListener>

@property (retain) SMNNetworkSession *session;
@property (retain) NSObject<OS_dispatch_queue> *actionQueue;
@property (getter=isDisconnected) BOOL disconnected;
@property (getter=isCancelled) BOOL cancelled;
@property (retain) NSMutableDictionary *bundleInformation;
@property (readonly) unsigned long long protocolVersion;
@property (copy) id /* block */ usernameConversionBlock;
@property (copy) id /* block */ groupnameConversionBlock;
@property (retain) NSDictionary *lastProgressUpdate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)resume;
- (void).cxx_destruct;
- (unsigned long long)usedSize;
- (void)cancel;
- (void)setConnected:(BOOL)a0;
- (id)initWithSession:(id)a0;
- (unsigned long long)freeSize;
- (void)engineStartedWithRequestUUID:(id)a0 migrationType:(unsigned long long)a1;
- (void)engineProcessingText:(id)a0;
- (void)enginePercentDone:(id)a0;
- (void)engineMinutesRemaining:(id)a0 transferRate:(id)a1;
- (void)engineProgressUpdate:(id)a0;
- (void)migrationRequestCompletedState:(unsigned long long)a0 advancingTo:(unsigned long long)a1 withErrorsAndWarnings:(id)a2;
- (void)sourceMacInterfaceTypeChanged:(id)a0 type:(unsigned long long)a1 appropriateIcon:(unsigned long long)a2;
- (bycopy id)bundleInformationAtPaths:(id)a0;
- (BOOL)sendAction:(id)a0 error:(id *)a1;
- (BOOL)copyPath:(id)a0 toPath:(id)a1;
- (BOOL)itemExistsAtPath:(id)a0;
- (id)bundleInformationAtPath:(id)a0;
- (id)itemAttributesAtPaths:(id)a0;
- (BOOL)sendActionToAffirmMigrationHasCompleted;
- (id)cummulativeDescriptionFromError:(id)a0;
- (BOOL)hasUnderlyingError:(long long)a0 withDomain:(id)a1 inOutermostError:(id)a2;
- (BOOL)waitForConnectionReturningError:(id *)a0;
- (void)closeActiveConnection;
- (id)resultOfRequestType:(id)a0 paths:(id)a1 omitPaths:(id)a2;
- (unsigned long long)sizeOfType:(id)a0 paths:(id)a1 omitPaths:(id)a2;
- (id)resultOfType:(id)a0 paths:(id)a1 omitPaths:(id)a2;
- (unsigned long long)sizeForAbsolutePath:(in id)a0;
- (id)systemPaths;
- (id)childrenAtPath:(in id)a0 omittingSubpaths:(in id)a1;
- (id)childrenAtPath:(id)a0 omittingSubpaths:(id)a1 excludingSystemPaths:(BOOL)a2 expandingBundles:(BOOL)a3;
- (bycopy id)directoriesAtPath:(id)a0;
- (id)incompatibleAppsInfoForPaths:(id)a0;
- (id)itemCRCsAtPaths:(id)a0;
- (unsigned long long)sizeForPaths:(in id)a0;
- (void)removeSplitForkCacheAtPath:(id)a0;
- (void)_sendStatusText:(id)a0 arguments:(id)a1 timeRemaining:(id)a2 percentDone:(id)a3 eaw:(id)a4;
- (BOOL)shouldSendProgressUpdate:(id)a0;

@end
