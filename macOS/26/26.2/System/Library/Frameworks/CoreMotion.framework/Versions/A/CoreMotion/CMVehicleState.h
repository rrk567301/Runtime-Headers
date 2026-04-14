@interface CMVehicleState : NSObject

+ (unsigned long long)vehicularOperatorState;
+ (id)mostRecentInVehicle;
+ (unsigned long long)vehicularHints;
+ (unsigned long long)vehicularState;
+ (BOOL)isAvailable;
+ (unsigned long long)isVehicleBasedOnDeviceId:(id)a0 deviceType:(int)a1;
+ (id)mostRecentVehicleConnection;

@end
