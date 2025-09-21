@class NSString;

@interface SADismissRemoteAnnouncement : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *announcementIdentifier;

- (id)groupIdentifier;
- (char)requiresResponse;
- (id)encodedClassName;

@end
