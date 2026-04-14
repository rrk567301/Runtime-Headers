@class NSString;

@interface SADismissRemoteAnnouncement : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *announcementIdentifier;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;

@end
