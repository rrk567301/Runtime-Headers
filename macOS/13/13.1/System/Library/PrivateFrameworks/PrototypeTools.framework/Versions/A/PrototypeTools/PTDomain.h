@class PTSettings, NSString, PTDomainInfo, NSXPCConnection, NSMutableDictionary, PTTestRecipe;

@interface PTDomain : NSObject <PTDomainClient> {
    NSXPCConnection *_serverConnection;
    PTDomainInfo *_domainInfo;
    NSString *_domainID;
    PTSettings *_rootSettings;
    NSMutableDictionary *_testRecipesByIdentifier;
    PTTestRecipe *_activeTestRecipe;
    BOOL _registrationRequested;
    BOOL _registrationCompleted;
    BOOL _haveSentProxyDefinition;
    double _delayBeforeRegisteringAfterInterruption;
    BOOL _archiveIsApplied;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)domainName;
+ (id)_sharedInstance;
+ (id)rootSettings;
+ (void)registerTestRecipe:(id)a0;
+ (id)domainGroupName;
+ (Class)rootSettingsClass;

- (void)dealloc;
- (id)_init;
- (void).cxx_destruct;
- (void)updateSettingsFromArchive:(id)a0;
- (void)restoreDefaultSettings;
- (void)setArchiveValue:(id)a0 forKeyPath:(id)a1;
- (void)invokeOutletAtKeyPath:(id)a0;
- (void)sendActiveTestRecipeEvent:(long long)a0;
- (id)_domainInfo;
- (id)_domainID;
- (id)_rootSettings;
- (void)_registerTestRecipe:(id)a0;
- (void)_updateActiveTestRecipe;
- (void)_applyArchive:(id)a0;
- (void)_applyArchiveValue:(id)a0 forKeyPath:(id)a1;
- (void)_restoreDefaultSettings;
- (void)_disableObservationIfNecessary;
- (void)_updateServerConnectionStatusIfNecessary;
- (void)_sendProxyDefinitionIfNecessary;
- (void)_createConnection;
- (void)_tearDownConnection;
- (void)_handleConnectionInterrupted;
- (void)_handleConnectionInvalidated;
- (void)_registerWithServerIfNecessary;
- (void)_noteRegistrationCompleted;

@end
