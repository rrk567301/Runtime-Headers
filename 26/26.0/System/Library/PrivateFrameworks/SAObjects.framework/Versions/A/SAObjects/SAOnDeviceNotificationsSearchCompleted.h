@class NSArray;

@interface SAOnDeviceNotificationsSearchCompleted : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray *notifications;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
