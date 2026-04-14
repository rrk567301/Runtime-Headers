@class NSString;

@interface SAUIStartGenAIEnablementFlow : SABaseClientBoundCommand

@property (nonatomic) BOOL explicitRequest;
@property (copy, nonatomic) NSString *source;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;

@end
