@interface TMSystemInformation : NSObject

@property (class, readonly) BOOL isAppleInternal;

+ (id)buildVersion;
+ (id)macAddress;
+ (id)computerName;
+ (BOOL)hasInternalBattery;
+ (id)hardwareModelIdentifier;
+ (id)hostUUID;
+ (id)hostUUIDDerivedMachineAddress;
+ (BOOL)isClockMoreOrLessCorrect;
+ (BOOL)isNetBooted;

@end
