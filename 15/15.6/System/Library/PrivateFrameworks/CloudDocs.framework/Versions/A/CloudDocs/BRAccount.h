@class NSData, NSString;

@interface BRAccount : NSObject {
    NSString *_accountID;
    NSString *_personaID;
}

@property (copy, nonatomic) NSData *perAppAccountIdentifier;

+ (char)_refreshCurrentLoggedInAccountForcingRefresh:(char)a0 personaID:(id)a1 error:(id *)a2;
+ (id)currentCachedLoggedInAccountWithError:(id *)a0;
+ (id)currentLoggedInAccountWithError:(id *)a0;
+ (char)refreshCurrentLoggedInAccount;
+ (char)refreshCurrentLoggedInAccountWithError:(id *)a0;
+ (void)startAccountTokenChangeObserverIfNeeded;

- (id)init;
- (void).cxx_destruct;
- (id)initWithAccountID:(id)a0;
- (id)containerWithPendingChanges;
- (void)evictOldDocumentsWithHandler:(id /* block */)a0;
- (char)getEvictableSpace:(id *)a0 error:(id *)a1;
- (char)hasOptimizeStorageWithError:(id *)a0;
- (char)iCloudDesktopSettingsChangedWithAttributes:(id)a0 error:(id *)a1;
- (char)setOptimizeStorageEnabled:(char)a0 error:(id *)a1;

@end
