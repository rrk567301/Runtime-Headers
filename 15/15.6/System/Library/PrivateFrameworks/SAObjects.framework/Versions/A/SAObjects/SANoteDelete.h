@class NSURL;

@interface SANoteDelete : SADomainCommand

@property (copy, nonatomic) NSURL *identifier;

- (id)groupIdentifier;
- (char)requiresResponse;
- (id)encodedClassName;

@end
