@class PKAppleAccountInformation, ACAccountStore;

@interface PKAppleAccountManager : NSObject

@property (readonly, nonatomic) PKAppleAccountInformation *appleAccountInformation;
@property (readonly, nonatomic) ACAccountStore *accountStore;

+ (id)sharedInstance;

- (id)_aidaAccount;
- (void)renewAppleAccountWithCompletionHandler:(id /* block */)a0;
- (id)_primaryAppleAccount;
- (void)silentlyRenewAppleAccountWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)_renewAppleAccountSilently:(BOOL)a0 completion:(id /* block */)a1;
- (id)init;

@end
