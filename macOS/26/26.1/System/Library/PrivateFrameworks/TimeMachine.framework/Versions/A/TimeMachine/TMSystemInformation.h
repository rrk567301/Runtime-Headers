@interface TMSystemInformation : NSObject

@property (class, readonly) BOOL isAppleInternal;

+ (id)macAddress;
+ (id)buildVersion;
+ (id)computerName;
+ (BOOL)hasInternalBattery;
+ (id)hardwareModelIdentifier;
+ (id)hostUUID;
+ (id)hostUUIDDerivedMachineAddress;
+ (BOOL)isClockMoreOrLessCorrect;
+ (BOOL)isNetBooted;

@end
