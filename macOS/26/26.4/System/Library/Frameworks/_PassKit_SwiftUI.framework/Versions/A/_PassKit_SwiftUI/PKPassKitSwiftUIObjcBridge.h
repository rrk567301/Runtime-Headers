@interface PKPassKitSwiftUIObjcBridge : NSObject

+ (double)screenScale;
+ (BOOL)passbookHasBeenDeleted;
+ (id)passKitUIBundle;
+ (id)accessibilityTitleForType:(long long)a0;
+ (struct CGImage { } *)buttonImageForSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 type:(long long)a2 style:(long long)a3;
+ (BOOL)checkPassID:(id)a0 pass:(id)a1;
+ (BOOL)didAddPasses:(id)a0;
+ (double)floatRoundToPixelWithScale:(double)a0 scale:(double)a1;
+ (id)localizedDeletableWalletStringFor:(id)a0;
+ (id)localizedPaymentString:(id)a0;
+ (void)openInstallWallet;
+ (struct CGSize { double x0; double x1; })passContentSize:(struct CGSize { double x0; double x1; })a0;
+ (id)paymentPassForUniqueID:(id)a0;
+ (id)sanitizedPrimaryAccountRepresentationForPass:(id)a0;
+ (void)signpostIntervalBeginRenderSimpleButtonEvent;
+ (void)signpostIntervalEndRenderSimpleButtonEvent;
+ (struct CGSize { double x0; double x1; })sizeRoundToPixelWithScale:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;
+ (struct CGSize { double x0; double x1; })sizeScaleAspectFit:(struct CGSize { double x0; double x1; })a0 container:(struct CGSize { double x0; double x1; })a1;

@end
