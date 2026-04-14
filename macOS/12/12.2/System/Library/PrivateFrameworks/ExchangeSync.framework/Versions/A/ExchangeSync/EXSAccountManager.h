@class EXSSyncEngine, NSArray, ACAccountStore, NSMutableArray;

@interface EXSAccountManager : NSObject {
    NSMutableArray *_accounts;
}

@property (retain, nonatomic) EXSSyncEngine *syncEngine;
@property (retain, nonatomic) ACAccountStore *accountStore;
@property (readonly, nonatomic) NSArray *accounts;

+ (id)log;
+ (id)accountsForAccountMetadataArray:(id)a0;
+ (id)dataclassesToWatch;

- (void).cxx_destruct;
- (void)shutdown;
- (void)disableKeepAlive;
- (void)accountStoreDidChange:(id)a0;
- (void)startup;
- (id)initWithSyncEngine:(id)a0;
- (BOOL)evaluateOurNeedToRun;
- (void)initialLoadAccounts;
- (void)enableKeepAlive;
- (id)launchdKeepAlivePath;
- (id)accountWithKey:(id)a0;

@end
