@class NSString;

@interface SAUIStartGenAIEnablementFlow : SABaseClientBoundCommand

@property (nonatomic) BOOL explicitRequest;
@property (copy, nonatomic) NSString *source;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
