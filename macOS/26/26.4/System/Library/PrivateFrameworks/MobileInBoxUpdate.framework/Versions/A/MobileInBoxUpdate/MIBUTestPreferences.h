@interface MIBUTestPreferences : NSObject

+ (id)sharedInstance;

- (id)isActivated;
- (id)isOnLockScreen;
- (id)wifiSSID;
- (id)assetPath;
- (id)wifiPassword;
- (BOOL)inBoxUpdateMode;
- (BOOL)useAppleConnect;
- (BOOL)disableNarrativeAuthentication;
- (BOOL)enablePipelineMode;
- (BOOL)enterLPMAfterUpdateComplete;
- (id)factoryAssetPaths;
- (BOOL)factorySUCertExist;
- (id)factorySUCertPath;
- (id)factorySUKeyIsSEP;
- (id)factorySUKeyPath;
- (id)fakeBootManifestHash;
- (id)fakeTatsuPayloadPath;
- (id)getValueFromTestPreferencesForKey:(id)a0;
- (id)initialBuddySetupComplete;
- (id)iseTrustCertName;
- (id)iseTrustCertPaths;
- (id)nfcIdleTime;
- (id)pandoraKeyServerURL;
- (BOOL)skipCertDeletion;
- (BOOL)skipDaemonDisable;
- (BOOL)skipDeviceIdentityVerification;
- (BOOL)skipWiFiAssociation;
- (id)softwareUpdateAssetPath;
- (id)softwareUpdateBrainAssetPath;
- (id)softwareUpdateBrainXMLPath;
- (id)softwareUpdateDownloadPath;
- (id)softwareUpdateXMLPath;
- (unsigned long long)standbyIdleTimeout;
- (id)statusServerHostAddress;
- (id)statusServerPortNumber;
- (id)tcpUnicastAddress;
- (id)tcpUnicastPort;
- (id)useAppleConnectSsoToken;
- (BOOL)useLiveTatsu;
- (BOOL)usePandoraNonProdCerts;
- (id)usePlistForDeviceIKM;
- (BOOL)usePythonLoopbackServer;
- (id)useScriptForDeviceKey;
- (BOOL)useSrNmForDeviceKey;
- (BOOL)wakedFromLPMSU;

@end
