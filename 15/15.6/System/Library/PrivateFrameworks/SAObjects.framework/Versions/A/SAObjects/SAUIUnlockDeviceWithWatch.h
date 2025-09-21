@class NSArray;

@interface SAUIUnlockDeviceWithWatch : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray *failureCommands;
@property (copy, nonatomic) NSArray *successCommands;

- (id)groupIdentifier;
- (char)requiresResponse;
- (id)encodedClassName;

@end
