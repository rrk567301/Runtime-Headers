@class NSData, NSString;

@interface SAUIUpdateVisualResponseSnippet : SABaseClientBoundCommand

@property (copy, nonatomic) NSData *stateData;
@property (copy, nonatomic) NSString *viewId;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
