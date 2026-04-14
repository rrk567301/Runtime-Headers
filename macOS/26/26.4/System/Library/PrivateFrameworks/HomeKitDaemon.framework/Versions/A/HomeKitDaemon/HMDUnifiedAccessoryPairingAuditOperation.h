@class NSString;

@interface HMDUnifiedAccessoryPairingAuditOperation : HMDAccessoryBackgroundOperation <HMFLogging>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)operationClasses;

- (id)logIdentifier;
- (id)_addPairingOperationForAccessory:(id)a0 user:(id)a1;
- (void)_auditPairings:(id)a0 forAccessory:(id)a1;
- (id)_getPairingsFromAccessory:(id)a0;
- (id)_getPairingsFromAirPlayAccessory:(id)a0;
- (id)_removePairingOperationForAccessory:(id)a0 identityToRemove:(id)a1;
- (void)_scheduleAuditOperations:(id)a0;
- (id)_usersWithDirectAccessoryAccessForHome:(id)a0;
- (id)initWithAccessoryUUID:(id)a0 accessoryIdentifier:(id)a1 homeUUID:(id)a2;
- (BOOL)mainWithError:(id *)a0;

@end
