@class EXSSyncEngine, NSArray, NSMutableArray;

@interface EXSAccountManager : NSObject {
    NSMutableArray *_accounts;
}

@property (retain, nonatomic) EXSSyncEngine *syncEngine;
@property (readonly, nonatomic) NSArray *accounts;

+ (id)log;
+ (id)accountsForAccountMetadataArray:(id)a0;
+ (id)dataclassesToWatch;

- (void).cxx_destruct;
- (void)disableKeepAlive;
- (void)removeAccount:(id)a0;
- (void)shutdown:(id /* block */)a0;
- (void)startup:(id /* block */)a0;
- (id)accountChangedWithType:(long long)a0 accountId:(id)a1;
- (id)initWithSyncEngine:(id)a0;
- (id)accountWithKey:(id)a0;
- (void)initialLoadAccounts:(id /* block */)a0;
- (BOOL)exchangeAccountIsTracked:(id)a0;
- (id)_addDelegateForOwningACAccount:(id)a0 delegateEmail:(id)a1 delegateFullname:(id)a2 readOnly:(BOOL)a3;
- (id)fetchMigrationDelegatesFromEXSAccount:(id)a0;
- (id)_fetchDelegatesFromACAccount:(id)a0;
- (id)addDelegateForMigration:(id)a0 parentIdentifier:(id)a1;
- (void)updateDelegateForACAccountPostMigration:(id)a0 delegate:(id)a1;
- (void)addDelegateForACAccount:(id)a0 delegateKey:(id)a1 delegateEmail:(id)a2 delegateFullname:(id)a3;
- (BOOL)_arePushPollOptionsEqualForACAccount:(id)a0 with:(id)a1;
- (void)_removeDelegateForACAccount:(id)a0 delegateKey:(id)a1;
- (id)pullRemovedAccountFromAccountsArray:(id)a0;
- (id)addDelegateForAccountId:(id)a0 delegateEmail:(id)a1 delegateFullname:(id)a2 readOnly:(BOOL)a3;
- (id)removeDelegateFromAccountId:(id)a0 delegateSourceID:(id)a1;
- (BOOL)evaluateOurNeedToRun;
- (id)launchdKeepAlivePath;
- (void)enableKeepAlive;

@end
