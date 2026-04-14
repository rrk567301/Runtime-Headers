@interface TMSystemInformation : NSObject

@property (class, readonly) BOOL isAppleInternal;

+ (id)buildVersion;
+ (id)macAddress;
+ (id)hardwareModelIdentifier;
+ (BOOL)hasInternalBattery;
+ (id)computerName;
+ (id)hostUUID;
+ (id)hostUUIDDerivedMachineAddress;
+ (BOOL)isClockMoreOrLessCorrect;
+ (BOOL)isNetBooted;

@end
