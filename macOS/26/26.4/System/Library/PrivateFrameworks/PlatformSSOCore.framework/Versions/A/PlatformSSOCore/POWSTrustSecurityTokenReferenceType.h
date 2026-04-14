@class POWSTrustKeyIdentifierType, NSString;

@interface POWSTrustSecurityTokenReferenceType : POWSTrustBaseRequestType

@property (retain, nonatomic) POWSTrustKeyIdentifierType *KeyIdentifier;
@property (copy, nonatomic) NSString *TokenType;

+ (id)definition;

- (void).cxx_destruct;
- (id)description;

@end
