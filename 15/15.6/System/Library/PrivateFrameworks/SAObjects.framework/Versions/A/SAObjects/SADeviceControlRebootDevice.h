@interface SADeviceControlRebootDevice : SABaseClientBoundCommand

@property (nonatomic) char isShutdownOnly;

+ (id)rebootDevice;
+ (id)rebootDeviceWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (char)requiresResponse;
- (id)encodedClassName;

@end
