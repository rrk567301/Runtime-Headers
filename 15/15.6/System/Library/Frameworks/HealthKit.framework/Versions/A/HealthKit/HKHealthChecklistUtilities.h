@interface HKHealthChecklistUtilities : NSObject

+ (id)shared;

- (char)isEmergencySOSAvailable;
- (char)isHealthAppVisibleAndInstalled;
- (char)isHealthChecklistAvailable;
- (char)isMedicalIDAvailable;

@end
