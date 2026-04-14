@interface IASSystemInformation : NSObject

+ (BOOL)isAppleSilicon;
+ (BOOL)isGibraltar;
+ (BOOL)isRunningOnACPower;
+ (BOOL)setNVRAMKeyWithValue:(id)a0 key:(id)a1 error:(id *)a2;
+ (id)getBootSessionUUID:(id *)a0;
+ (id)getNvramDataForKey:(id)a0;
+ (BOOL)hasAppleIPAddress;
+ (id)localVisibleUsers;
+ (id)machineBoardID;
+ (BOOL)machineHasBattery;
+ (id)nvramStringForKey:(id)a0;
+ (BOOL)runningFromInstallMedia;

@end
