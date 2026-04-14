@class NSArray;

@interface SAUIUnlockDevice : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray *cancellationCommands;
@property (copy, nonatomic) NSArray *failureCommands;
@property (copy, nonatomic) NSArray *successCommands;

+ (id)unlockDevice;
+ (id)unlockDeviceWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
