@class NSString;

@interface SAUIShowRequestHandlingStatus : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *requestHandlingStatus;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
