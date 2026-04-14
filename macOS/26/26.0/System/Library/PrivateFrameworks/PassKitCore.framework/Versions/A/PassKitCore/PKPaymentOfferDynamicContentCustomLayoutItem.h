@class PKPaymentOfferDynamicContentCustomLayoutItemTextDetails;

@interface PKPaymentOfferDynamicContentCustomLayoutItem : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) PKPaymentOfferDynamicContentCustomLayoutItemTextDetails *leadingText;
@property (retain, nonatomic) PKPaymentOfferDynamicContentCustomLayoutItemTextDetails *trailingText;

- (id)initWithDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
