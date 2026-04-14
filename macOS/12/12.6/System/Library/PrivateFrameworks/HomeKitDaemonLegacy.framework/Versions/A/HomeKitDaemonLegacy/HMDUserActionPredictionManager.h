@class HMBLocalZone, NSString, HMDDatabaseZoneManager, NSObject;
@protocol OS_dispatch_queue, HMFLocking;

@interface HMDUserActionPredictionManager : HMFObject <HMDDatabaseZoneManagerDataSource, HMDDatabaseZoneManagerDelegate> {
    id<HMFLocking> _lock;
}

@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (retain) HMBLocalZone *localZone;
@property (readonly) HMDDatabaseZoneManager *zoneManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)configure;
- (id)initWithHome:(id)a0;
- (id)initWithZoneManager:(id)a0 workQueue:(id)a1;
- (id)_removeZones;
- (void)removeZones;
- (BOOL)manager:(id)a0 shouldShareWithUser:(id)a1;
- (void)zoneManagerDidStart:(id)a0;
- (void)zoneManagerDidStop:(id)a0;

@end
