@class NSString, HMDDatabaseZoneManager, HMDHome, NSUUID, NSObject;
@protocol OS_dispatch_queue, HMDHomeHindsightCloudShareManagerDataSource;

@interface HMDHomeHindsightCloudShareManager : HMFObject <HMDDatabaseZoneManagerDataSource, HMDDatabaseZoneManagerDelegate, HMFLogging>

@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) HMDDatabaseZoneManager *zoneManager;
@property (readonly, copy) NSString *logIdentifier;
@property (readonly, nonatomic) id<HMDHomeHindsightCloudShareManagerDataSource> dataSource;
@property (readonly, weak, nonatomic) HMDHome *home;
@property (readonly, copy) NSUUID *UUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)configure;
- (void)_synchronize;
- (void).cxx_destruct;
- (void)synchronize;
- (void)_startZoneManager;
- (id)initWithHome:(id)a0 UUID:(id)a1 workQueue:(id)a2 dataSource:(id)a3 zoneManager:(id)a4;
- (id)initWithHome:(id)a0 workQueue:(id)a1 dataSource:(id)a2;
- (BOOL)manager:(id)a0 shouldGrantWriteAccessToUser:(id)a1;
- (BOOL)manager:(id)a0 shouldShareWithUser:(id)a1;
- (BOOL)zoneManager:(id)a0 shouldRequestShareInvitationFromUser:(id)a1;
- (void)zoneManagerDidCreateZone:(id)a0;
- (void)zoneManagerDidStart:(id)a0;

@end
