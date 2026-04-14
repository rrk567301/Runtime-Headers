@class NSArray, NSMutableDictionary, NSMutableOrderedSet, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface PKReplicaManager : NSObject {
    NSObject<OS_dispatch_queue> *_uuidAccessQueue;
    NSMutableOrderedSet *_replicaUUIDs;
    NSMutableDictionary *_replicaEntries;
    NSMutableArray *_replicaManagerErrors;
    id /* block */ _saveStateBlock;
    BOOL _dirtyTokenSet;
    BOOL _shouldPersist;
}

@property (nonatomic) BOOL testMode;
@property (readonly, nonatomic) NSArray *replicaManagerErrors;

+ (id)sharedReplicaManager;
+ (BOOL)isSingleRunningApp;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)_applicationWillTerminate;
- (void)updateVersionForDrawing:(id)a0;
- (void)persistIfNeeded;
- (void)returnReplicaForDrawing:(id)a0;
- (id)checkoutReplicaUUIDForDrawing:(id)a0;
- (void)_saveStateImmediately;
- (void)_loadState;
- (void)_setReplicasDirtyToken;
- (void)_scheduleSaveState;
- (BOOL)isValidBundleIDForSaving:(id)a0;
- (void)_resetAllReplicaUUIDs;

@end
