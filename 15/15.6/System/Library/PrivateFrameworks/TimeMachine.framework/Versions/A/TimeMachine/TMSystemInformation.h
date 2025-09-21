@interface TMSystemInformation : NSObject

@property (class, readonly) char isAppleInternal;

+ (id)buildVersion;
+ (id)macAddress;
+ (id)computerName;
+ (id)hardwareModelIdentifier;
+ (char)hasInternalBattery;
+ (id)hostUUID;
+ (id)hostUUIDDerivedMachineAddress;
+ (char)isClockMoreOrLessCorrect;
+ (char)isNetBooted;

@end
