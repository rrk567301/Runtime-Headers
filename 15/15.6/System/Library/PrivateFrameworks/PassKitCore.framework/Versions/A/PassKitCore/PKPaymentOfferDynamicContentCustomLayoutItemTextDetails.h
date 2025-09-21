@class NSString;

@interface PKPaymentOfferDynamicContentCustomLayoutItemTextDetails : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *text;
@property (readonly, copy, nonatomic) NSString *altText;
@property (readonly, nonatomic) unsigned long long font;
@property (readonly, nonatomic) unsigned long long textColor;
@property (readonly, nonatomic, getter=isBold) char bold;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;

@end
