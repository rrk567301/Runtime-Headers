@class NSArray, NSString, HMDUserPresenceFeeder;
@protocol HMDHomeActivityStateManagerStorage, HMDHomeActivityStateManagerDataSource, HMDUserActivityReportCoordinator;

@interface HMDUserActivityStateDetectorManager : HMFObject <HMFLogging, HMDHomeActivityStateManagerStorageDelegate, HMDDumpState> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) id<HMDHomeActivityStateManagerDataSource> dataSource;
@property (readonly, nonatomic) id<HMDUserActivityReportCoordinator> userActivityReportCoordinator;
@property (retain, nonatomic) NSArray *detectors;
@property (readonly, nonatomic) id<HMDHomeActivityStateManagerStorage> storage;
@property (readonly, nonatomic) HMDUserPresenceFeeder *presenceFeeder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (BOOL)shouldRunManagerForHome:(id)a0;

- (void)configure;
- (id)dumpStateWithPrivacyLevel:(unsigned long long)a0;
- (void)registerForNotifications;
- (void)updateConfiguration;
- (void)unconfigure;
- (id)initWithDataSource:(id)a0;
- (id)logIdentifier;
- (void).cxx_destruct;
- (void)_updateConfigurationWithCompletionHandler:(id /* block */)a0;
- (void)_updateConfigurationWithEnabledContributors:(id)a0 completionHandler:(id /* block */)a1;
- (void)configurePresenceFeeder;
- (id)filterEnabledContributors:(id)a0;
- (void)handleLocationAuthorizationChanged:(id)a0;
- (void)handlePrimaryResidentDidChangeNotification:(id)a0;
- (id)makeUserActivityStateDetectorsWithContributorTypes:(id)a0;
- (void)setPresenceFeeder:(id)a0;
- (void)storageDidUpdateEnabledContributors:(id)a0;

@end
