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

- (void)addAccount:(id)a0;
- (void)account:(id)a0 isActiveChanged:(BOOL)a1;
- (void)removeAccount:(id)a0;
- (void)save;
- (id)activeAccountsForService:(id)a0;
- (void)_rebuildOperationalAccountsCache;
- (id)connectedAccountsForService:(id)a0;
- (id)activeAccountsWithServiceCapability:(id)a0;
- (id)accountsForService:(id)a0;
- (void)activateAccount:(id)a0;
- (id)anySessionForServiceName:(id)a0;
- (void)load;
- (void)deactivateAccount:(id)a0;
- (BOOL)hasActivePhoneAccount;
- (void)activateAccounts:(id)a0;
- (id)_nicknameController;
- (BOOL)activeAccountsAreEligibleForFilterUnknownSendersByDefault;
- (void)deactivateAccounts:(id)a0 force:(BOOL)a1;
- (id)accountForIDSAccountUniqueID:(id)a0;
- (void)_resetAccountReplicationSessions;
- (void)_daemonWillShutdown:(id)a0;
- (BOOL)isAccountActive:(id)a0;
- (void)deferredSave;
- (void).cxx_destruct;
- (BOOL)_isAccountActive:(id)a0 forService:(id)a1;
- (void)deactivateAccount:(id)a0 force:(BOOL)a1;
- (BOOL)_isOperationalForAccount:(id)a0;
- (id)init;
- (id)connectingAccountsForService:(id)a0;
- (BOOL)receiverIsCandidateForHawking:(id)a0;
- (BOOL)receiverIsCandidateForJunk:(id)a0 forAccount:(id)a1;
- (id)activeAliases;
- (id)accountsForLoginID:(id)a0 onService:(id)a1;
- (id)accountForHandle:(id)a0;
- (id)sessionForAccount:(id)a0;
- (id)sessionForReplicationSourceServiceName:(id)a0 replicatingAccount:(id)a1;
- (BOOL)activeAccountsAreEligibleForHawking;
- (id)accountForAccountID:(id)a0;
- (id)_operationalAccounts;
- (void)dealloc;
- (BOOL)accountAssociatedWithHandle:(id)a0;
- (void)deactivateAccounts:(id)a0;
- (void)_checkPowerAssertion;

@end
