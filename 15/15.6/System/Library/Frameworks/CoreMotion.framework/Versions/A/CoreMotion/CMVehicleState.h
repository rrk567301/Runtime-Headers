@interface CMVehicleState : NSObject

+ (char)isAvailable;
+ (unsigned long long)isVehicleBasedOnDeviceId:(id)a0 deviceType:(int)a1;
+ (id)mostRecentInVehicle;
+ (id)mostRecentVehicleConnection;
+ (unsigned long long)vehicularHints;
+ (unsigned long long)vehicularOperatorState;
+ (unsigned long long)vehicularState;

@end
