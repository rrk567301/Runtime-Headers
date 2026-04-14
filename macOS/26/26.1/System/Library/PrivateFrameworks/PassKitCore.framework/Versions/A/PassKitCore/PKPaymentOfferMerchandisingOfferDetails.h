@class NSDictionary;

@interface PKPaymentOfferMerchandisingOfferDetails : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDictionary *offersByMerchandisingIdentifier;

+ (id)combineOfferDetails:(id)a0 withOtherDetails:(id)a1;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithDictionary:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithOffersByMerchandisingIdentifier:(id)a0;
- (id)offerForMerchandisingIdentifier:(id)a0;

@end
