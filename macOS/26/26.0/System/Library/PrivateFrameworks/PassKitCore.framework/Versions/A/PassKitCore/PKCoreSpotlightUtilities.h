@interface PKCoreSpotlightUtilities : NSObject

+ (id)_extraDataAttributeForPass:(id)a0;
+ (struct CGSize { double x0; double x1; })_thumbnailImageSizeForSourceImageSize:(struct CGSize { double x0; double x1; })a0;
+ (id)accountIdentifierFromSpotlightIdentifier:(id)a0;
+ (id)displayNameForPass:(id)a0;
+ (id)passUniqueIdentifierFromCardInformationSpotlightIdentifier:(id)a0;
+ (id)passUniqueIdentifierFromSpotlightIdentifier:(id)a0;
+ (id)paymentSetupProductIdentifierFromSpotlightIdentifier:(id)a0;
+ (id)searchKeywordForTransactionStatus:(long long)a0;
+ (id)searchKeywordForTransactionType:(long long)a0;
+ (id)spotlightIdentifierForAccountIdentifier:(id)a0;
+ (id)spotlightIdentifierForCardInformationUniqueIdentifier:(id)a0;
+ (id)spotlightIdentifierForPassUniqueIdentifier:(id)a0;
+ (id)spotlightIdentifierForPaymentSetupProductIdentifier:(id)a0;
+ (id)spotlightIdentifierForTransactionIdentifier:(id)a0;
+ (id)textContentAttributeForPass:(id)a0 passTiles:(id)a1;
+ (id)textContentAttributeForTransaction:(id)a0 pass:(id)a1;
+ (id)transactionIdentifierFromSpotlightIdentifier:(id)a0;

@end
