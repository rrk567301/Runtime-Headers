@class RMUIPasscodeViewModelProvider, NSString, RMUIAccountViewModelProvider, RMUILegacyProfilesViewModelProvider, ACAccount, RMUIPasscodeViewModel, NSArray;

@interface RMUIConfigurationInterface : NSObject

@property (readonly, nonatomic) ACAccount *rmAccount;
@property (readonly, copy, nonatomic) NSString *mdmProfileIdentifier;
@property (retain, nonatomic) RMUIPasscodeViewModelProvider *passcodeProvider;
@property (retain, nonatomic) RMUIAccountViewModelProvider *accountProvider;
@property (retain, nonatomic) RMUILegacyProfilesViewModelProvider *legacyProfilesProvider;
@property (retain, nonatomic) RMUIPasscodeViewModel *privPasscodeViewModel;
@property (retain, nonatomic) NSArray *privAccountViewModels;
@property (retain, nonatomic) NSArray *privProfileViewModels;
@property (readonly, nonatomic) long long scope;
@property (readonly, nonatomic) RMUIPasscodeViewModel *passcodeViewModel;
@property (readonly, nonatomic) NSArray *accountViewModels;
@property (readonly, nonatomic) NSArray *profileViewModels;
@property (readonly, nonatomic) NSString *scopeHeading;
@property (readonly, nonatomic) NSString *passcodeDeclarationsHeading;
@property (readonly, nonatomic) NSString *accountDeclarationsHeading;
@property (readonly, nonatomic) NSString *profileDeclarationsHeading;

- (void).cxx_destruct;
- (id)initWithScope:(long long)a0;
- (void)refresh;
- (void)_activateConfiguration:(id)a0 observerStore:(id)a1 completionHandler:(id /* block */)a2;
- (void)_deactivateConfiguration:(id)a0 observerStore:(id)a1 completionHandler:(id /* block */)a2;
- (void)_loadObserverStore;
- (id)_observerStore;
- (void)_reloadUI;
- (void)_reloadViewModels;
- (long long)_rmManagementScope;
- (long long)_rmScoreScope;
- (id)initForTest:(long long)a0;
- (id)initWithAccount:(id)a0 scope:(long long)a1;
- (id)initWithMDMProfileIdentifier:(id)a0 scope:(long long)a1;
- (void)reloadNotificationPosted:(id)a0;
- (void)setConfigurationActivated:(BOOL)a0 forViewModel:(id)a1 completionHandler:(id /* block */)a2;

@end
