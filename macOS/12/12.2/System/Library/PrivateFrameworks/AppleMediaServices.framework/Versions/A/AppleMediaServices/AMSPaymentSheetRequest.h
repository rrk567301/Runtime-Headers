@class NSString, NSURL, NSArray, AMSBiometricsSignatureRequest, NSAttributedString, NSDictionary, ACAccount, NSNumber;

@interface AMSPaymentSheetRequest : NSObject

@property (readonly) unsigned long long ams_confirmationStyle;
@property (readonly) unsigned long long ams_paymentRequestorType;
@property BOOL isDelegateAuthentication;
@property (copy) NSDictionary *responseDictionary;
@property (copy) ACAccount *account;
@property (copy) NSString *accountHeader;
@property (getter=isApplePayClassic) BOOL applePayClassic;
@property (copy) NSArray *attributedList;
@property (retain) AMSBiometricsSignatureRequest *biometricsRequest;
@property long long confirmationTitle;
@property (copy) NSString *currencyCode;
@property (copy) NSString *countryCode;
@property (copy) NSString *delegateAuthenticateChallenge;
@property (copy) NSString *displayPrice;
@property (copy) NSString *explanation;
@property (copy) NSArray *flexList;
@property (retain) NSArray *inlineImages;
@property (retain) NSString *logKey;
@property (copy) NSDictionary *merchantSession;
@property (copy) NSString *message;
@property long long payee;
@property (copy) NSString *paymentSession;
@property (copy) NSString *paymentSummary;
@property (copy) NSArray *preSheetDialog;
@property (copy) NSNumber *price;
@property (copy) NSArray *priceSectionItems;
@property (copy) NSString *ratingHeader;
@property (copy) NSString *ratingValue;
@property BOOL requiresAuthorization;
@property (readonly) BOOL requiresDelegateAuthentication;
@property long long salableIcon;
@property (copy) NSURL *salableIconURL;
@property (copy) NSArray *salableInfo;
@property (copy) NSAttributedString *salableInfoLabel;
@property BOOL shouldUppercaseText;
@property (copy) NSString *storeName;
@property (copy) NSString *title;
@property long long titleType;
@property (copy) NSString *userAgent;

+ (id)attributedStringByRemovingPlaceholderTagsFromAttributedString:(id)a0;

- (void).cxx_destruct;
- (id)_summaryItemsForAttributedList:(id)a0 assetCache:(id)a1 bag:(id)a2;
- (id)_contentItemsForFlexibleList:(id)a0 assetCache:(id)a1 bag:(id)a2;
- (id)ams_createSummaryItems;
- (id)ams_createSummaryItemsForAttributedListWithAssetCache:(id)a0 bag:(id)a1;
- (id)ams_createContentItemForAccount;
- (id)ams_createContentItemsForFlexibleListWithAssetCache:(id)a0 bag:(id)a1;
- (id)ams_createContentItemsForPreScreenDialogWithAssetCache:(id)a0 bag:(id)a1;
- (id)ams_createContentItemForRating;
- (id)ams_createContentItemForSalableInfoWithAssetCache:(id)a0 bag:(id)a1;
- (unsigned long long)_countImagePlaceholderTags:(id)a0;
- (long long)_imageTypeForURL:(id)a0;
- (id)_replaceImagePlaceholderTagWithImageData:(id)a0 tag:(id)a1 data:(id)a2 scale:(float)a3 tint:(BOOL)a4;
- (struct CGPath { } *)_createBorderPathForAdornmentStyle:(long long)a0 iconWidth:(double)a1 iconHeight:(double)a2;
- (struct CGImage { } *)_createDefaultImageWithImageRef:(struct CGImage { } *)a0 size:(struct CGSize { double x0; double x1; })a1 borderPath:(struct CGPath { } *)a2;
- (struct CGImage { } *)_createImageForResourceName:(id)a0 outAssetScale:(float *)a1;

@end
