@interface CMVehicleState : NSObject

+ (BOOL)isAvailable;
+ (unsigned long long)vehicularHints;
+ (id)mostRecentInVehicle;
+ (unsigned long long)isVehicleBasedOnDeviceId:(id)a0 deviceType:(int)a1;
+ (unsigned long long)vehicularState;
+ (id)mostRecentVehicleConnection;
+ (unsigned long long)vehicularOperatorState;

@end
