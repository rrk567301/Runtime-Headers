@class NSString;

@interface _ASPasswordManagerDeleteAlertConfiguration : NSObject

@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly, copy, nonatomic) NSString *buttonTitle;
@property (readonly, copy, nonatomic) NSString *cancelButtonTitle;
@property (readonly, nonatomic) BOOL isPermanentlyRemovingFromRecentlyDeleted;

+ (BOOL)_isKeychainSyncEnabled;
+ (id)_buttonTitleStringForAlertToDeleteWithAccountsSelectionInfo:(id)a0 isPermanentlyDeleting:(BOOL)a1;
+ (id)_buttonTitleStringForAlertToStopUsingSignInWithAppleForSavedAccount:(id)a0;
+ (id)_cancelButtonTitleStringForAlertToDeleteAccount;
+ (id)_cancelButtonTitleStringForAlertToStopUsingSignInWithAppleForSavedAccount:(id)a0;
+ (id)_configurationForAlertToDeleteFileVaultRecoveryKeyWithSavedAccount:(id)a0;
+ (id)_configurationForAlertToDeletePasskeyFromSavedAccount:(id)a0 isUndoable:(BOOL)a1;
+ (id)_configurationForAlertToDeletePasswordAndPasskeyFromSavedAccount:(id)a0;
+ (id)_configurationForAlertToDeletePasswordFromSavedAccount:(id)a0 isUndoable:(BOOL)a1;
+ (id)_configurationForAlertToDeleteVerificationCodeFromSavedAccount:(id)a0 isUndoable:(BOOL)a1;
+ (id)_configurationForAlertToStopUsingSignInWithAppleFromSavedAccount:(id)a0;
+ (id)_credentialDeletionStringForAlertToDeleteNumberOfFileVaultRecoveryKeys:(unsigned long long)a0;
+ (id)_credentialDeletionStringForAlertToDeleteNumberOfSiwaAccounts:(unsigned long long)a0;
+ (id)_credentialDeletionStringForAlertToDeleteWithAccountsSelectionInfo:(id)a0 isPermanentlyDeleting:(BOOL)a1;
+ (id)_deletionStringForAlertToDeleteWithAccountsSelectionInfo:(id)a0 isPermanentlyDeleting:(BOOL)a1;
+ (BOOL)_isPermanentlyDeletingSavedAccount:(id)a0;
+ (BOOL)_isPermanentlyDeletingSavedAccounts:(id)a0;
+ (id)_originalContributorDisplayNameForSavedAccount:(id)a0;
+ (id)_subtitleForDeletingNumberOfPasswordsWithVerificationCodes:(unsigned long long)a0;
+ (id)_subtitleStringForAlertToDeleteFileVaultRecoveryKeyWithSavedAccount:(id)a0;
+ (id)_subtitleStringForAlertToDeletePasskeyFromSavedAccount:(id)a0 isUndoable:(BOOL)a1;
+ (id)_subtitleStringForAlertToDeletePasswordFromSavedAccount:(id)a0 isUndoable:(BOOL)a1;
+ (id)_subtitleStringForAlertToDeleteVerificationCodeFromSavedAccount:(id)a0 isUndoable:(BOOL)a1;
+ (id)_subtitleStringForAlertToDeleteWithAccountsSelectionInfo:(id)a0 isPermanentlyDeleting:(BOOL)a1;
+ (id)_subtitleStringForAlertToPermanentlyDeletePasskeyFromSavedAccount:(id)a0;
+ (id)_subtitleStringForAlertToPermanentlyDeletePasswordFromSavedAccount:(id)a0;
+ (id)_subtitleStringForAlertToSoftDeletePasskeyFromSavedAccount:(id)a0;
+ (id)_subtitleStringForAlertToSoftDeletePasswordFromSavedAccount:(id)a0;
+ (id)_subtitleStringForAlertToStopUsingSignInWithAppleForSavedAccount:(id)a0;
+ (id)_titleStringForAlertToDeleteFileVaultRecoveryKeyWithSavedAccount:(id)a0;
+ (id)_titleStringForAlertToDeletePasskeyFromSavedAccount:(id)a0;
+ (id)_titleStringForAlertToDeletePasswordFromSavedAccount:(id)a0;
+ (id)_titleStringForAlertToDeleteVerificationCodeFromSavedAccount:(id)a0;
+ (id)_titleStringForAlertToDeleteWithAccountsSelectionInfo:(id)a0 isPermanentlyDeleting:(BOOL)a1;
+ (id)_titleStringForAlertToStopUsingSignInWithAppleForSavedAccount:(id)a0;
+ (id)configurationForDeleting:(unsigned long long)a0 fromSavedAccount:(id)a1;
+ (id)configurationForDeleting:(unsigned long long)a0 fromSavedAccount:(id)a1 isUndoable:(BOOL)a2;
+ (id)configurationForDeletingSavedAccounts:(id)a0;
+ (id)formattedRecentlyDeletedExpirationDays;

- (void).cxx_destruct;
- (id)_initWithTitle:(id)a0 subtitle:(id)a1 buttonTitle:(id)a2 cancelButtonTitle:(id)a3 isPermanentlyRemovingFromRecentlyDeleted:(BOOL)a4;

@end
