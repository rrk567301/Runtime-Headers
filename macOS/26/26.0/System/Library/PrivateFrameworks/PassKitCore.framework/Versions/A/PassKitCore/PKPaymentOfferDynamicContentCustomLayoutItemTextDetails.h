@class NSString, NSSet;

@interface PKPaymentOfferDynamicContentCustomLayoutItemTextDetails : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSSet *textLinks;
@property (copy, nonatomic) NSString *altText;
@property (nonatomic) unsigned long long font;
@property (nonatomic) unsigned long long textColor;
@property (nonatomic, getter=isBold) BOOL bold;

- (id)initWithDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)textLinkContent;

@end
