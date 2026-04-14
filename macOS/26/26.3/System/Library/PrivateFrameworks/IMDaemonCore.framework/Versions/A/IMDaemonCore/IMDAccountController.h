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

- (void)removeAccount:(id)a0;
- (void)addAccount:(id)a0;
- (void)account:(id)a0 isActiveChanged:(BOOL)a1;
- (void)save;
- (id)activeAccountsForService:(id)a0;
- (void)load;
- (void)deactivateAccounts:(id)a0;
- (void)_resetAccountReplicationSessions;
- (id)activeAliases;
- (void)_checkPowerAssertion;
- (id)connectingAccountsForService:(id)a0;
- (void)deactivateAccount:(id)a0 force:(BOOL)a1;
- (void)_rebuildOperationalAccountsCache;
- (id)sessionForReplicationSourceServiceName:(id)a0 replicatingAccount:(id)a1;
- (id)init;
- (void)activateAccount:(id)a0;
- (BOOL)hasActivePhoneAccount;
- (id)accountForAccountID:(id)a0;
- (id)activeAccountsWithServiceCapability:(id)a0;
- (BOOL)activeAccountsAreEligibleForFilterUnknownSendersByDefault;
- (id)sessionForAccount:(id)a0;
- (id)accountsForLoginID:(id)a0 onService:(id)a1;
- (void)activateAccounts:(id)a0;
- (void).cxx_destruct;
- (id)_nicknameController;
- (void)_daemonWillShutdown:(id)a0;
- (void)dealloc;
- (id)anySessionForServiceName:(id)a0;
- (BOOL)activeAccountsAreEligibleForHawking;
- (BOOL)receiverIsCandidateForHawking:(id)a0;
- (BOOL)receiverIsCandidateForJunk:(id)a0 forAccount:(id)a1;
- (id)connectedAccountsForService:(id)a0;
- (id)accountForIDSAccountUniqueID:(id)a0;
- (id)_operationalAccounts;
- (void)deactivateAccounts:(id)a0 force:(BOOL)a1;
- (void)deferredSave;
- (BOOL)_isAccountActive:(id)a0 forService:(id)a1;
- (void)deactivateAccount:(id)a0;
- (BOOL)isAccountActive:(id)a0;
- (id)accountsForService:(id)a0;
- (id)accountForHandle:(id)a0;
- (BOOL)accountAssociatedWithHandle:(id)a0;
- (BOOL)_isOperationalForAccount:(id)a0;

@end
