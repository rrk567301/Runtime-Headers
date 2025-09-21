@class NSString;

@interface SAPostPersonalDomainActivityNotification : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *homeId;
@property (copy, nonatomic) NSString *notificationBody;
@property (copy, nonatomic) NSString *originatingDeviceName;

- (id)groupIdentifier;
- (char)requiresResponse;
- (char)mutatingCommand;
- (id)encodedClassName;

@end
