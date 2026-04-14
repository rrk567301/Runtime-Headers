@interface TMSystemInformation : NSObject

@property (class, readonly) BOOL isAppleInternal;

+ (id)buildVersion;
+ (id)macAddress;
+ (BOOL)hasInternalBattery;
+ (id)hardwareModelIdentifier;
+ (id)computerName;
+ (id)hostUUID;
+ (id)hostUUIDDerivedMachineAddress;
+ (BOOL)isClockMoreOrLessCorrect;
+ (BOOL)isNetBooted;

@end
