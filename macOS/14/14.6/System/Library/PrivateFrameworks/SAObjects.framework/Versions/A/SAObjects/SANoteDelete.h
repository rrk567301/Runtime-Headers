@class NSURL;

@interface SANoteDelete : SADomainCommand

@property (copy, nonatomic) NSURL *identifier;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
