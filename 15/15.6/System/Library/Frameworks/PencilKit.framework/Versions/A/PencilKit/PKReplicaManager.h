@class NSArray, NSMutableDictionary, NSMutableOrderedSet, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface PKReplicaManager : NSObject {
    NSObject<OS_dispatch_queue> *_uuidAccessQueue;
    NSMutableOrderedSet *_replicaUUIDs;
    NSMutableDictionary *_replicaEntries;
    NSMutableArray *_replicaManagerErrors;
    id /* block */ _saveStateBlock;
    char _dirtyTokenSet;
    char _shouldPersist;
}

@property (nonatomic) char testMode;
@property (readonly, nonatomic) NSArray *replicaManagerErrors;

+ (char)isSingleRunningApp;
+ (id)sharedReplicaManager;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)_applicationWillTerminate;
- (void)persistIfNeeded;
- (void)_loadState;
- (void)_resetAllReplicaUUIDs;
- (void)_saveStateImmediately;
- (void)_scheduleSaveState;
- (void)_setReplicasDirtyToken;
- (id)checkoutReplicaUUIDForDrawing:(id)a0;
- (char)isValidBundleIDForSaving:(id)a0;
- (void)returnReplicaForDrawing:(id)a0;
- (void)updateVersionForDrawing:(id)a0;

@end
