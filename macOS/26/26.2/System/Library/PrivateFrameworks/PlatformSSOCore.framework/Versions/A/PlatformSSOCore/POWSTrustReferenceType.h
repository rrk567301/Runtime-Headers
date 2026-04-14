@class POWSTrustSecurityTokenReferenceType;

@interface POWSTrustReferenceType : POWSTrustBaseRequestType

@property (retain, nonatomic) POWSTrustSecurityTokenReferenceType *SecurityTokenReference;

+ (id)definition;

- (void).cxx_destruct;
- (id)description;

@end
