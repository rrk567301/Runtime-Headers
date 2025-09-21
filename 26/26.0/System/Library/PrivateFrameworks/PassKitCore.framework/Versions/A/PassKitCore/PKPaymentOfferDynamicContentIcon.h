@class PKPaymentOfferDynamicContentIconVariant;

@interface PKPaymentOfferDynamicContentIcon : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) PKPaymentOfferDynamicContentIconVariant *defaultVariant;
@property (retain, nonatomic) PKPaymentOfferDynamicContentIconVariant *darkVariant;
@property (retain, nonatomic) PKPaymentOfferDynamicContentIconVariant *lightVariant;

- (id)initWithDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)urlForScreenScale:(double)a0 appearance:(long long)a1;

@end
