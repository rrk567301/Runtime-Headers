@class NSXPCConnection, NSObject;
@protocol OS_dispatch_queue, WLKSportsFavoriteCaching;

@interface WLKSportsFavoriteManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    int _favoritesCacheSyncNotificationToken;
    int _sportsFavoriteSyncSettingChangedNotificationToken;
    NSXPCConnection *_connection;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _xpcLock;
}

@property (retain) id<WLKSportsFavoriteCaching> _cache;

+ (id)defaultManager;
+ (char)isOptOutAvailable;

- (void)dealloc;
- (void).cxx_destruct;
- (id)_connection;
- (id)caller;
- (id)initWithCache:(id)a0;
- (void)handleAccountDidChange:(id)a0;
- (void)getFavoritesWithCompletion:(id /* block */)a0;
- (void)deleteLegacyCache;
- (void)addFavorites:(id)a0 completion:(id /* block */)a1;
- (void)favoritesWithCompletion:(id /* block */)a0;
- (void)handleSyncSettingChangedNotification;
- (void)isOnboarded:(id /* block */)a0;
- (void)removeFavorites:(id)a0 completion:(id /* block */)a1;
- (void)setOptInStatus:(char)a0 completion:(id /* block */)a1;
- (void)_invalidationHandler;
- (void)getFavoritesIgnoringCache:(char)a0 completion:(id /* block */)a1;
- (void)_getFavoritesIgnoringCache:(char)a0 overrideLastModifiedDate:(char)a1 completion:(id /* block */)a2;
- (void)_perform:(id)a0 completion:(id /* block */)a1;
- (void)_performAction:(unsigned long long)a0 withIDs:(id)a1 caller:(id)a2 completion:(id /* block */)a3;
- (void)_performUserSettingsAction:(unsigned long long)a0 setFavoritesSyncEnabled:(char)a1 caller:(id)a2 completion:(id /* block */)a3;
- (void)_performUserSettingsOperation:(id)a0 completion:(id /* block */)a1;
- (void)handleRefreshCacheNotification;
- (void)watchlistd_performAction:(unsigned long long)a0 withIDs:(id)a1 caller:(id)a2 overrideLastModifiedDate:(char)a3 completion:(id /* block */)a4;
- (void)watchlistd_performUserSettingsAction:(unsigned long long)a0 setFavoritesSyncEnabled:(char)a1 caller:(id)a2 overrideLastModifiedDate:(char)a3 completion:(id /* block */)a4;

@end
