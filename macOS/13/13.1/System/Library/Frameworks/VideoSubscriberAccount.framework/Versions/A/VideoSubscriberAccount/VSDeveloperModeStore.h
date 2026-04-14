@class VSPersistentContainer, NSString, VSRemoteNotifier, NSObject;
@protocol OS_dispatch_queue;

@interface VSDeveloperModeStore : NSObject <VSRemoteNotifierDelegate, VSDeveloperServiceProtocol>

@property (retain, nonatomic) VSPersistentContainer *persistentContainer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *settingsQueue;
@property (retain, nonatomic) VSRemoteNotifier *serviceChangeRemoteNotifier;
@property (retain, nonatomic) VSRemoteNotifier *settingsChangeRemoteNotifier;
@property (retain, nonatomic) VSRemoteNotifier *providersChangeRemoteNotifier;
@property (retain, nonatomic) VSRemoteNotifier *accountStoreChangeRemoteNotifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)fetchDeveloperIdentityProvidersWithCompletionHandler:(id /* block */)a0;
- (void)addDeveloperIdentityProvider:(id)a0 completionHandler:(id /* block */)a1;
- (void)updateExistingDeveloperIdentityProvider:(id)a0 completionHandler:(id /* block */)a1;
- (void)removeDeveloperIdentityProviderWithUniqueID:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchDeveloperSettingsWithCompletionHandler:(id /* block */)a0;
- (void)updateDeveloperSettings:(id)a0 completionHandler:(id /* block */)a1;
- (id)settingsPropertiesURL;
- (id)legacySettingsPropertiesPath;
- (void)migrateSettingsPropertyFileIfNecessary;
- (id)_identityProviderFetchRequest;
- (id)_developerIdentityProviderInContext:(id)a0;
- (void)_performIdentityProviderBlock:(id /* block */)a0;
- (void)_noteServiceDidChange;
- (void)_noteSettingsDidChange;
- (void)_noteProvidersDidChange;
- (id)_nullableObjectOrNSNull:(id)a0;

@end
