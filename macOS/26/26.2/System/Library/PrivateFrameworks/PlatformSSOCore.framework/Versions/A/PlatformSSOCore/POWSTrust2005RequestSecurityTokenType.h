@class NSString, POWSTrustAppliesToType;

@interface POWSTrust2005RequestSecurityTokenType : POWSTrustBaseRequestType

@property (copy, nonatomic) NSString *KeyType;
@property (copy, nonatomic) NSString *RequestType;
@property (retain, nonatomic) POWSTrustAppliesToType *AppliesTo;

+ (id)definition;

- (void).cxx_destruct;
- (id)description;

@end
