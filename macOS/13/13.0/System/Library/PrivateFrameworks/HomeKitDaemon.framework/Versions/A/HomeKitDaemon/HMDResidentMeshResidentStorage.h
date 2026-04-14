@class HMDResidentMesh, HMDResidentDevice, HMFTimer, NSString, NSSet, NSMutableDictionary, NSDictionary, NSMutableSet;

@interface HMDResidentMeshResidentStorage : HMFObject <HMFLogging, HMFTimerDelegate>

@property (weak, nonatomic) HMDResidentMesh *owner;
@property (weak, nonatomic) HMDResidentDevice *residentDevice;
@property (retain, nonatomic) NSMutableSet *accessoryUUIDs;
@property (copy, nonatomic) NSSet *lastSentAccessoryUUIDs;
@property (retain, nonatomic) NSMutableDictionary *metrics;
@property (copy, nonatomic) NSDictionary *lastSentMetrics;
@property (retain, nonatomic) HMFTimer *transmitTimer;
@property (retain, nonatomic) NSMutableDictionary *accessoryListWithLinkQuality;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)logIdentifier;
- (void)timerDidFire:(id)a0;
- (id)initWithResidentDevice:(id)a0 owner:(id)a1;
- (BOOL)_addAccessoryWithLinkQuality:(id)a0 toList:(id)a1;
- (void)_addAccessory:(id)a0 activateTimer:(BOOL)a1;
- (void)_removeAccessory:(id)a0 activateTimer:(BOOL)a1;
- (BOOL)_residentDidChange;
- (void)_transmitAfter:(double)a0;
- (id)_buildPayload;
- (void)_transmitStatus:(BOOL)a0;

@end
