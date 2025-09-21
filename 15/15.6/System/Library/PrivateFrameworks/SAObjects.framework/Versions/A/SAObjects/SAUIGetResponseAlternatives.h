@class NSString;

@interface SAUIGetResponseAlternatives : SAStartRequest

@property (nonatomic) char locallyResolved;
@property (copy, nonatomic) NSString *requestId;

+ (id)getResponseAlternatives;
+ (id)getResponseAlternativesWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (char)requiresResponse;
- (id)encodedClassName;

@end
