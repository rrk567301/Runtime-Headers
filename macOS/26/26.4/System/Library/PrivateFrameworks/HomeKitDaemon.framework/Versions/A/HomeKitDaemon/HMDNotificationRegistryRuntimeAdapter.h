@class NSMutableDictionary, NSSet, HMDHome, NSString;

@interface HMDNotificationRegistryRuntimeAdapter : HMFObject <HMFLogging, HMDNotificationRegistryAdapter> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, weak) HMDHome *home;
@property (readonly) NSMutableDictionary *characteristicRegistrations;
@property (readonly) NSMutableDictionary *characteristicThresholds;
@property (readonly) NSMutableDictionary *actionSetRegistrations;
@property (readonly) NSMutableDictionary *userUUIDs;
@property (readonly, copy) NSSet *characteristicRegistrationsSnapshot;
@property (readonly, copy) NSSet *enabledCharacteristicRegistrations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)initWithHome:(id)a0;
- (id)shortDescription;
- (void).cxx_destruct;
- (id)processCharacteristicsRequests:(id)a0;
- (id)removeAllActionSetRegistrations;
- (id)characteristicIIDsByAccessoryUUIDForEnabledRegistrationsForDestination:(id)a0;
- (id)destinationsToNotifyForActionSetUUID:(id)a0;
- (id)destinationsToNotifyForCharacteristic:(id)a0 applyChangeThresholding:(BOOL)a1;
- (id)destinationsToNotifyForMediaPropertyResponse:(id)a0;
- (id)destinationsWithEnabledCharacteristicRegistrations;
- (id)disableAllActionSetRegistrations;
- (void)disableAllCharacteristicRegistrations;
- (id)disableAllMediaProfileRegistrations;
- (BOOL)disableNotificationForActionSetUUID:(id)a0 user:(id)a1 deviceIdsDestination:(id)a2;
- (id)disableNotificationForCharacteristics:(id)a0 user:(id)a1 deviceIdsDestination:(id)a2;
- (BOOL)disableNotificationForMediaProfile:(id)a0 mediaProperties:(id)a1 user:(id)a2 deviceIdsDestination:(id)a3;
- (BOOL)enableNotificationForActionSetUUID:(id)a0 user:(id)a1 deviceIdsDestination:(id)a2;
- (BOOL)enableNotificationForMediaProfile:(id)a0 mediaProperties:(id)a1 user:(id)a2 deviceIdsDestination:(id)a3;
- (BOOL)enableNotificationsForCharacteristics:(id)a0 user:(id)a1 deviceIdsDestination:(id)a2;
- (BOOL)hasEnabledRegistrationForActionSetUUID:(id)a0;
- (id)keyForDestination:(id)a0 accessoryUUID:(id)a1 characteristicIID:(id)a2;
- (id)mediaPropertiesRegisteredForMediaProfileUniqueIdentifier:(id)a0;
- (id)removeActionSetRegistrationsWithoutAllowedDestinations:(id)a0;
- (void)removeAllCharacteristicRegistrations;
- (id)removeAllMediaProfileRegistrations;
- (id)removeCharacteristicRegistrationsWithoutAllowedDestinations:(id)a0;
- (id)removeMediaRegistrationsWithoutAllowedDestinations:(id)a0;
- (BOOL)removeRegistrationsForActionSetUUID:(id)a0;
- (void)removeRegistrationsForCharacteristics:(id)a0;
- (BOOL)removeRegistrationsForMediaProfile:(id)a0;

@end
