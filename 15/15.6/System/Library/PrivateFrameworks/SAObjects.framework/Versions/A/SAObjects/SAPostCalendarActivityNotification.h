@interface SAPostCalendarActivityNotification : SAPostPersonalDomainActivityNotification

- (id)groupIdentifier;
- (char)requiresResponse;
- (id)encodedClassName;

@end
