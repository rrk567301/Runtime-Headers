@interface PKPassKitSwiftUIObjcBridge : NSObject

+ (double)screenScale;
+ (BOOL)passbookHasBeenDeleted;
+ (void)isUserInactive:(id /* block */)a0;
+ (id)appBundleIdentifer;
+ (id)passKitUIBundle;
+ (struct CGImage { } *)buttonImageForSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 type:(long long)a2 style:(long long)a3;
+ (id)accessibilityTitleForType:(long long)a0;
+ (id)paymentMethodTypeStringForPass:(id)a0;
+ (id)buttonTagForButtonType:(long long)a0;
+ (BOOL)canSupportMerchantCategoryCodeForPass:(id)a0 paymentRequest:(id)a1;
+ (BOOL)checkPassID:(id)a0 pass:(id)a1;
+ (BOOL)didAddPasses:(id)a0;
+ (double)floatRoundToPixelWithScale:(double)a0 scale:(double)a1;
+ (BOOL)isFirstPartyPass:(id)a0;
+ (id)localizedDeletableWalletStringFor:(id)a0;
+ (id)localizedPaymentString:(id)a0;
+ (id)networkNameForPass:(id)a0;
+ (void)openInstallWallet;
+ (struct CGSize { double x0; double x1; })passContentSize:(struct CGSize { double x0; double x1; })a0;
+ (id)paymentPassForUniqueID:(id)a0;
+ (id)paymentPassUniqueIDForPaymentRequest:(id)a0;
+ (id)paymentPassUniqueIDWithoutPaymentRequest;
+ (void)reportPaymentButtonRequestForButtonType:(long long)a0 isDynamic:(BOOL)a1 issuer:(id)a2 networkName:(id)a3 productSubType:(id)a4 appBundleID:(id)a5 errorType:(id)a6;
+ (id)sanitizedPrimaryAccountRepresentationForPass:(id)a0;
+ (void)signpostIntervalBeginForEvent:(id)a0;
+ (void)signpostIntervalEndForEvent:(id)a0;
+ (struct CGSize { double x0; double x1; })sizeRoundToPixelWithScale:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;
+ (struct CGSize { double x0; double x1; })sizeScaleAspectFit:(struct CGSize { double x0; double x1; })a0 container:(struct CGSize { double x0; double x1; })a1;

@end
