@class SUSharedPrefs, SUOSULoginCredentialCacheInfo, SUOSUInstallTonightManager, SUOSUMobileSoftwareUpdateController, SUOSUAuthenticationManager;

@interface SUOSULoginCredentialPolicyManager : NSObject

@property unsigned long long currentLoginCredentialPolicyMode;
@property (retain) SUOSUMobileSoftwareUpdateController *msuController;
@property (retain) SUOSUInstallTonightManager *installTonightManager;
@property (retain) SUOSUAuthenticationManager *authenticationManager;
@property (retain) SUSharedPrefs *sharedPrefs;
@property (retain) SUOSULoginCredentialCacheInfo *cachedInfo;
@property (readonly) unsigned long long cachedMode;
@property double defaultRequiredInterval;
@property double staleUpdateInterval;
@property double staleUpdateRequiredInterval;
@property double nonAutoInstallOpportunisticInterval;

- (void).cxx_destruct;
- (BOOL)_allowedToRequireCredentialsForProductKey:(id)a0 offerPeriod:(double)a1 willAutoInstall:(BOOL)a2;
- (void)_isUpdateDownloadedAndPreparedWithCompletion:(id /* block */)a0;
- (unsigned long long)_modeFromCachedInfo:(id)a0;
- (double)_offerPeriodForProductKey:(id)a0;
- (BOOL)_willAutoInstallDescriptor:(id)a0 withProductKey:(id)a1;
- (void)getCurrentLoginCredentialHarvestingModeWithCompletion:(id /* block */)a0;
- (id)initWithSharedPrefs:(id)a0 msuController:(id)a1 installTonightManager:(id)a2 authenticationManager:(id)a3;
- (void)refreshCachedMode;

@end
