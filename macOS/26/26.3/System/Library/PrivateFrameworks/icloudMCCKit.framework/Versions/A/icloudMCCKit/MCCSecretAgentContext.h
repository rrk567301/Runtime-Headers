@class NSString, NSDictionary, MCCCertificateParams;

@interface MCCSecretAgentContext : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) MCCCertificateParams *certParams;
@property (copy, nonatomic) NSString *accountEmail;
@property (copy, nonatomic) NSString *correspEmail;
@property (copy, nonatomic) NSDictionary *searchCriteria;
@property (copy, nonatomic) NSDictionary *secObjects;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;

@end
