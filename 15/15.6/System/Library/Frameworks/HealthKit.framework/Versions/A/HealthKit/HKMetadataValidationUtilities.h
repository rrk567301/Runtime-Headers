@interface HKMetadataValidationUtilities : NSObject

+ (char)hk_validateActivityMoveModeMetadataValue:(id)a0 error:(id *)a1;
+ (char)hk_validateAppleECGAlgorithmValue:(id)a0 error:(id *)a1;
+ (char)hk_validateAppleHeartbeatSeriesAlgorithmVersionMetadataValue:(id)a0 error:(id *)a1;
+ (char)hk_validateAppleIrregularRhythmNotificationsAlgorithmVersionMetadataValue:(id)a0 error:(id *)a1;
+ (char)hk_validateBodyTemperatureSensorLocationMetadataValue:(id)a0 error:(id *)a1;
+ (char)hk_validateCoreMotionSourceIdentifierMetadataValue:(id)a0 error:(id *)a1;
+ (char)hk_validateCyclingFTPTestTypeMetadataValue:(id)a0 error:(id *)a1;
+ (char)hk_validateDevicePlacementSideValue:(id)a0 error:(id *)a1;
+ (char)hk_validateDigitalSignatureMetadataValue:(id)a0 error:(id *)a1;
+ (char)hk_validateHeartRateRecoveryActivityTypeMetadataValue:(id)a0 error:(id *)a1;
+ (char)hk_validateHeartRateRecoveryTestTypeMetadataValue:(id)a0 error:(id *)a1;
+ (char)hk_validateHeartRateSensorLocationMetadataValue:(id)a0 error:(id *)a1;
+ (char)hk_validateInsulinDeliveryReasonMetadataValue:(id)a0 error:(id *)a1;
+ (char)hk_validateMealTimeMetadataValue:(id)a0 error:(id *)a1;
+ (char)hk_validateMetadataValueClass:(id)a0 forKey:(id)a1 expectedClassLookupTable:(id)a2 error:(id *)a3;
+ (char)hk_validatePhysicalEffortEstimationTypeMetadataValue:(id)a0 error:(id *)a1;
+ (char)hk_validateQuantityMetadataValue:(id)a0 value:(id)a1 compatibleUnit:(id)a2 error:(id *)a3;
+ (char)hk_validateSwimmingLocationTypeMetadataValue:(id)a0 error:(id *)a1;
+ (char)hk_validateSwimmingStrokeStyleMetadataValue:(id)a0 error:(id *)a1;
+ (char)hk_validateSyncIdentifierMetadataValue:(id)a0 error:(id *)a1;
+ (char)hk_validateSyncVersionMetadataValue:(id)a0 error:(id *)a1;
+ (char)hk_validateTimeZoneMetadataValue:(id)a0 error:(id *)a1;
+ (char)hk_validateUserMotionContextMetadataValue:(id)a0 error:(id *)a1;
+ (char)hk_validateVO2MaxTestTypeMetadataValue:(id)a0 error:(id *)a1;
+ (char)hk_validateWaterSalinityMetadataValue:(id)a0 error:(id *)a1;
+ (char)hk_validateWeatherConditionMetadataValue:(id)a0 error:(id *)a1;

@end
