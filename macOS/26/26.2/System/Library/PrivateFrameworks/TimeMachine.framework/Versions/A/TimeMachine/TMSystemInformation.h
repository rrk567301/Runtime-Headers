@interface TMSystemInformation : NSObject

@property (class, readonly) BOOL isAppleInternal;

+ (id)computerName;
+ (id)macAddress;
+ (id)buildVersion;
+ (BOOL)hasInternalBattery;
+ (id)hardwareModelIdentifier;
+ (id)hostUUID;
+ (id)hostUUIDDerivedMachineAddress;
+ (BOOL)isClockMoreOrLessCorrect;
+ (BOOL)isNetBooted;

@end
