@class NSMutableDictionary, NSDictionary, NSArray, ICApp, NSLock;

@interface ICAppRegistry : NSObject

@property (retain, nonatomic) NSLock *registryLock;
@property (retain, nonatomic) NSDictionary *appsDictionary;
@property (retain, nonatomic) NSDictionary *actions;
@property (retain, nonatomic) NSLock *observersLock;
@property (retain, nonatomic) NSMutableDictionary *observersByIdentifier;
@property (nonatomic) int urlTypesToken;
@property (readonly, nonatomic) NSArray *apps;
@property (readonly, nonatomic) ICApp *currentApp;
@property (readonly, nonatomic) NSArray *allActions;
@property (readonly, nonatomic) BOOL isFilled;

+ (id)sharedRegistry;
+ (id)legacyAppIdentifierForBundleIdentifier:(id)a0;
+ (id)bundleIdentifierForLegacyAppIdentifier:(id)a0;

- (void)dealloc;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)currentVersion;
- (id)cacheURL;
- (void)updateCache:(id /* block */)a0;
- (id)cacheDirectoryURL;
- (void)deleteCache;
- (id)appWithIdentifier:(id)a0;
- (id)appWithURLScheme:(id)a0;
- (id)appsWithIdentifiers:(id)a0;
- (void)removeInstallStatusObserver:(id)a0 forAppIdentifiers:(id)a1;
- (void)addInstallStatusObserver:(id)a0 forAppIdentifiers:(id)a1;
- (void)refreshInstalledApps;
- (id)appWithBundleIdentifier:(id)a0;
- (id)bundledURL;
- (id)_appsWithIdentifiers:(id)a0;
- (id)actionsWithIdentifiers:(id)a0;
- (void)updateRegistry;
- (void)fillRegistry;

@end
