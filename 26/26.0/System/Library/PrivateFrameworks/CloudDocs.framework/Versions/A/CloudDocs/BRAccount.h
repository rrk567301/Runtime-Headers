@class NSData, NSString;

@interface BRAccount : NSObject {
    NSString *_accountID;
    NSString *_personaID;
}

@property (copy, nonatomic) NSData *perAppAccountIdentifier;

+ (id)currentLoggedInAccountWithError:(id *)a0;
+ (void)startAccountTokenChangeObserverIfNeeded;
+ (BOOL)refreshCurrentLoggedInAccount;
+ (BOOL)refreshCurrentLoggedInAccountWithError:(id *)a0;
+ (id)currentCachedLoggedInAccountWithError:(id *)a0;
+ (BOOL)_refreshCurrentLoggedInAccountForcingRefresh:(BOOL)a0 personaID:(id)a1 error:(id *)a2;

- (void)evictOldDocumentsWithHandler:(id /* block */)a0;
- (BOOL)getEvictableSpace:(id *)a0 error:(id *)a1;
- (BOOL)hasOptimizeStorageWithError:(id *)a0;
- (id)init;
- (BOOL)setOptimizeStorageEnabled:(BOOL)a0 error:(id *)a1;
- (id)initWithAccountID:(id)a0;
- (id)containerWithPendingChanges;
- (BOOL)iCloudDesktopSettingsChangedWithAttributes:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
