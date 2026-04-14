@class NSString, NSArray;

@interface SAUIUnlockApp : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *appBundleId;
@property (copy, nonatomic) NSArray *failureCommands;
@property (copy, nonatomic) NSArray *successCommands;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
