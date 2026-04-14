@class NSNotificationCenter, NSUUID, NSString;
@protocol HMDHomeActivityStateManagerDataSource, HMDHomeActivityStateManagerStorageDelegate;

@interface HMDHomeActivityStateManagerStorage : HMFObject <HMFLogging, HMDHomeActivityStateManagerStorage>

@property (readonly, nonatomic) id<HMDHomeActivityStateManagerDataSource> dataSource;
@property (readonly, nonatomic) NSNotificationCenter *notificationCenter;
@property (readonly, nonatomic) NSUUID *homeUUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<HMDHomeActivityStateManagerStorageDelegate> delegate;

+ (id)logCategory;

- (id)initWithDataSource:(id)a0;
- (void)_registerForNotifications;
- (void)configure;
- (void).cxx_destruct;
- (id)logIdentifier;
- (id)contributorTypeArrayFromActivityStateEnabledContributors:(id)a0;
- (void)fetchCurrentStateDetailsWithCompletion:(id /* block */)a0;
- (void)fetchEnabledContributors:(id /* block */)a0;
- (void)handleManagedObjectContextDidSaveNotification:(id)a0;

@end
