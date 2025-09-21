@class NSString, NSDictionary, NSURL, NSUUID, NSNumber;

@interface _WKWebsiteDataStoreConfiguration : NSObject <WKObject> {
    struct ObjectStorage<WebKit::WebsiteDataStoreConfiguration> { struct type { unsigned char __lx[544]; } data; } _configuration;
}

@property (readonly, nonatomic, getter=isPersistent) char persistent;
@property (copy, nonatomic) NSString *sourceApplicationBundleIdentifier;
@property (copy, nonatomic) NSString *sourceApplicationSecondaryIdentifier;
@property (copy, nonatomic, setter=setHTTPProxy:) NSURL *httpProxy;
@property (copy, nonatomic, setter=setHTTPSProxy:) NSURL *httpsProxy;
@property (nonatomic) char deviceManagementRestrictionsEnabled;
@property (nonatomic) char networkCacheSpeculativeValidationEnabled;
@property (nonatomic) char fastServerTrustEvaluationEnabled;
@property (nonatomic) unsigned long long perOriginStorageQuota;
@property (copy, nonatomic) NSNumber *originQuotaRatio;
@property (copy, nonatomic) NSNumber *totalQuotaRatio;
@property (copy, nonatomic) NSNumber *standardVolumeCapacity;
@property (copy, nonatomic) NSString *boundInterfaceIdentifier;
@property (nonatomic) char allowsCellularAccess;
@property (nonatomic) char legacyTLSEnabled;
@property (copy, nonatomic) NSDictionary *proxyConfiguration;
@property (copy, nonatomic) NSString *dataConnectionServiceType;
@property (nonatomic) char preventsSystemHTTPProxyAuthentication;
@property (nonatomic) char requiresSecureHTTPSProxyConnection;
@property (nonatomic) char shouldRunServiceWorkersOnMainThreadForTesting;
@property (nonatomic) unsigned long long overrideServiceWorkerRegistrationCountTestingValue;
@property (nonatomic) char resourceLoadStatisticsDebugModeEnabled;
@property (readonly, nonatomic) NSUUID *identifier;
@property (nonatomic, setter=_setShouldAcceptInsecureCertificatesForWebSockets:) char _shouldAcceptInsecureCertificatesForWebSockets;
@property (copy, nonatomic, setter=_setWebStorageDirectory:) NSURL *_webStorageDirectory;
@property (copy, nonatomic, setter=_setIndexedDBDatabaseDirectory:) NSURL *_indexedDBDatabaseDirectory;
@property (copy, nonatomic, setter=_setWebSQLDatabaseDirectory:) NSURL *_webSQLDatabaseDirectory;
@property (copy, nonatomic, setter=_setCookieStorageFile:) NSURL *_cookieStorageFile;
@property (copy, nonatomic, setter=_setResourceLoadStatisticsDirectory:) NSURL *_resourceLoadStatisticsDirectory;
@property (copy, nonatomic, setter=_setCacheStorageDirectory:) NSURL *_cacheStorageDirectory;
@property (copy, nonatomic, setter=_setServiceWorkerRegistrationDirectory:) NSURL *_serviceWorkerRegistrationDirectory;
@property (nonatomic) char serviceWorkerProcessTerminationDelayEnabled;
@property (copy, nonatomic) NSURL *networkCacheDirectory;
@property (copy, nonatomic) NSURL *deviceIdHashSaltsStorageDirectory;
@property (copy, nonatomic) NSURL *applicationCacheDirectory;
@property (copy, nonatomic) NSString *applicationCacheFlatFileSubdirectoryName;
@property (copy, nonatomic) NSURL *mediaCacheDirectory;
@property (copy, nonatomic) NSURL *mediaKeysStorageDirectory;
@property (nonatomic) unsigned long long testSpeedMultiplier;
@property (nonatomic) char suppressesConnectionTerminationOnSystemChange;
@property (nonatomic) char allowsServerPreconnect;
@property (copy, nonatomic, setter=setHSTSStorageDirectory:) NSURL *hstsStorageDirectory;
@property (nonatomic) char enableInAppBrowserPrivacyForTesting;
@property (nonatomic) char allowsHSTSWithUntrustedRootCertificate;
@property (copy, nonatomic, setter=setPCMMachServiceName:) NSString *pcmMachServiceName;
@property (copy, nonatomic, setter=setWebPushMachServiceName:) NSString *webPushMachServiceName;
@property (copy, nonatomic) NSURL *alternativeServicesStorageDirectory;
@property (copy, nonatomic) NSURL *standaloneApplicationURL;
@property (copy, nonatomic) NSURL *generalStorageDirectory;
@property (copy, nonatomic, setter=setWebPushPartitionString:) NSString *webPushPartitionString;
@property (nonatomic) long long unifiedOriginStorageLevel;
@property (copy, nonatomic) NSNumber *volumeCapacityOverride;
@property (nonatomic) char isDeclarativeWebPushEnabled;
@property (copy, nonatomic) NSNumber *defaultTrackingPreventionEnabledOverride;
@property (nonatomic) char allLoadsBlockedByDeviceManagementRestrictionsForTesting;
@property (readonly) struct Object { void /* function */ **x0; void *x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (id)initWithIdentifier:(id)a0;
- (id)initWithDirectory:(id)a0;
- (id)initNonPersistentConfiguration;

@end
