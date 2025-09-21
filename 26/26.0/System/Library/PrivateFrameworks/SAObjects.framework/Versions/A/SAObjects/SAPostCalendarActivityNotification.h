@interface SAPostCalendarActivityNotification : SAPostPersonalDomainActivityNotification

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
