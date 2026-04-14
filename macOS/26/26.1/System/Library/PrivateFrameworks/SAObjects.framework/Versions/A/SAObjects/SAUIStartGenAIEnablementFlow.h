@class NSString;

@interface SAUIStartGenAIEnablementFlow : SABaseClientBoundCommand

@property (nonatomic) BOOL explicitRequest;
@property (copy, nonatomic) NSString *source;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
