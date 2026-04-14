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

- (void)addDeveloperIdentityProvider:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchDeveloperIdentityProvidersWithCompletionHandler:(id /* block */)a0;
- (void)updateDeveloperSettings:(id)a0 completionHandler:(id /* block */)a1;
- (void)updateExistingDeveloperIdentityProvider:(id)a0 completionHandler:(id /* block */)a1;
- (id)_identityProviderFetchRequest;
- (id)_developerIdentityProviderInContext:(id)a0;
- (void)removeDeveloperIdentityProviderWithUniqueID:(id)a0 completionHandler:(id /* block */)a1;
- (id)init;
- (id)settingsPropertiesURL;
- (void)migrateSettingsPropertyFileIfNecessary;
- (void)_noteServiceDidChange;
- (void)fetchDeveloperSettingsWithCompletionHandler:(id /* block */)a0;
- (id)legacySettingsPropertiesPath;
- (void)_noteSettingsDidChange;
- (void)_noteProvidersDidChange;
- (void)_performIdentityProviderBlock:(id /* block */)a0;
- (id)_nullableObjectOrNSNull:(id)a0;
- (void).cxx_destruct;

@end
