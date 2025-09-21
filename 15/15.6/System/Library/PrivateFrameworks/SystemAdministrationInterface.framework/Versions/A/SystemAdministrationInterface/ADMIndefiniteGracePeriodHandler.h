@interface ADMIndefiniteGracePeriodHandler : NSObject

+ (void)handleEnablingAutoLoginForUser:(id)a0 window:(id)a1 completionHandler:(id /* block */)a2;
+ (id)messageStringForIsComputerUnlockEnabled:(char)a0 isApplePayEnabled:(char)a1 isStorePurchaseEnabled:(char)a2;
+ (id)titleStringForIsComputerUnlockEnabled:(char)a0 isApplePayEnabled:(char)a1 isStorePurchaseEnabled:(char)a2;

@end
