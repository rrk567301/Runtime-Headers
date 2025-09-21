@class NSString, NSSet, PKPaymentOfferDynamicContent;

@interface PKPaymentOfferCriteria : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) unsigned long long eligibility;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *passSerialNumber;
@property (copy, nonatomic) NSString *passTypeIdentifier;
@property (copy, nonatomic) NSSet *instoreCapabilities;
@property (retain, nonatomic) PKPaymentOfferDynamicContent *dynamicContent;
@property (copy, nonatomic) NSString *fpanIdentifier;

+ (id)paymentOfferCritieraWithDictionary:(id)a0;

- (id)initWithDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)associatedPassUniqueID;
- (BOOL)eligibleWithConfiguration:(id)a0;
- (BOOL)eligibleWithConfiguration:(id)a0 ineligibleReason:(unsigned long long *)a1;
- (id)instoreCapabilitiesString;
- (BOOL)supportsInstorePostPurchase;
- (BOOL)supportsInstorePrePurchase;

@end
