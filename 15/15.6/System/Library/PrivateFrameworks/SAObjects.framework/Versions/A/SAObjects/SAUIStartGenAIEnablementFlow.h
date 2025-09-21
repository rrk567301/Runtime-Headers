@class NSString;

@interface SAUIStartGenAIEnablementFlow : SABaseClientBoundCommand

@property (nonatomic) char explicitRequest;
@property (copy, nonatomic) NSString *source;

- (id)groupIdentifier;
- (char)requiresResponse;
- (id)encodedClassName;

@end
