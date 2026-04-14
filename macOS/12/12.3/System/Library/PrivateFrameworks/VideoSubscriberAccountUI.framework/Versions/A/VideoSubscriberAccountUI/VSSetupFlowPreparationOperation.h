@class NSOperationQueue, VSOptional, VSDevice;

@interface VSSetupFlowPreparationOperation : VSAsyncOperation

@property (retain, nonatomic) VSOptional *result;
@property (retain, nonatomic) NSOperationQueue *privateQueue;
@property (retain, nonatomic) VSDevice *currentDevice;
@property (retain, nonatomic) VSOptional *storage;
@property (retain, nonatomic) VSOptional *preferences;

- (id)init;
- (void).cxx_destruct;
- (void)_finishWithError:(id)a0;
- (void)executionDidBegin;
- (void)_checkAvailability;
- (void)_finishWithFlow:(id)a0;
- (void)_checkForExistingAccounts;
- (void)_fetchProviderForAccount:(id)a0;
- (void)_fetchAllProvidersIfNeeded;
- (void)_fetchAllProviders;
- (void)_checkForSupportedAppsButton;
- (void)_loadProviderAppDescriptionWithFlow:(id)a0;
- (void)_getSTBProviderFromAllProviders:(id)a0 completionHandler:(id /* block */)a1;
- (void)_checkForSupportedAppsFromProvider:(id)a0;
- (void)prepareSTBSetupForAccount:(id)a0 forProvider:(id)a1;
- (void)_resolveBundleIDs:(id)a0 forFlow:(id)a1;
- (void)_getPersonalAppDescriptions:(id)a0 identityProvider:(id)a1 completion:(id /* block */)a2;
- (void)_checkForSupportedAppsButtonWithFlow:(id)a0;
- (void)_checkPreferences;
- (void)_checkForPersonalizedChannelsWithResponse:(id)a0 identityProvider:(id)a1;

@end
