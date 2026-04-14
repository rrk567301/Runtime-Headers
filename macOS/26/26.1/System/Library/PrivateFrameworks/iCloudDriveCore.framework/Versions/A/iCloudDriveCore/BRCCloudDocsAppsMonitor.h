@class br_pacer, NSString, NSMutableDictionary, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface BRCCloudDocsAppsMonitor : NSObject <BRCAppListMonitorDelegate> {
    NSMutableDictionary *_cloudDocsAppLibrariesByAppID;
    NSMutableDictionary *_appIDsByAppLibraryID;
    NSMutableSet *_observers;
    NSMutableSet *_pendingBundleIDsToRefetch;
    br_pacer *_refetchPacer;
    br_pacer *_incrementalRefetchPacer;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_fetchInstalledAppsQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    BOOL _hasFetchedInitialApps;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cloudDocsAppsMonitor;

- (BOOL)hasFetchedInitialApps;
- (void)_start;
- (void)_refetchPendingApps;
- (void)_dumpAppIDsByAppLibraryIDToContext:(id)a0;
- (void)_updateMappingsAndNotifyObservers:(id)a0 appIDsByAppLibraryID:(id)a1 markInitialFetch:(BOOL)a2;
- (void)dumpToContext:(id)a0;
- (id)allApplicationIdentifiers;
- (id)applicationIdentifiersForContainerID:(id)a0;
- (void)_dumpCloudDocsAppLibrariesByAppIDToContext:(id)a0;
- (void)appListDidUpdateForBundleIDs:(id)a0;
- (void)_refetchApps;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)forceRefetchAppList;
- (id)containerIDsForApplicationIdentifier:(id)a0;
- (BOOL)isApplicationInstalledForContainerID:(id)a0;
- (id)init;
- (void)addObserver:(id)a0;

@end
