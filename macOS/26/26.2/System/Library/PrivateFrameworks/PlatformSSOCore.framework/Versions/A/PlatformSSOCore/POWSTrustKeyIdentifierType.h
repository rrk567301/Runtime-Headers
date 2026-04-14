@class NSString;

@interface POWSTrustKeyIdentifierType : POWSTrustBaseRequestType

@property (copy, nonatomic) NSString *ValueType;
@property (copy, nonatomic) NSString *stringValue;

+ (id)definition;

- (void).cxx_destruct;
- (id)description;

@end
