@class AMSAccountIdentity, NSError, NSDictionary;

@interface AMSAccountCachedServerDataCore : NSObject {
    void /* unknown type, empty encoding */ observations;
    void /* unknown type, empty encoding */ dataAccessor;
}

@property (class, nonatomic, readonly) AMSAccountCachedServerDataCore *sharedInstance;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)accountAuthSyncForAccountID:(AMSAccountIdentity *)a0 completionHandler:(void (^)(NSError *))a1;
- (id)accountFlagsForAccountID:(id)a0;
- (id)boolForKey:(long long)a0 accountID:(id)a1 updateBlock:(id /* block */)a2;
- (id)cancelUpdateBlockFor:(id)a0;
- (id)intForKey:(long long)a0 accountID:(id)a1 updateBlock:(id /* block */)a2;
- (void)setAccountFlags:(NSDictionary *)a0 forAccountID:(AMSAccountIdentity *)a1 completionHandler:(void (^)(void))a2;
- (void)setAutoPlayTo:(char)a0 forAccountID:(AMSAccountIdentity *)a1 completionHandler:(void (^)(void))a2;
- (void)setPersonalizationTo:(char)a0 forAccountID:(AMSAccountIdentity *)a1 completionHandler:(void (^)(void))a2;
- (id)stringForKey:(long long)a0 accountID:(id)a1 updateBlock:(id /* block */)a2;

@end
