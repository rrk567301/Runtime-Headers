@class NSString;

@interface SAPostUpdatePersonalRequestSettingsNotification : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *homeId;

- (id)groupIdentifier;
- (char)requiresResponse;
- (char)mutatingCommand;
- (id)encodedClassName;

@end
