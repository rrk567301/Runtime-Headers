@class NSString;

@interface SADismissRemoteAnnouncement : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *announcementIdentifier;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
