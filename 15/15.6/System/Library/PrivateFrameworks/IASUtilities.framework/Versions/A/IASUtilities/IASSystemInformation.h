@interface IASSystemInformation : NSObject

+ (char)isRunningOnACPower;
+ (char)isGibraltar;
+ (char)isAppleSilicon;
+ (char)setNVRAMKeyWithValue:(id)a0 key:(id)a1 error:(id *)a2;
+ (id)getBootSessionUUID:(id *)a0;
+ (id)getNvramDataForKey:(id)a0;
+ (char)hasAppleIPAddress;
+ (id)localVisibleUsers;
+ (id)machineBoardID;
+ (char)machineHasBattery;
+ (id)nvramStringForKey:(id)a0;
+ (char)runningFromInstallMedia;

@end
