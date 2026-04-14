@class NSMapTable, NSString, NSPersistentUIRestorer, NSPersistentUIEncodingQueue, NSMutableDictionary, NSPersistentUIWindowSnapshotter, NSObject, NSPersistentUIFlushScheduler, NSPersistentUIFileManager, NSPersistentUICrashHandler, NSMutableArray;
@protocol OS_dispatch_queue;

@interface NSPersistentUIManager : NSObject <NSPersistentUIFlushHandler, NSPersistentUIManagerCarbonMethods> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSObject<OS_dispatch_queue> *workQueue;
    NSPersistentUIEncodingQueue *_encodingQueue;
    NSPersistentUIFileManager *_fileManager;
    NSPersistentUIFlushScheduler *_flushScheduler;
    NSPersistentUIWindowSnapshotter *_windowSnapshotter;
    NSPersistentUIRestorer *_stateRestorer;
    NSPersistentUICrashHandler *_crashHandler;
    BOOL _isClosedToChanges;
    NSMutableArray *sortedWindowInfos;
    NSMapTable *objectToPendingKeyPaths;
    NSMutableArray *pendingRecords;
    NSMutableDictionary *additionalBuckets;
    BOOL treatEverythingAsDirty;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;
+ (id)unarchiver:(id)a0 didDecodeObject:(id)a1;
+ (BOOL)_suppressCGWindowOrdering;
+ (void)_permitWindowOrderingUntilStateRestoration;
+ (void)_resuppressWindowOrderingNowThatStateRestorationIsOccurring;
+ (id /* block */)_copyCGWindowOrderingReplayer;
+ (id)_debugUnrestoredWindows;
+ (void)_didDecodeObject:(id)a0 uid:(unsigned int)a1;
+ (void)nibDecoder:(id)a0 didDecodeObject:(id)a1;
+ (id)copyPersistentCarbonWindowDictionariesForBundleID:(id)a0;
+ (id)copyDebugDumpStateDirectory:(id)a0;
+ (id)_NSPersistentUIAcquireTalagentWindowsOnConnections:(unsigned int)a0 :(id)a1;
+ (void)_NSPersistentUIDestroyTalagentWindows:(unsigned int)a0 :(id)a1;

- (void).cxx_destruct;
- (id)initWithBundleID:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (unsigned int)modifyCrashBlameCounterBy:(int)a0;
- (void)clearCrashCountFileIfNecessary;
- (long long)crashBlameCounter;
- (void)encryptionKeyChangedNotification:(id)a0;
- (void)flushForScheduler:(id)a0;
- (unsigned int)createPersistentWindow;
- (void)setObject:(id)a0 forKey:(id)a1 forPersistentWindowID:(unsigned int)a2;
- (void)deletePersistentWindow:(unsigned int)a0;
- (void)discardAllPersistentStateAndClose;
- (void)flushPersistentStateAndClose:(BOOL)a0 waitingUntilDone:(BOOL)a1;
- (id)copyPersistentCarbonWindowDictionariesAtTimeOfAppLaunch;
- (void)beginAcquiringExternallyCreatedWindows;
- (id)copyAcquiredExternallyCreatedWindows;
- (void)destroyExternallyCreatedWindows:(id)a0;
- (void)flushAllChanges;
- (void)_cancelFlushTimer;
- (void)fullyDirtyAndReopenPersistentState;
- (void)_finishPendingChangesImmediatelyWithCompletionHandler:(id /* block */)a0;
- (void)flushPersistentStateAndClose;
- (void)acquireDirtyState;
- (void)addObjectInBackgroundForKeyedState:(id)a0 underKey:(id)a1 forIdentifier:(id)a2 inWindow:(unsigned int)a3;
- (BOOL)hasPersistentStateToRestore;
- (id)stateDirectoryAtLaunch;
- (void)invalidateStateDirectoryAtLaunch;
- (void)disableRestorableStateWriting;
- (void)enableRestorableStateWriting;
- (void)refreshEncryptionKey;
- (id)windowInfoForWindowID:(unsigned int)a0 createIfNecessary:(BOOL)a1;
- (void)_setPublicProperties:(id)a0 forWindowID:(unsigned int)a1;
- (void)setPublicProperties:(id)a0 forWindowID:(unsigned int)a1;
- (void)changeWindow:(unsigned int)a0 toStatus:(int)a1 withConditionalGeneration:(unsigned int)a2;
- (void)addPendingKeyPath:(id)a0 forObject:(id)a1;
- (void)changePersistentKeyPathObservationForPaths:(id)a0 inObject:(id)a1 to:(BOOL)a2;
- (void)performDockCommands:(id)a0 withOldWindowIDToNewWindowID:(id)a1;
- (BOOL)restoreAllPersistentStateWithCompletionHandler:(id /* block */)a0;
- (BOOL)performingWindowOrdering;
- (void)delayCGWindowOrderingIfNecessary;
- (void)resumeNormalWindowOrderingAndDrawing;
- (BOOL)shouldUseOneWindowHeuristic;
- (void)ignoreAnyPreexistingPersistentState;
- (BOOL)hasFinishedRestoringWindows;
- (id)previousSpaceOrder;
- (BOOL)promptToIgnorePersistentState;
- (void)writePublicPlistWithOpenWindowIDs:(id)a0;
- (BOOL)shouldRestoreStateOnLaunch;

@end
