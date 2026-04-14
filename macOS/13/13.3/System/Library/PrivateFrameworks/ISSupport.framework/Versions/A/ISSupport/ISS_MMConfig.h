@interface ISS_MMConfig : NSObject

+ (id)sharedInstance;
+ (id)_configDict;
+ (void)_setConfigDict:(id)a0;
+ (void)_doPerformAOSUpdate;
+ (BOOL)_shouldPerformAOSUpdate;
+ (void)reinitialize;

- (id)_configurationURL;
- (id)_cachedIDiskURL;
- (int)_aosResourcesVersion;
- (id)_cachedAccountInfoURL;
- (id)_cachedCommentsURL;
- (id)_cachedConfigurationURL;
- (id)_cachedMobilePublishConfigURL;
- (id)_cachedSecureIDiskURL;
- (int)_commentsBatchSize;
- (id)_configValueForKey:(id)a0;
- (id)_accountInfoURL;
- (id)_secureIDiskURL;
- (id)_accountInfoURL2;
- (id)_aosResourcesURL;
- (BOOL)_aosShouldSuppressDialog;
- (id)_cachedAccountInfoURL2;
- (id)_cachedConfigValueForKey:(id)a0;
- (id)_cachedIndexingURL;
- (id)_cachedReportingURL;
- (id)_commentsURL;
- (unsigned int)_defaultReadTimeOutSeconds;
- (void)_fetchConfigInfo;
- (id)_iDiskURL;
- (int)_indexingBatchSize;
- (id)_indexingURL;
- (id)_mobilePublishConfigURL;
- (id)_prefsValueForKey:(id)a0 withIdentifier:(id)a1;
- (unsigned int)_readTimeOutSeconds;
- (id)_realmSupportFlag;
- (id)_reportingURL;
- (int)_resourceBundleVersion;
- (void)_setApplicationID:(id)a0;
- (void)_setPrefsValue:(id)a0 forKey:(id)a1 withIdentifier:(id)a2;

@end
