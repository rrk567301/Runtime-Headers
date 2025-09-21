@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface BRCBGSystemTaskManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, nonatomic) NSMutableDictionary *personaToTaskIdentifiersMap;

+ (id)sharedManager;
+ (id)_prepareBGSystemTaskIdentifierWithBaseName:(id)a0 personaIdentifier:(id)a1;

- (id)_init;
- (void).cxx_destruct;
- (void)_cancelSyncTasks:(id)a0 scheduler:(id)a1;
- (void)completeTask:(id)a0;
- (void)expireTask:(id)a0;
- (void)garbageCollectAllDanglingSyncTasks;
- (void)submitBGSystemTaskWithIdentifier:(id)a0 configuration:(id)a1 block:(id /* block */)a2;
- (void)unregisterAllTasks;
- (BOOL)unregisterTaskWithIdentifier:(id)a0;

@end
