@class NSArray, NSString, NSMutableDictionary, NSSet;

@interface IMDAccountController : NSObject <IDSAccountDelegate> {
    NSMutableDictionary *_accounts;
    NSMutableDictionary *_activeAccounts;
    NSSet *_operationalAccountsCache;
    char _isFirstLoad;
}

@property (readonly, nonatomic) char isLoading;
@property (readonly, nonatomic) NSArray *accounts;
@property (readonly, nonatomic) NSArray *activeAccounts;
@property (readonly, nonatomic) NSArray *connectedAccounts;
@property (readonly, nonatomic) NSArray *connectingAccounts;
@property (readonly, nonatomic) NSArray *activeSessions;
@property (nonatomic) char networkDataAvailable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)sharedAccountController;

- (void)dealloc;
- (id)init;
- (void)load;
- (void).cxx_destruct;
- (void)save;
- (id)accountsForService:(id)a0;
- (void)account:(id)a0 isActiveChanged:(char)a1;
- (id)activeAliases;
- (void)addAccount:(id)a0;
- (void)removeAccount:(id)a0;
- (void)activateAccounts:(id)a0;
- (void)deactivateAccounts:(id)a0;
- (char)receiverIsCandidateForHawking:(id)a0;
- (void)deferredSave;
- (void)deactivateAccount:(id)a0;
- (void)activateAccount:(id)a0;
- (char)activeAccountsAreEligibleForHawking;
- (id)activeAccountsForService:(id)a0;
- (id)activeAccountsWithServiceCapability:(id)a0;
- (id)connectedAccountsForService:(id)a0;
- (void)_checkPowerAssertion;
- (void)_daemonWillShutdown:(id)a0;
- (char)_isAccountActive:(id)a0 forService:(id)a1;
- (char)_isOperationalForAccount:(id)a0;
- (id)_nicknameController;
- (id)_operationalAccounts;
- (void)_rebuildOperationalAccountsCache;
- (void)_resetAccountReplicationSessions;
- (char)accountAssociatedWithHandle:(id)a0;
- (id)accountForAccountID:(id)a0;
- (id)accountForHandle:(id)a0;
- (id)accountForIDSAccountUniqueID:(id)a0;
- (id)accountsForLoginID:(id)a0 onService:(id)a1;
- (id)anySessionForServiceName:(id)a0;
- (id)connectingAccountsForService:(id)a0;
- (void)deactivateAccount:(id)a0 force:(char)a1;
- (void)deactivateAccounts:(id)a0 force:(char)a1;
- (char)hasActivePhoneAccount;
- (char)isAccountActive:(id)a0;
- (char)receiverIsCandidateForJunk:(id)a0 forAccount:(id)a1;
- (id)sessionForAccount:(id)a0;
- (id)sessionForReplicationSourceServiceName:(id)a0 replicatingAccount:(id)a1;

@end
