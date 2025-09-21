@interface CMVehicleState : NSObject

+ (unsigned long long)vehicularOperatorState;
+ (unsigned long long)isVehicleBasedOnDeviceId:(id)a0 deviceType:(int)a1;
+ (id)mostRecentVehicleConnection;
+ (id)mostRecentInVehicle;
+ (unsigned long long)vehicularState;
+ (BOOL)isAvailable;
+ (unsigned long long)vehicularHints;

@end
