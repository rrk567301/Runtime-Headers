@interface CMVehicleState : NSObject

+ (BOOL)isAvailable;
+ (unsigned long long)isVehicleBasedOnDeviceId:(id)a0 deviceType:(int)a1;
+ (unsigned long long)vehicularHints;
+ (id)mostRecentInVehicle;
+ (id)mostRecentVehicleConnection;
+ (unsigned long long)vehicularState;
+ (unsigned long long)vehicularOperatorState;

@end
