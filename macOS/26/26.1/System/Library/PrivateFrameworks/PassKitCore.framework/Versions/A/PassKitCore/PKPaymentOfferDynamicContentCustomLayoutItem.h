@class PKPaymentOfferDynamicContentCustomLayoutItemTextDetails;

@interface PKPaymentOfferDynamicContentCustomLayoutItem : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) PKPaymentOfferDynamicContentCustomLayoutItemTextDetails *leadingText;
@property (retain, nonatomic) PKPaymentOfferDynamicContentCustomLayoutItemTextDetails *trailingText;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithDictionary:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;

@end
