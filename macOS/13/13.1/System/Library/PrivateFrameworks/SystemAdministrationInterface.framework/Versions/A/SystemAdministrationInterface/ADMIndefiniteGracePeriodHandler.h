@interface ADMIndefiniteGracePeriodHandler : NSObject

+ (id)titleStringForIsComputerUnlockEnabled:(BOOL)a0 isApplePayEnabled:(BOOL)a1 isStorePurchaseEnabled:(BOOL)a2;
+ (id)messageStringForIsComputerUnlockEnabled:(BOOL)a0 isApplePayEnabled:(BOOL)a1 isStorePurchaseEnabled:(BOOL)a2;
+ (void)handleEnablingAutoLoginForUser:(id)a0 window:(id)a1 completionHandler:(id /* block */)a2;

@end
