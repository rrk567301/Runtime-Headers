@class NSString;

@interface _ASPasswordManagerDeleteAlertConfiguration : NSObject

@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly, copy, nonatomic) NSString *buttonTitle;
@property (readonly, copy, nonatomic) NSString *cancelButtonTitle;
@property (readonly, nonatomic) char isPermanentlyRemovingFromRecentlyDeleted;

+ (char)_isKeychainSyncEnabled;
+ (id)_buttonTitleStringForAlertToDeleteNumberOfPasswords:(unsigned long long)a0 numberOfPasskeys:(unsigned long long)a1 numberOfSiwaAccounts:(unsigned long long)a2 isDeletingSharedAccounts:(char)a3;
+ (id)_buttonTitleStringForAlertToStopUsingSignInWithAppleForSavedAccount:(id)a0;
+ (id)_cancelButtonTitleStringForAlertToDeleteAccount;
+ (id)_cancelButtonTitleStringForAlertToStopUsingSignInWithAppleForSavedAccount:(id)a0;
+ (id)_configurationForAlertToDeletePasskeyFromSavedAccount:(id)a0 isUndoable:(char)a1;
+ (id)_configurationForAlertToDeletePasswordAndPasskeyFromSavedAccount:(id)a0;
+ (id)_configurationForAlertToDeletePasswordFromSavedAccount:(id)a0 isUndoable:(char)a1;
+ (id)_configurationForAlertToDeleteVerificationCodeFromSavedAccount:(id)a0 isUndoable:(char)a1;
+ (id)_configurationForAlertToStopUsingSignInWithAppleFromSavedAccount:(id)a0;
+ (id)_credentialDeletionStringForAlertToDeleteNumberOfPasswords:(unsigned long long)a0 numberOfPasskeys:(unsigned long long)a1 numberOfSiwaAccounts:(unsigned long long)a2 isDeletingSharedAccounts:(char)a3 isPermanentlyDeleting:(char)a4;
+ (id)_credentialDeletionStringForAlertToDeleteNumberOfSiwaAccounts:(unsigned long long)a0;
+ (id)_deletionStringForAlertToDeleteNumberOfPasswords:(unsigned long long)a0 numberOfPasskeys:(unsigned long long)a1 isDeletingSharedAccounts:(char)a2 isPermanentlyDeleting:(char)a3;
+ (void)_getInformationForSavedAccountsToDelete:(id)a0 numberOfPasswords:(unsigned long long *)a1 numberOfPasskeys:(unsigned long long *)a2 numberOfSiwaAccounts:(unsigned long long *)a3 isDeletingVerificationCodes:(char *)a4 hasSharedAccounts:(char *)a5 areAllAccountsShared:(char *)a6;
+ (char)_isPermanentlyDeletingSavedAccount:(id)a0;
+ (char)_isPermanentlyDeletingSavedAccounts:(id)a0;
+ (id)_originalContributorDisplayNameForSavedAccount:(id)a0;
+ (id)_subtitleForDeletingNumberOfPasswordsWithVerificationCodes:(unsigned long long)a0;
+ (id)_subtitleStringForAlertToDeleteNumberOfPasswords:(unsigned long long)a0 numberOfPasskeys:(unsigned long long)a1 numberOfSiwaAccounts:(unsigned long long)a2 isDeletingVerificationCodes:(char)a3 isDeletingSharedAccounts:(char)a4 isPermanentlyDeleting:(char)a5;
+ (id)_subtitleStringForAlertToDeletePasskeyFromSavedAccount:(id)a0 isUndoable:(char)a1;
+ (id)_subtitleStringForAlertToDeletePasswordFromSavedAccount:(id)a0 isUndoable:(char)a1;
+ (id)_subtitleStringForAlertToDeleteVerificationCodeFromSavedAccount:(id)a0 isUndoable:(char)a1;
+ (id)_subtitleStringForAlertToPermanentlyDeletePasskeyFromSavedAccount:(id)a0;
+ (id)_subtitleStringForAlertToPermanentlyDeletePasswordFromSavedAccount:(id)a0;
+ (id)_subtitleStringForAlertToSoftDeletePasskeyFromSavedAccount:(id)a0;
+ (id)_subtitleStringForAlertToSoftDeletePasswordFromSavedAccount:(id)a0;
+ (id)_subtitleStringForAlertToStopUsingSignInWithAppleForSavedAccount:(id)a0;
+ (id)_titleStringForAlertToDeleteNumberOfPasswords:(unsigned long long)a0 numberOfPasskeys:(unsigned long long)a1 numberOfSiwaAccounts:(unsigned long long)a2 isDeletingSharedAccounts:(char)a3 isPermanentlyDeleting:(char)a4;
+ (id)_titleStringForAlertToDeletePasskeyFromSavedAccount:(id)a0;
+ (id)_titleStringForAlertToDeletePasswordFromSavedAccount:(id)a0;
+ (id)_titleStringForAlertToDeleteVerificationCodeFromSavedAccount:(id)a0;
+ (id)_titleStringForAlertToStopUsingSignInWithAppleForSavedAccount:(id)a0;
+ (id)configurationForDeleting:(unsigned long long)a0 fromSavedAccount:(id)a1;
+ (id)configurationForDeleting:(unsigned long long)a0 fromSavedAccount:(id)a1 isUndoable:(char)a2;
+ (id)configurationForDeletingSavedAccounts:(id)a0;

- (void).cxx_destruct;
- (id)_initWithTitle:(id)a0 subtitle:(id)a1 buttonTitle:(id)a2 cancelButtonTitle:(id)a3 isPermanentlyRemovingFromRecentlyDeleted:(char)a4;

@end
