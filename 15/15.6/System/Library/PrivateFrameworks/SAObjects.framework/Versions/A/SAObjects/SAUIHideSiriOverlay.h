@interface SAUIHideSiriOverlay : SABaseClientBoundCommand

@property (nonatomic) char hideSnippets;

+ (id)hideSiriOverlay;
+ (id)hideSiriOverlayWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (char)requiresResponse;
- (id)encodedClassName;

@end
