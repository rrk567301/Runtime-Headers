@class NSArray, NSXPCConnection, NSDate, NSObject, NSLock;
@protocol OS_dispatch_queue;

@interface GPGameLibrary : NSObject <GamePolicy.GamePolicyPrivilegedAppClient> {
    NSXPCConnection *_daemonConnection;
    NSObject<OS_dispatch_queue> *_queue;
    NSDate *_creationDate;
    BOOL _libraryInitialized;
    BOOL _invalidated;
    NSLock *_lock;
    unsigned int _userIdentifier;
    NSArray *_gameLibrary;
    id /* block */ _gameLibraryChangedHandler;
}

+ (id)library;
+ (id)gameLibraryAppsFromGameLibraryGames:(id)a0;
+ (id)libraryForUserIdentifier:(unsigned int)a0;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)pong;
- (id)initWithUserIdentifier:(unsigned int)a0;
- (void)_onqueue_connectToXPCService;
- (id)appsWithBundleIdentifiers:(id)a0;
- (id)appsWithStoreIdentifiers:(id)a0;
- (void)fetchAppsWithBundleIdentifiers:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchAppsWithStoreIdentifiers:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchInstalledGamesWithCompletionHandler:(id /* block */)a0;
- (id)installedGames;
- (void)installedGamesDidChange:(id)a0;
- (void)refreshInstalledGamesLibrary;
- (void)registerInstalledGamesDidChangeHandler:(id /* block */)a0;

@end
