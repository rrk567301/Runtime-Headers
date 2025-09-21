@class NSString;

@interface SAAttentionFocusAppResponse : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *appBundleId;
@property (copy, nonatomic) NSString *sceneId;

- (id)groupIdentifier;
- (char)requiresResponse;
- (id)encodedClassName;

@end
