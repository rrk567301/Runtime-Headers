@class NSData, NSString;

@interface BRAccount : NSObject {
    NSString *_accountID;
    NSString *_personaID;
}

@property (copy, nonatomic) NSData *perAppAccountIdentifier;

+ (void)startAccountTokenChangeObserverIfNeeded;
+ (BOOL)_refreshCurrentLoggedInAccountForcingRefresh:(BOOL)a0 error:(id *)a1;
+ (BOOL)refreshCurrentLoggedInAccount;
+ (id)currentCachedLoggedInAccountWithError:(id *)a0;
+ (BOOL)refreshCurrentLoggedInAccountWithError:(id *)a0;
+ (id)currentLoggedInAccountWithError:(id *)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithAccountID:(id)a0;
- (id)containerWithPendingChanges;
- (BOOL)iCloudDesktopSettingsChangedWithAttributes:(id)a0 error:(id *)a1;
- (BOOL)hasOptimizeStorageWithError:(id *)a0;
- (BOOL)setOptimizeStorageEnabled:(BOOL)a0 error:(id *)a1;
- (BOOL)getEvictableSpace:(id *)a0 error:(id *)a1;
- (void)evictOldDocumentsWithHandler:(id /* block */)a0;

@end
