@class NSString, NSMutableDictionary, NSOperationQueue, NSMutableSet, NSObject, CKDServerConfiguration, NSMapTable, NSCache;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface CKDServerConfigurationManager : NSObject <CKDSystemAvailabilityWatcher>

@property (retain, nonatomic) NSObject<OS_dispatch_source> *switchNotifSource;
@property (readonly, nonatomic) NSOperationQueue *configurationQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *notificationQueue;
@property (retain, nonatomic) CKDServerConfiguration *globalConfiguration;
@property (readonly, nonatomic) NSMutableSet *globalConfigurationOps;
@property (readonly, nonatomic) NSOperationQueue *containerSpecificInfoQueue;
@property (retain, nonatomic) NSCache *containerSpecificInfos;
@property (readonly, nonatomic) NSMutableDictionary *containerSpecificInfoOperations;
@property (readonly, nonatomic) NSMapTable *fetchContainerSpecificInfoCompletionHandlers;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *propertyQueue;
@property (readonly, nonatomic) int iCloudEnvNotifToken;
@property BOOL shouldDropAllConfigurations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (id)CKStatusReportArray;
- (void)_writeOutiCloudAppSiteAssociationData:(id)a0;
- (void)expireConfigurationForContainer:(id)a0;
- (id)init;
- (void)_watchForSwitchPrefFileChanges;
- (BOOL)systemAvailabilityChanged:(unsigned long long)a0;
- (id)lastKnownServerConfiguration;
- (id)configurationForContainer:(id)a0;
- (BOOL)_validateContainerServerInfo:(id)a0 requireUserIDs:(BOOL)a1 requireEnvironment:(BOOL)a2 error:(id *)a3;
- (void).cxx_destruct;
- (void)configurationForOperation:(id)a0 completionHandler:(id /* block */)a1;
- (void)_fetchContainerSpecificInfoForOperation:(id)a0 requireUserIDs:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)dealloc;
- (void)wipeAllConfigurations;
- (void)expireGlobalConfiguration;
- (void)containerServerInfoForOperation:(id)a0 requireUserIDs:(BOOL)a1 requireEnvironment:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)_fetchGlobalConfigForOperation:(id)a0 completionHandler:(id /* block */)a1;
- (void)_reallyDropAllConfigurations;

@end
