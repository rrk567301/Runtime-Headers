@class NSString, ACAccountStore, NSObject;
@protocol OS_os_log;

@interface ECAccountsObserver : NSObject <EFLoggable>

@property (class, readonly) NSObject<OS_os_log> *log;

@property (retain, nonatomic) ACAccountStore *accountStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)observedAccountTypes;

- (void).cxx_destruct;
- (void)_accountStoreDidChange:(id)a0;
- (id)initWithAccountStore:(id)a0;
- (void)_credentialsDidChange:(id)a0;
- (void)_mailAccountsChanged:(id)a0;
- (char)_shouldNotifyOnAccountChangeForNotification:(id)a0;
- (void)handleAccountStoreChangeForAccountIdentifier:(id)a0;
- (void)handleCredentialChangeForAccountIdentifier:(id)a0;
- (void)handleMailAccountsHaveChanged:(id)a0 accountsNeedInitialization:(char)a1;

@end
