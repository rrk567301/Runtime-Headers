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
@property (copy) NSNumber *designVersion;
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
@property (copy) NSArray *secondaryFlexList;
@property long long secondarySalableIcon;
@property (copy) NSURL *secondarySalableIconURL;
@property (copy) NSArray *secondarySalableInfo;
@property (copy) NSAttributedString *secondarySalableInfoLabel;
@property BOOL shouldUppercaseText;
@property (copy) NSString *storeName;
@property (copy) NSArray *styles;
@property (copy) NSString *title;
@property long long titleType;
@property (copy) NSString *userAgent;

+ (id)attributedStringByRemovingPlaceholderTagsFromAttributedString:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)ams_createSummaryItems;
- (id)ams_createSummaryItemsForAttributedListWithAssetCache:(id)a0 bag:(id)a1;
- (id)ams_createContentItemForAccount;
- (id)ams_createContentItemForDeviceName:(id)a0;
- (id)ams_createContentItemsForFlexibleListWithAssetCache:(id)a0 designVersion:(id)a1 bag:(id)a2;
- (id)ams_createContentItemsForPreScreenDialogWithAssetCache:(id)a0 designVersion:(id)a1 bag:(id)a2;
- (id)ams_createContentItemForRating;
- (id)ams_createSecondaryContentItemsForFlexibleListWithAssetCache:(id)a0 designVersion:(id)a1 bag:(id)a2;
- (id)ams_contentItemForSalableInfoLabel:(id)a0 salableIconURL:(id)a1 salableIcon:(long long)a2 assetCache:(id)a3 designVersion:(id)a4 bag:(id)a5;
- (id)ams_createContentItemForSalableInfoWithAssetCache:(id)a0 designVersion:(id)a1 bag:(id)a2;
- (id)ams_createSecondaryContentItemForSalableInfoWithAssetCache:(id)a0 designVersion:(id)a1 bag:(id)a2;
- (id)_contentItemsForFlexibleList:(id)a0 assetCache:(id)a1 designVersion:(id)a2 bag:(id)a3;
- (long long)_imageTypeForURL:(id)a0;
- (id)_replaceImagePlaceholderTag:(id)a0 withAttributes:(id)a1 foregroundColor:(long long)a2 forAttributedString:(id)a3;
- (id)_replaceImagePlaceholderTag:(id)a0 withImageData:(id)a1 scale:(float)a2 tint:(BOOL)a3 forAttributedString:(id)a4;
- (id)_summaryItemsForAttributedList:(id)a0 assetCache:(id)a1 bag:(id)a2;
- (struct CGPath { } *)_createBorderPathForAdornmentStyle:(long long)a0 iconWidth:(double)a1 iconHeight:(double)a2;
- (struct CGImage { } *)_createDefaultImageWithImageRef:(struct CGImage { } *)a0 size:(struct CGSize { double x0; double x1; })a1 borderPath:(struct CGPath { } *)a2;
- (struct CGImage { } *)_createImageForResourceName:(id)a0 outAssetScale:(float *)a1;
- (BOOL)isDesignVersionEqual:(id)a0;
- (BOOL)isDesignVersionEqualOrGreaterThan:(id)a0;
- (BOOL)isDesignVersionLessThan:(id)a0;

@end
