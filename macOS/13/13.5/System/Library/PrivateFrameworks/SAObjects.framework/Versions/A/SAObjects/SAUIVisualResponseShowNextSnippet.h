@class SAUIVisualResponseSnippet;

@interface SAUIVisualResponseShowNextSnippet : SABaseClientBoundCommand

@property (retain, nonatomic) SAUIVisualResponseSnippet *visualResponse;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
