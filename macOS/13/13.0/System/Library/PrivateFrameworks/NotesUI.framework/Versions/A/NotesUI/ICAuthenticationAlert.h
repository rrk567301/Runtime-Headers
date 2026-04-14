@class NSString;

@interface ICAuthenticationAlert : NSObject

@property (nonatomic) BOOL prefersSheet;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSString *actionTitle;
@property (nonatomic) BOOL actionIsDestructive;
@property (copy, nonatomic) NSString *dismissTitle;
@property (copy, nonatomic) id /* block */ shouldPresentHandler;
@property (copy, nonatomic) id /* block */ actionHandler;
@property (copy, nonatomic) id /* block */ dismissHandler;
@property (readonly, nonatomic) BOOL shouldPresent;

+ (id)aboutLockedNotesInfoAlert;
+ (id)messageForPreventLockReason:(unsigned long long)a0;
+ (id)cannotLockInfoAlertWithReason:(unsigned long long)a0;
+ (id)cannotAddAttachmentsInfoAlertWithAttachmentCount:(unsigned long long)a0;
+ (id)enableBiometricsActionAlertShownKeyWithAccount:(id)a0;
+ (id)enableBiometricsActionAlertWithAccount:(id)a0;
+ (id)devicePasswordIncompatibleConfirmationAlertWithAccount:(id)a0 incompatibilityMessage:(id)a1;
+ (id)switchedToCustomPasswordModeInfoAlertWithAccount:(id)a0;
+ (id)switchedToDevicePasswordModeInfoAlertWithAccount:(id)a0;
+ (id)switchedModeInfoAlertWithAccount:(id)a0;
+ (id)switchToDevicePasswordInSettingsInfoAlertWithAccount:(id)a0;
+ (id)forgotCustomPasswordSwitchAnywayConfirmationAlert;
+ (id)switchToDevicePasswordPromptPresentedCountKeyForAccount:(id)a0;
+ (BOOL)shouldPresentSwitchToDevicePasswordPromptForAccount:(id)a0;
+ (void)markSwitchToDevicePasswordPromptPresentedForAccount:(id)a0;
+ (id)customPasswordConfirmationAlert;
+ (id)rememberCustomPasswordInfoAlertPresentedKeyForAccount:(id)a0;
+ (id)rememberCustomPasswordInfoAlertWithAccount:(id)a0;
+ (id)missingCustomPasswordInfoAlert;
+ (id)mismatchedCustomPasswordInfoAlert;
+ (id)cannotSetCustomPasswordInfoAlert;
+ (id)incorrectCustomPasswordInfoAlertWithObject:(id)a0 showHint:(BOOL)a1;
+ (id)updateDivergedCustomPasswordNotesActionAlertWithObject:(id)a0;
+ (id)updateDivergedCustomPasswordModeActionAlertWithAccount:(id)a0 incompatibilityMessage:(id)a1;
+ (id)resetCustomPasswordInfoAlertWithAccount:(id)a0;
+ (id)resetCustomPasswordConfirmationAlertWithAccount:(id)a0;
+ (id)changeOtherAccountCustomPasswordsActionAlertWithAccount:(id)a0 otherAccount:(id)a1;
+ (id)setDevicePasswordActionAlert;
+ (id)setDevicePasswordInfoAlert;
+ (id)signIntoCloudAccountActionAlertWithAccount:(id)a0;
+ (id)enableKeychainActionAlert;
+ (id)updateDivergedDevicePasswordModeActionAlertWithAccount:(id)a0;
+ (id)customAccountNameForAccount:(id)a0;
+ (void)presentAlertsIfNeeded:(id)a0 window:(id)a1 completionHandler:(id /* block */)a2;
+ (void)resetPresentationsForAccount:(id)a0;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)presentInWindow:(id)a0 completionHandler:(id /* block */)a1;

@end
