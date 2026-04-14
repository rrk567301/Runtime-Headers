@class PKPaymentOfferDynamicContentCustomLayoutItemTextDetails;

@interface PKPaymentOfferDynamicContentCustomLayoutItem : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) PKPaymentOfferDynamicContentCustomLayoutItemTextDetails *leadingText;
@property (retain, nonatomic) PKPaymentOfferDynamicContentCustomLayoutItemTextDetails *trailingText;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;

@end
