@interface TMSystemInformation : NSObject

@property (class, readonly) BOOL isAppleInternal;

+ (id)macAddress;
+ (id)hostUUID;
+ (id)hardwareModelIdentifier;
+ (id)computerName;
+ (BOOL)isNetBooted;
+ (BOOL)isClockMoreOrLessCorrect;
+ (id)hostUUIDDerivedMachineAddress;
+ (BOOL)hasInternalBattery;

@end
