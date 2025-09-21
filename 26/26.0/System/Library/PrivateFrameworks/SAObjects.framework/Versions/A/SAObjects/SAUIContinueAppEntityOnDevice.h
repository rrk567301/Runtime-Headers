@class NSString, SAUIAppEntityIdentifier;

@interface SAUIContinueAppEntityOnDevice : SABaseClientBoundCommand

@property (retain, nonatomic) SAUIAppEntityIdentifier *appEntityIdentifier;
@property (copy, nonatomic) NSString *bundleIdentifier;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
