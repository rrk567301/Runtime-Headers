@class PKAppleAccountInformation, ACAccountStore;

@interface PKAppleAccountManager : NSObject {
    ACAccountStore *_accountStore;
}

@property (readonly, nonatomic) PKAppleAccountInformation *appleAccountInformation;
@property (readonly, nonatomic) ACAccountStore *accountStore;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_aidaAccount;
- (void)renewAppleAccountWithCompletionHandler:(id /* block */)a0;
- (id)_primaryAppleAccount;

@end
