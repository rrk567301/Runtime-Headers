@class ACAccountStore;

@interface TUIAppleAccountManager : NSObject {
    ACAccountStore *_accountStore;
}

- (id)initWithAccountStore:(id)a0;
- (void).cxx_destruct;
- (void)silentRenewAppleAccountWithCompletionHandler:(id /* block */)a0;

@end
