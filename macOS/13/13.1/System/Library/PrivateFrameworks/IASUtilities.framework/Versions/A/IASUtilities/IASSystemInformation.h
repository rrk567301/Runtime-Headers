@interface IASSystemInformation : NSObject

+ (id)getNvramDataForKey:(id)a0;
+ (BOOL)isRunningOnACPower;
+ (BOOL)isGibraltar;
+ (BOOL)isAppleSilicon;
+ (BOOL)machineHasBattery;
+ (BOOL)hasAppleIPAddress;
+ (BOOL)runningFromInstallMedia;
+ (id)machineBoardID;
+ (id)localVisibleUsers;
+ (id)getBootSessionUUID:(id *)a0;
+ (id)nvramStringForKey:(id)a0;
+ (BOOL)setNVRAMKeyWithValue:(id)a0 key:(id)a1 error:(id *)a2;

@end
