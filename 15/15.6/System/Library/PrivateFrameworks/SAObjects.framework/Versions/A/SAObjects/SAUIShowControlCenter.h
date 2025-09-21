@interface SAUIShowControlCenter : SABaseClientBoundCommand

+ (id)showControlCenter;
+ (id)showControlCenterWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (char)requiresResponse;
- (id)encodedClassName;

@end
