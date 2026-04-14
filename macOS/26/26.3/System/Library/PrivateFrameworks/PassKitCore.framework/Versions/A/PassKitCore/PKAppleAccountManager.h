@class PKAppleAccountInformation, ACAccountStore;

@interface PKAppleAccountManager : NSObject

@property (readonly, nonatomic) PKAppleAccountInformation *appleAccountInformation;
@property (readonly, nonatomic) ACAccountStore *accountStore;

+ (id)sharedInstance;

- (id)_aidaAccount;
- (void)silentlyRenewAppleAccountWithCompletionHandler:(id /* block */)a0;
- (id)init;
- (void)renewAppleAccountWithCompletionHandler:(id /* block */)a0;
- (void)_renewAppleAccountSilently:(BOOL)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)_primaryAppleAccount;

@end
