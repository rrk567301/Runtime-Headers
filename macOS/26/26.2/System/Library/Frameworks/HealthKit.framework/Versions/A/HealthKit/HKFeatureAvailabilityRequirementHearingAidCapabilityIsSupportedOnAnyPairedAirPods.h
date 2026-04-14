@interface HKFeatureAvailabilityRequirementHearingAidCapabilityIsSupportedOnAnyPairedAirPods : HKFeatureAvailabilityCapabilityIsSupportedOnAnyPairedBluetoothDeviceRequirement

+ (id)requirementIdentifier;

- (id)requiredEntitlements;
- (id)requirementDescription;
- (BOOL)capabilityIsSupportedOnPairedBluetoothDevice:(id)a0;

@end
