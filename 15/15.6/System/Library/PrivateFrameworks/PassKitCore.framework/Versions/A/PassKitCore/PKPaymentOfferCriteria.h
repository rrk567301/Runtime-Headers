@class NSString;

@interface PKPaymentOfferCriteria : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) unsigned long long eligibility;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *passSerialNumber;
@property (copy, nonatomic) NSString *passTypeIdentifier;
@property (copy, nonatomic) NSString *fpanIdentifier;

+ (id)paymentOfferCritieraWithDictionary:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)associatedPassUniqueID;
- (char)eligibleWithConfiguration:(id)a0;
- (char)eligibleWithConfiguration:(id)a0 ineligibleReason:(unsigned long long *)a1;

@end
