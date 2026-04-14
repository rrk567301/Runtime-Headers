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
@property (readonly, nonatomic) BOOL isSyncingAvailable;
@property (readonly, nonatomic) BOOL isSyncingEnabled;

+ (id)defaultManager;
+ (BOOL)isOptOutAvailable;

- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;
- (id)_connection;
- (void)_invalidationHandler;
- (void)sync;
- (id)initWithCache:(id)a0;
- (void)getFavoritesWithCompletion:(id /* block */)a0;
- (void)removeFavorites:(id)a0 completion:(id /* block */)a1;
- (void)addFavorites:(id)a0 completion:(id /* block */)a1;
- (void)setOptInStatus:(BOOL)a0 completion:(id /* block */)a1;
- (void)handleSyncSettingChangedNotification;
- (void)isOnboarded:(id /* block */)a0;
- (void)isOptedIn:(id /* block */)a0;
- (void)handleRefreshCacheNotification;
- (void)getFavoritesIgnoringCache:(BOOL)a0 completion:(id /* block */)a1;
- (BOOL)setSyncingEnabled:(BOOL)a0 error:(id *)a1;
- (void)_performAction:(unsigned long long)a0 withIDs:(id)a1 completion:(id /* block */)a2;
- (void)_perform:(id)a0 completion:(id /* block */)a1;
- (void)_performUserSettingsAction:(unsigned long long)a0 setFavoritesSyncEnabled:(BOOL)a1 completion:(id /* block */)a2;
- (void)_performUserSettingsOperation:(id)a0 completion:(id /* block */)a1;

@end
