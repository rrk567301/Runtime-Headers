@class WBSSavedAccountStore, WBSAutoFillQuirksManager;

@interface WBSPasswordAuditor : NSObject

@property (readonly, nonatomic) WBSSavedAccountStore *savedAccountStore;
@property (readonly, nonatomic) WBSAutoFillQuirksManager *autoFillQuirksManager;
@property (readonly, nonatomic) char accountStoreHasDuplicatedPasswords;

- (id)init;
- (void).cxx_destruct;
- (id)duplicatePasswordsInPasswords:(id)a0;
- (char)_passwordIsReused:(id)a0 byOtherSavedAccount:(id)a1;
- (char)_savedAccountQualifiesForReuseAuditing:(id)a0;
- (id)initWithSavedAccountStore:(id)a0 autoFillQuirksManager:(id)a1;
- (char)savedAccount:(id)a0 reusesPasswordWithAccountInSavedAccounts:(id)a1;
- (id)savedAccountsWithDuplicatedPassword:(id)a0;

@end
