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
@property (nonatomic) BOOL supportsPaymentStatus;
@property (copy, nonatomic) NSString *fpanIdentifier;

+ (id)paymentOfferCritieraWithDictionary:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)associatedPassUniqueID;
- (BOOL)eligibleWithConfiguration:(id)a0;
- (BOOL)eligibleWithConfiguration:(id)a0 ineligibleReason:(unsigned long long *)a1;
- (id)instoreCapabilitiesString;
- (BOOL)supportsInstorePostPurchase;
- (BOOL)supportsInstorePrePurchase;

@end
