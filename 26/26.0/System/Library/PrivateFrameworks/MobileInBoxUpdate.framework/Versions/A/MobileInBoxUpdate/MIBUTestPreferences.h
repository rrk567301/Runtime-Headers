@interface MIBUTestPreferences : NSObject

+ (id)sharedInstance;

- (id)isOnLockScreen;
- (id)isActivated;
- (id)wifiSSID;
- (id)assetPath;
- (id)wifiPassword;
- (BOOL)inBoxUpdateMode;
- (BOOL)useAppleConnect;
- (BOOL)disableNarrativeAuthentication;
- (BOOL)enablePipelineMode;
- (BOOL)enterLPMAfterUpdateComplete;
- (BOOL)factorySUCertExist;
- (id)factorySUCertPath;
- (id)factorySUKeyIsSEP;
- (id)factorySUKeyPath;
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
- (id)softwareUpdateXMLPath;
- (unsigned long long)standbyIdleTimeout;
- (id)statusServerHostAddress;
- (id)statusServerPortNumber;
- (id)tcpUnicastAddress;
- (id)tcpUnicastPort;
- (BOOL)useLiveTatsu;
- (BOOL)usePandoraNonProdCerts;
- (id)usePlistForDeviceIKM;
- (BOOL)usePythonLoopbackServer;
- (id)useScriptForDeviceKey;
- (BOOL)useSrNmForDeviceKey;

@end
