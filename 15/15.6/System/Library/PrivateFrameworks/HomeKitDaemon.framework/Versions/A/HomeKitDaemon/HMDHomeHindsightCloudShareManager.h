@class NSString, HMDDatabaseZoneManager, NSUUID, NSObject;
@protocol OS_dispatch_queue;

@interface HMDHomeHindsightCloudShareManager : HMFObject <HMDDatabaseZoneManagerDataSource, HMDDatabaseZoneManagerDelegate, HMFLogging>

@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) HMDDatabaseZoneManager *zoneManager;
@property (readonly, copy) NSString *logIdentifier;
@property (readonly, copy) NSUUID *UUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)synchronize;
- (void)configure;
- (void)_synchronize;
- (void)_startZoneManager;
- (id)initWithHome:(id)a0 workQueue:(id)a1;
- (id)initWithUUID:(id)a0 workQueue:(id)a1 zoneManager:(id)a2;
- (char)manager:(id)a0 shouldShareWithUser:(id)a1;
- (void)removeZones;
- (char)zoneManager:(id)a0 shouldRequestShareInvitationFromUser:(id)a1;
- (void)zoneManagerDidStart:(id)a0;

@end
