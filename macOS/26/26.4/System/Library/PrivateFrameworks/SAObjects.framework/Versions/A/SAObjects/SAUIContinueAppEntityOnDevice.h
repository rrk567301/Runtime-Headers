@class NSString, SAUIAppEntityIdentifier;

@interface SAUIContinueAppEntityOnDevice : SABaseClientBoundCommand

@property (retain, nonatomic) SAUIAppEntityIdentifier *appEntityIdentifier;
@property (copy, nonatomic) NSString *bundleIdentifier;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;

@end
