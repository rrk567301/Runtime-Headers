@interface HKFeatureAvailabilityRequirementHearingAidCapabilityIsSupportedOnAnyPairedAirPods : HKFeatureAvailabilityCapabilityIsSupportedOnAnyPairedBluetoothDeviceRequirement

+ (id)requirementIdentifier;

- (id)requirementDescription;
- (id)requiredEntitlements;
- (BOOL)capabilityIsSupportedOnPairedBluetoothDevice:(id)a0;

@end
