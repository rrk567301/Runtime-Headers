@class WBSAutoFillQuirksManager, NSMutableDictionary, WBSSavedAccountStore;

@interface WBSPasswordAuditor : NSObject

@property (retain, nonatomic) NSMutableDictionary *passwordToSavedAccountsCache;
@property (readonly, nonatomic) WBSSavedAccountStore *savedAccountStore;
@property (readonly, nonatomic) WBSAutoFillQuirksManager *autoFillQuirksManager;
@property (readonly, nonatomic) BOOL test_accountStoreHasDuplicatedPasswords;

- (void)invalidateCache;
- (void).cxx_destruct;
- (id)init;
- (id)duplicatePasswordsInPasswords:(id)a0;
- (id)_buildPasswordToSavedAccountsMapForSavedAccounts:(id)a0;
- (id)_findDuplicatesInPasswordToAccountsMap:(id)a0;
- (BOOL)_passwordIsReused:(id)a0 byOtherSavedAccount:(id)a1;
- (BOOL)_savedAccountQualifiesForReuseAuditing:(id)a0;
- (id)initWithSavedAccountStore:(id)a0 autoFillQuirksManager:(id)a1;
- (BOOL)savedAccount:(id)a0 reusesPasswordWithAccountInSavedAccounts:(id)a1;
- (id)savedAccountsWithDuplicatedPassword:(id)a0;

@end
