@class NSArray, NSString, NSMutableDictionary, NSSet;

@interface IMDAccountController : NSObject <IDSAccountDelegate> {
    NSMutableDictionary *_accounts;
    NSMutableDictionary *_activeAccounts;
    NSSet *_operationalAccountsCache;
    BOOL _isFirstLoad;
}

@property (readonly, nonatomic) BOOL isLoading;
@property (readonly, nonatomic) NSArray *accounts;
@property (readonly, nonatomic) NSArray *activeAccounts;
@property (readonly, nonatomic) NSArray *connectedAccounts;
@property (readonly, nonatomic) NSArray *connectingAccounts;
@property (readonly, nonatomic) NSArray *activeSessions;
@property (nonatomic) BOOL networkDataAvailable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)sharedAccountController;

- (void)load;
- (void)_rebuildOperationalAccountsCache;
- (void)account:(id)a0 isActiveChanged:(BOOL)a1;
- (id)activeAliases;
- (id)accountForIDSAccountUniqueID:(id)a0;
- (void)deactivateAccounts:(id)a0 force:(BOOL)a1;
- (id)_operationalAccounts;
- (BOOL)receiverIsCandidateForJunk:(id)a0 forAccount:(id)a1;
- (void)removeAccount:(id)a0;
- (id)anySessionForServiceName:(id)a0;
- (id)accountForAccountID:(id)a0;
- (id)accountForHandle:(id)a0;
- (id)connectingAccountsForService:(id)a0;
- (id)activeAccountsForService:(id)a0;
- (void)activateAccount:(id)a0;
- (void)_resetAccountReplicationSessions;
- (BOOL)activeAccountsAreEligibleForHawking;
- (void)_checkPowerAssertion;
- (id)activeAccountsWithServiceCapability:(id)a0;
- (void)deactivateAccount:(id)a0 force:(BOOL)a1;
- (void)deactivateAccounts:(id)a0;
- (void)activateAccounts:(id)a0;
- (void)deferredSave;
- (BOOL)_isOperationalForAccount:(id)a0;
- (BOOL)receiverIsCandidateForHawking:(id)a0;
- (void)dealloc;
- (BOOL)hasActivePhoneAccount;
- (BOOL)activeAccountsAreEligibleForFilterUnknownSendersByDefault;
- (id)connectedAccountsForService:(id)a0;
- (BOOL)isAccountActive:(id)a0;
- (id)_nicknameController;
- (void)deactivateAccount:(id)a0;
- (void).cxx_destruct;
- (id)accountsForLoginID:(id)a0 onService:(id)a1;
- (id)sessionForAccount:(id)a0;
- (id)accountsForService:(id)a0;
- (void)save;
- (void)_daemonWillShutdown:(id)a0;
- (void)addAccount:(id)a0;
- (BOOL)accountAssociatedWithHandle:(id)a0;
- (BOOL)_isAccountActive:(id)a0 forService:(id)a1;
- (id)sessionForReplicationSourceServiceName:(id)a0 replicatingAccount:(id)a1;
- (id)init;

@end
