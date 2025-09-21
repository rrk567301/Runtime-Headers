@class NSString, NSArray, IDSAccountController;

@interface IMDIDSService : IMDService <IDSAccountControllerDelegate, IDSAccountRegistrationDelegate> {
    IDSAccountController *_accountController;
    char _activatingAccount;
    char _deactivatingAccount;
}

@property (retain, nonatomic) IMDIDSService *subService;
@property (retain, nonatomic) NSString *subServiceName;
@property (weak, nonatomic) IMDIDSService *mainService;
@property (readonly, retain, nonatomic) NSArray *accountsLoadedFromIdentityServices;
@property (readonly, nonatomic) NSArray *activeAccountsFromIdentityServices;
@property (readonly, nonatomic) char isSubService;
@property (readonly, nonatomic) char canManageRegistration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithBundle:(id)a0;
- (void)accountController:(id)a0 accountAdded:(id)a1;
- (void)accountRemoved:(id)a0;
- (void)disableAccount:(id)a0;
- (void)account:(id)a0 aliasesChanged:(id)a1;
- (void)account:(id)a0 displayNameChanged:(id)a1;
- (void)account:(id)a0 loginChanged:(id)a1;
- (void)account:(id)a0 profileChanged:(id)a1;
- (void)account:(id)a0 registrationStatusInfoChanged:(id)a1;
- (void)account:(id)a0 vettedAliasesChanged:(id)a1;
- (void)accountAdded:(id)a0;
- (void)accountController:(id)a0 accountDisabled:(id)a1;
- (void)accountController:(id)a0 accountEnabled:(id)a1;
- (void)accountController:(id)a0 accountRemoved:(id)a1;
- (void)accountController:(id)a0 accountUpdated:(id)a1;
- (void)enableAccount:(id)a0;
- (void)refreshRegistrationForAccount:(id)a0;
- (void)registrationFailedForAccount:(id)a0 needsDeletion:(id)a1;
- (Class)accountClass;
- (void)_loadIDSAccountController;
- (id)_serviceDomain;
- (id)accountFromIDSAccountWithUniqueID:(id)a0;
- (id)imdAccountLoginFromIDSAccountWithType:(int)a0 login:(id)a1;
- (id)initWithBundle:(id)a0 isMainService:(char)a1;
- (id)initWithBundle:(id)a0 subServiceName:(id)a1;
- (char)isRegistrationUnmanaged;
- (id)mockAccountController;
- (id)newAccountWithAccountDefaults:(id)a0 accountID:(id)a1;
- (void)setMockAccountController:(id)a0;

@end
