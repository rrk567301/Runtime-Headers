@class NSArray;

@interface SAUIUnlockDeviceWithWatch : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray *failureCommands;
@property (copy, nonatomic) NSArray *successCommands;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
