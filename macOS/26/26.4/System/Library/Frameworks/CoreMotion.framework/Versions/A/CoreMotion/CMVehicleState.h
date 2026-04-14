@interface CMVehicleState : NSObject

+ (BOOL)isAvailable;
+ (id)mostRecentVehicleConnection;
+ (unsigned long long)vehicularState;
+ (unsigned long long)isVehicleBasedOnDeviceId:(id)a0 deviceType:(int)a1;
+ (unsigned long long)vehicularHints;
+ (id)mostRecentInVehicle;
+ (unsigned long long)vehicularOperatorState;

@end
