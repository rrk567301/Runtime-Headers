@class br_pacer, NSString, NSMutableDictionary, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface BRCCloudDocsAppsMonitor : NSObject <BRCAppListMonitorDelegate> {
    NSMutableDictionary *_cloudDocsAppLibrariesByAppID;
    NSMutableDictionary *_appIDsByAppLibraryID;
    NSMutableSet *_observers;
    br_pacer *_refetchPacer;
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

- (id)init;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (void)_start;
- (void)dumpToContext:(id)a0;
- (BOOL)hasFetchedInitialApps;
- (void)forceRefetchAppList;
- (BOOL)isApplicationInstalledForContainerID:(id)a0;
- (id)containerIDsForApplicationIdentifier:(id)a0;
- (id)applicationIdentifiersForContainerID:(id)a0;
- (void)_refetchApps;
- (id)allApplicationIdentifiers;

@end
