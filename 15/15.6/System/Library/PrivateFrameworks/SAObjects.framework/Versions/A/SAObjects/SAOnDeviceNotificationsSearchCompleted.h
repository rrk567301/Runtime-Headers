@class NSArray;

@interface SAOnDeviceNotificationsSearchCompleted : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray *notifications;

- (id)groupIdentifier;
- (char)requiresResponse;
- (id)encodedClassName;

@end
