@class NSDictionary;

@interface PKPaymentOfferMerchandisingOfferDetails : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDictionary *offersByMerchandisingIdentifier;

+ (id)combineOfferDetails:(id)a0 withOtherDetails:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithOffersByMerchandisingIdentifier:(id)a0;
- (id)offerForMerchandisingIdentifier:(id)a0;

@end
