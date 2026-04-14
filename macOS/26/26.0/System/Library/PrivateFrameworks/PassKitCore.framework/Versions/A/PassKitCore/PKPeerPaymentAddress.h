@class NSString, NSDate;

@interface PKPeerPaymentAddress : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *addressLine1;
@property (copy, nonatomic) NSString *addressLine2;
@property (copy, nonatomic) NSString *city;
@property (copy, nonatomic) NSString *state;
@property (copy, nonatomic) NSString *postalCode;
@property (nonatomic, getter=isValid) BOOL valid;
@property (copy, nonatomic) NSDate *restrictionDate;
@property (nonatomic) unsigned long long source;

+ (id)addressFromPostalAddress:(id)a0;

- (id)initWithDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)postalAddress;

@end
