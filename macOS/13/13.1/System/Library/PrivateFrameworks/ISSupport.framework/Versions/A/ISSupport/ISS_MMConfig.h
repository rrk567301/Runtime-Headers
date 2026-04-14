@interface ISS_MMConfig : NSObject

+ (id)sharedInstance;
+ (id)_configDict;
+ (void)_setConfigDict:(id)a0;
+ (void)reinitialize;
+ (BOOL)_shouldPerformAOSUpdate;
+ (void)_doPerformAOSUpdate;

- (id)_configurationURL;
- (void)_setApplicationID:(id)a0;
- (id)_secureIDiskURL;
- (id)_iDiskURL;
- (void)_fetchConfigInfo;
- (id)_configValueForKey:(id)a0;
- (id)_cachedConfigValueForKey:(id)a0;
- (id)_reportingURL;
- (id)_indexingURL;
- (id)_mobilePublishConfigURL;
- (id)_commentsURL;
- (int)_commentsBatchSize;
- (int)_indexingBatchSize;
- (unsigned int)_readTimeOutSeconds;
- (unsigned int)_defaultReadTimeOutSeconds;
- (id)_realmSupportFlag;
- (id)_accountInfoURL;
- (id)_accountInfoURL2;
- (id)_cachedIDiskURL;
- (id)_cachedSecureIDiskURL;
- (id)_cachedReportingURL;
- (id)_cachedIndexingURL;
- (id)_cachedMobilePublishConfigURL;
- (id)_cachedCommentsURL;
- (id)_cachedConfigurationURL;
- (id)_cachedAccountInfoURL;
- (id)_cachedAccountInfoURL2;
- (id)_aosResourcesURL;
- (int)_aosResourcesVersion;
- (BOOL)_aosShouldSuppressDialog;
- (int)_resourceBundleVersion;
- (void)_setPrefsValue:(id)a0 forKey:(id)a1 withIdentifier:(id)a2;
- (id)_prefsValueForKey:(id)a0 withIdentifier:(id)a1;

@end
