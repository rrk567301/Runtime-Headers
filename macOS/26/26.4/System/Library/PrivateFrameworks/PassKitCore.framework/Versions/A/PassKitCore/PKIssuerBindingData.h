@class NSString, NSData, NSURL;

@interface PKIssuerBindingData : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *sessionIdentifier;
@property (copy, nonatomic) NSData *createdKeyHash;
@property (copy, nonatomic) NSData *signedData;
@property (copy, nonatomic) NSURL *callbackURL;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToIssuerBindingData:(id)a0;

@end
