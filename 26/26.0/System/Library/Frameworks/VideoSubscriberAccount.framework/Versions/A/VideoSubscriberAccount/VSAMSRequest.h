@class NSString, NSDictionary, VSAuditToken;

@interface VSAMSRequest : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *methodName;
@property (nonatomic) unsigned long long requestType;
@property (copy, nonatomic) NSString *providerIdentifier;
@property (copy, nonatomic) NSDictionary *parameters;
@property (retain, nonatomic) VSAuditToken *auditToken;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
