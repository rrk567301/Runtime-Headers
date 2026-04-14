@class NSString, NSData, NSURL;

@interface PKIssuerBindingData : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *sessionIdentifier;
@property (copy, nonatomic) NSData *createdKeyHash;
@property (copy, nonatomic) NSData *signedData;
@property (copy, nonatomic) NSURL *callbackURL;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqualToIssuerBindingData:(id)a0;

@end
