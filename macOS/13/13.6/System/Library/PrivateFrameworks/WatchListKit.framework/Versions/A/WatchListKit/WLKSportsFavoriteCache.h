@class NSNumber, NSString, NSObject, NSUserDefaults;
@protocol OS_dispatch_queue;

@interface WLKSportsFavoriteCache : NSObject <WLKSportsFavoriteCaching> {
    NSObject<OS_dispatch_queue> *_queue;
    NSUserDefaults *_userDefaults;
    NSNumber *_DSID;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)invalidate;
- (id)_dsid;
- (void)getFavoritesWithCompletion:(id /* block */)a0;
- (void)addFavorites:(id)a0 completion:(id /* block */)a1;
- (void)removeFavorites:(id)a0 completion:(id /* block */)a1;
- (id)_cacheLastModifiedKeyForAccount;
- (id)_cacheKeyForAccount;
- (id)_dsidKey;
- (id)_syncSettingKeyForAccount;
- (id)_syncSettingLastModifiedKeyForAccount;
- (BOOL)hasCache;
- (void)hasFavoritesSyncEnabledKey:(id /* block */)a0;
- (id)initWithUserDefaults:(id)a0 DSID:(id)a1;
- (void)isOptedIn:(id /* block */)a0;
- (void)setCache:(id)a0 overrideLastModifiedDate:(BOOL)a1 completion:(id /* block */)a2;
- (void)setOptInStatus:(BOOL)a0 overrideLastModifiedDate:(BOOL)a1 completion:(id /* block */)a2;

@end
