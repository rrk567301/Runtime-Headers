@class SAUIVisualResponseSnippet;

@interface SAUIVisualResponseShowNextSnippet : SABaseClientBoundCommand

@property (retain, nonatomic) SAUIVisualResponseSnippet *visualResponse;

- (id)groupIdentifier;
- (char)requiresResponse;
- (id)encodedClassName;

@end
