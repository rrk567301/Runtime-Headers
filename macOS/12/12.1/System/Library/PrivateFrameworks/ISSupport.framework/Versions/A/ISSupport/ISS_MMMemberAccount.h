@class NSURL, NSLock, NSString;

@interface ISS_MMMemberAccount : ISS_MMAccount <ISS_MMTransactionGenerator> {
    id _delegate;
    BOOL _use_synchronous;
    id _info_session;
    id _info_session2;
    NSURL *_info_url;
    NSURL *_info_url2;
    NSLock *_info_lock;
    NSString *_user_agent;
    id _my_private_ivars;
}

+ (void)initialize;
+ (id)_dotMacAccountNameFromSystem;
+ (id)_dotMacAccountPasswordFromSystem;
+ (id)accountWithName:(id)a0 password:(id)a1 applicationID:(id)a2;
+ (BOOL)_openPageInDefaultBrowser:(id)a0;
+ (id)signUpURL;
+ (id)signUpURLWithApplicationID:(id)a0;
+ (id)_referralSignUpURLWithLookupPath:(id)a0 andApplicationID:(id)a1;
+ (id)accountFromPreferencesWithApplicationID:(id)a0;
+ (void)signUpNewMember;
+ (void)signUpNewMemberWithApplicationID:(id)a0;

- (void)finalize;
- (void)dealloc;
- (id)init;
- (id)delegate;
- (void)setDelegate:(id)a0;
- (BOOL)isSynchronous;
- (void)setIsSynchronous:(BOOL)a0;
- (id)groupNames;
- (void)upgradeAccount;
- (id)_userAgent;
- (id)managedName;
- (id)initWithName:(id)a0 password:(id)a1 applicationID:(id)a2;
- (id)transactionDelegate;
- (void)setTransactionDelegate:(id)a0;
- (void)_setUserAgent:(id)a0;
- (id)_getEmailAliasesIfModifiedSince:(id)a0;
- (id)initFromPreferencesWithApplicationID:(id)a0;
- (id)_accountCopy;
- (id)credentialsAreValid;
- (id)_queryAccountForKey:(id)a0 synchronousFlag:(BOOL)a1 delegate:(id)a2;
- (BOOL)_hasPublicAccess;
- (id)_iDiskSession;
- (id)_secureIDiskSession;
- (id)accountUpgradeURL;
- (id)_infoSession2;
- (id)_infoSession;
- (id)_accountInfoPostHandler:(id)a0;
- (void)_initInfoSession;
- (id)_parseGroupMemberships:(id)a0;
- (id)_parseServicesAvailable:(id)a0;
- (id)_booleanNumberFromString:(id)a0;
- (id)secondaryUserInfo;
- (id)removeSecondaryUserNamed:(id)a0;
- (id)resetPassword:(id)a0 forSecondaryUserNamed:(id)a1;
- (id)groupNamed:(id)a0;
- (id)_credentialsAreValid;
- (int)validateCredentials;
- (BOOL)matchesSystemCredentials;
- (id)servicesAvailableForAccount;
- (id)_primaryEmailAddresses;
- (id)_groupMemberships;
- (id)daysLeftUntilExpiration;
- (id)canUpgradeAccount;
- (id)_sharedConfig;
- (id)secondaryUserNames;
- (id)_secondaryUserInfo;
- (id)createSecondaryUserWithName:(id)a0 andPassword:(id)a1;
- (id)_passwordForSecondaryUserNamed:(id)a0;
- (id)createGroupWithName:(id)a0 andMembers:(id)a1;
- (id)removeGroupNamed:(id)a0;

@end
