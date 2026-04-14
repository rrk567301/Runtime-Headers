@class NSString;

@interface PKSelectedPaymentOfferPaymentPassDetails : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *passUniqueID;
@property (copy, nonatomic) NSString *passTypeIdentifier;
@property (copy, nonatomic) NSString *passSerialNumber;
@property (copy, nonatomic) NSString *dpanIdentifier;
@property (copy, nonatomic) NSString *primaryAccountIdentifier;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)_init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithPaymentPass:(id)a0;

@end
