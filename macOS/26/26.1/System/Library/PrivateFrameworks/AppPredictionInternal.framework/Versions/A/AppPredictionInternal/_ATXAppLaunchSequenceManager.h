@class _ATXInternalUninstallNotification, _ATXDataStore, NSMapTable, NSString, NSObject, NSDate;
@protocol OS_dispatch_queue;

@interface _ATXAppLaunchSequenceManager : NSObject <ATXBundleIdRemovableProtocol, ATXActionKeyRemovableProtocol> {
    _ATXDataStore *_datastore;
    NSMapTable *_appLaunchSequence;
    NSMapTable *_appActionLaunchSequence;
    _ATXInternalUninstallNotification *_uninstallNotificationListener;
    NSObject<OS_dispatch_queue> *_syncQueue;
    NSString *_lastAppActionLaunch;
    NSDate *_lastAppActionLaunchDate;
}

+ (id)sharedInstance;

- (void)decayAllLaunchSequencesWithHalfLifeInDays:(double)a0;
- (id)syncQueue;
- (void)deleteAllLaunchesForBundles:(id)a0;
- (id)initWithInMemoryStore;
- (id)launchSequenceForBundle:(id)a0;
- (void)deleteAllLaunchesForAppActions:(id)a0;
- (void)removeActionKeys:(id)a0;
- (void)addBundleIdToLaunchSequence:(id)a0 date:(id)a1;
- (void).cxx_destruct;
- (id)initWithDataStore:(id)a0;
- (id)launchSequence;
- (void)removeBundleIds:(id)a0;
- (id)launchSequenceForAppAction:(id)a0;
- (void)decayAllAppActionLaunchSequencesWithHalfLifeInDays:(double)a0;
- (id)init;

@end
