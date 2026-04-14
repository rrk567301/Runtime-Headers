@class PKAppleAccountInformation, ACAccountStore;

@interface PKAppleAccountManager : NSObject

@property (readonly, nonatomic) PKAppleAccountInformation *appleAccountInformation;
@property (readonly, nonatomic) ACAccountStore *accountStore;

+ (id)sharedInstance;

- (id)_primaryAppleAccount;
- (void).cxx_destruct;
- (void)silentlyRenewAppleAccountWithCompletionHandler:(id /* block */)a0;
- (id)init;
- (id)_aidaAccount;
- (void)_renewAppleAccountSilently:(BOOL)a0 completion:(id /* block */)a1;
- (void)renewAppleAccountWithCompletionHandler:(id /* block */)a0;

@end
