@class NSString;

@interface SAPostUpdatePersonalRequestSettingsNotification : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *homeId;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;
- (BOOL)mutatingCommand;

@end
