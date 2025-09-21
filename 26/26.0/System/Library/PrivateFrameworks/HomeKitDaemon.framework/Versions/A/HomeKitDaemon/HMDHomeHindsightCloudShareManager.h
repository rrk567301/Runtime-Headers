@class NSString, HMDDatabaseZoneManager, NSUUID, NSObject;
@protocol OS_dispatch_queue, HMDHomeHindsightCloudShareManagerDataSource;

@interface HMDHomeHindsightCloudShareManager : HMFObject <HMDDatabaseZoneManagerDataSource, HMDDatabaseZoneManagerDelegate, HMFLogging>

@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) HMDDatabaseZoneManager *zoneManager;
@property (readonly, copy) NSString *logIdentifier;
@property (readonly) id<HMDHomeHindsightCloudShareManagerDataSource> dataSource;
@property (readonly, copy) NSUUID *UUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)configure;
- (void)synchronize;
- (void)_synchronize;
- (void).cxx_destruct;
- (void)_startZoneManager;
- (id)initWithHome:(id)a0 workQueue:(id)a1 dataSource:(id)a2;
- (id)initWithUUID:(id)a0 workQueue:(id)a1 dataSource:(id)a2 zoneManager:(id)a3;
- (BOOL)manager:(id)a0 shouldGrantWriteAccessToUser:(id)a1;
- (BOOL)manager:(id)a0 shouldShareWithUser:(id)a1;
- (void)removeZones;
- (BOOL)zoneManager:(id)a0 shouldRequestShareInvitationFromUser:(id)a1;
- (void)zoneManagerDidStart:(id)a0;

@end
