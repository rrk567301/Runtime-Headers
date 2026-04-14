@class NSString;

@interface SAPostUpdatePersonalRequestSettingsNotification : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *homeId;

- (id)groupIdentifier;
- (BOOL)mutatingCommand;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
