@interface TMSystemInformation : NSObject

@property (class, readonly) BOOL isAppleInternal;

+ (id)macAddress;
+ (BOOL)isNetBooted;
+ (id)hostUUID;
+ (id)computerName;
+ (id)hardwareModelIdentifier;
+ (id)hostUUIDDerivedMachineAddress;

@end
