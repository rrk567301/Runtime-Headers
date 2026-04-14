@class PKApplyFooterContentLink, NSString, NSSet, PKPaymentOfferDynamicContentIcon, PKApplyFooterContent, PKPaymentOfferDynamicContentCustomLayout, PKSystemIconConfiguration;

@interface PKPaymentOfferDynamicContentPage : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long pageType;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *body;
@property (copy, nonatomic) NSSet *bodyLinks;
@property (copy, nonatomic) NSString *primaryActionTitle;
@property (retain, nonatomic) PKApplyFooterContentLink *primaryActionDetails;
@property (copy, nonatomic) NSString *secondaryActionTitle;
@property (retain, nonatomic) PKApplyFooterContentLink *secondaryActionDetails;
@property (copy, nonatomic) PKPaymentOfferDynamicContentIcon *iconURL;
@property (copy, nonatomic) PKSystemIconConfiguration *systemIcon;
@property (retain, nonatomic) PKApplyFooterContent *footerContent;
@property (retain, nonatomic) PKApplyFooterContent *altFooterContent;
@property (retain, nonatomic) PKPaymentOfferDynamicContentCustomLayout *customLayout;

+ (id)postPurchaseChoosePlanDynamicContentPageForAmountString:(id)a0 merchantName:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)bodyLinkContent;
- (id)initWithDictionary:(id)a0 pageType:(unsigned long long)a1;

@end
