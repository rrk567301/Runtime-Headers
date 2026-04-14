@class NSArray, NSString;

@interface SAStartLocalRequest : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray *clientBoundCommands;
@property (copy, nonatomic) NSString *inputOrigin;

+ (id)startLocalRequest;
+ (id)startLocalRequestWithDictionary:(id)a0 context:(id)a1;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;

@end
