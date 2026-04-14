@class NSData, NSString;

@interface BRAccount : NSObject {
    NSString *_accountID;
    NSString *_personaID;
}

@property (copy, nonatomic) NSData *perAppAccountIdentifier;

+ (id)currentCachedLoggedInAccountWithError:(id *)a0;
+ (BOOL)refreshCurrentLoggedInAccountWithError:(id *)a0;
+ (id)currentLoggedInAccountWithError:(id *)a0;
+ (BOOL)refreshCurrentLoggedInAccount;
+ (void)startAccountTokenChangeObserverIfNeeded;
+ (BOOL)_refreshCurrentLoggedInAccountForcingRefresh:(BOOL)a0 personaID:(id)a1 error:(id *)a2;

- (id)containerWithPendingChanges;
- (BOOL)iCloudDesktopSettingsChangedWithAttributes:(id)a0 error:(id *)a1;
- (BOOL)setOptimizeStorageEnabled:(BOOL)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)initWithAccountID:(id)a0;
- (BOOL)hasOptimizeStorageWithError:(id *)a0;
- (id)init;
- (BOOL)getEvictableSpace:(id *)a0 error:(id *)a1;
- (void)evictOldDocumentsWithHandler:(id /* block */)a0;

@end
