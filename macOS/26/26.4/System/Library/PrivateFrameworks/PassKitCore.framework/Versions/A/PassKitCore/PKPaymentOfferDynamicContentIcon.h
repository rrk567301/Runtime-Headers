@class PKPaymentOfferDynamicContentIconVariant;

@interface PKPaymentOfferDynamicContentIcon : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) PKPaymentOfferDynamicContentIconVariant *defaultVariant;
@property (retain, nonatomic) PKPaymentOfferDynamicContentIconVariant *darkVariant;
@property (retain, nonatomic) PKPaymentOfferDynamicContentIconVariant *lightVariant;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)urlForScreenScale:(double)a0 appearance:(long long)a1;

@end
