@class PKAppleAccountInformation, ACAccountStore;

@interface PKAppleAccountManager : NSObject

@property (readonly, nonatomic) PKAppleAccountInformation *appleAccountInformation;
@property (readonly, nonatomic) ACAccountStore *accountStore;

+ (id)sharedInstance;

- (void)_renewAppleAccountSilently:(BOOL)a0 completion:(id /* block */)a1;
- (void)renewAppleAccountWithCompletionHandler:(id /* block */)a0;
- (id)init;
- (id)_primaryAppleAccount;
- (void)silentlyRenewAppleAccountWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)_aidaAccount;

@end
