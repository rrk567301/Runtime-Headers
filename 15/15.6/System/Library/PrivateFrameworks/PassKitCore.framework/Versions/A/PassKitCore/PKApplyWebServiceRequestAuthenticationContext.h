@class NSArray, NSData;

@interface PKApplyWebServiceRequestAuthenticationContext : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSArray *certificates;
@property (copy, nonatomic) NSData *signaturePayload;
@property (copy, nonatomic) NSData *signature;
@property (copy, nonatomic) NSData *authenticationCrediential;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
