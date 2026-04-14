@interface ICPasswordUtilities : ICSharedPasswordUtilities

+ (id)sharedInstance;
+ (id)imageForCurrentDecryptedStatusForNote:(id)a0 imageType:(unsigned long long)a1;
+ (void)showReauthenticateTouchIDSheetInWindow:(id)a0 completionHandler:(id /* block */)a1;
+ (void)setTouchIDEnabledForSharedPassword:(BOOL)a0 account:(id)a1 displayWindow:(id)a2 completionHandler:(id /* block */)a3;
+ (void)resetTimeoutTimer;
+ (void)rewrapCryptoKeyForObject:(id)a0 window:(id)a1;

- (id)displayedSheet;
- (void)showReauthenticateTouchIDSheetInWindow:(id)a0 completionHandler:(id /* block */)a1;
- (void)showPasswordSetUpSheetForAccount:(id)a0 displayWindow:(id)a1 completionHandler:(id /* block */)a2;
- (void)showPasswordChangeSheetForAccount:(id)a0 displayWindow:(id)a1 completionHandler:(id /* block */)a2;
- (void)showPasswordChangeSheetForAccount:(id)a0 didAuthenticateWithBiometrics:(BOOL)a1 displayWindow:(id)a2 completionHandler:(id /* block */)a3;
- (void)showResetPasswordSheetForAccount:(id)a0 displayWindow:(id)a1 completionHandler:(id /* block */)a2;
- (void)offerDevicePasswordOrResetPasswordForAccount:(id)a0 displayWindow:(id)a1 completionHandler:(id /* block */)a2;

@end
