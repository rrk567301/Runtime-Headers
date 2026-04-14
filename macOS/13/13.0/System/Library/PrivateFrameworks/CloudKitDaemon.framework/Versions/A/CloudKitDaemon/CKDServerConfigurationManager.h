@class NSMutableDictionary, NSString, NSOperationQueue, NSMutableSet, NSObject, CKDServerConfiguration;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface CKDServerConfigurationManager : NSObject <CKDSystemAvailabilityWatcher>

@property (retain, nonatomic) NSObject<OS_dispatch_source> *switchNotifSource;
@property (retain, nonatomic) NSOperationQueue *configurationQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *notificationQueue;
@property (retain, nonatomic) CKDServerConfiguration *globalConfiguration;
@property (retain, nonatomic) NSMutableSet *globalConfigurationOps;
@property (retain, nonatomic) NSOperationQueue *containerSpecificInfoQueue;
@property (retain, nonatomic) NSMutableDictionary *containerSpecificInfos;
@property (retain, nonatomic) NSMutableDictionary *containerSpecificInfoOperations;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *propertyQueue;
@property (nonatomic) int iCloudEnvNotifToken;
@property (nonatomic) BOOL shouldDropAllConfigurations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)CKStatusReportArray;
- (BOOL)systemAvailabilityChanged:(unsigned long long)a0;
- (id)_uniqueStringForContainer:(id)a0;
- (void)_watchForSwitchPrefFileChanges;
- (void)_fetchGlobalConfigForOperation:(id)a0 completionHandler:(id /* block */)a1;
- (void)_fetchContainerSpecificInfoForOperation:(id)a0 requireUserIDs:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)configurationForOperation:(id)a0 completionHandler:(id /* block */)a1;
- (void)containerServerInfoForOperation:(id)a0 requireUserIDs:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)_reallyDropAllConfigurations;
- (void)wipeAllConfigurations;
- (void)_writeOutiCloudAppSiteAssociationData:(id)a0;
- (void)expireGlobalConfiguration;
- (void)expireConfigurationForContainer:(id)a0;
- (id)lastKnownServerConfiguration;

@end
