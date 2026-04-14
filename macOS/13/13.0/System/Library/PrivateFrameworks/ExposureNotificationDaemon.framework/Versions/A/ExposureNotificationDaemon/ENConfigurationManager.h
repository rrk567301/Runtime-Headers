@class ENCloudServerChannel, NSMutableDictionary, ENConfigurationStore, ENActiveEntity, ENXPCTimer, NSObject, ENRegionMonitor;
@protocol OS_dispatch_queue, ENConfigurationManagerDelegate;

@interface ENConfigurationManager : NSObject

@property (nonatomic) BOOL mobileCountryCodeOverriden;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (retain, nonatomic) ENXPCTimer *serverConfigurationFetchTimer;
@property (retain, nonatomic) ENXPCTimer *gracePeriodConfigurationFetchTimer;
@property (retain, nonatomic) ENConfigurationStore *configurationStore;
@property (retain, nonatomic) ENCloudServerChannel *cloudServerChannel;
@property (retain, nonatomic) NSMutableDictionary *regionRampModeOverride;
@property (nonatomic) BOOL prefTestHeaderEnabled;
@property (nonatomic) BOOL prefRampTrialPeriodProfile;
@property (weak, nonatomic) NSObject<ENConfigurationManagerDelegate> *delegate;
@property (copy, nonatomic) ENActiveEntity *activeEntity;
@property (retain, nonatomic) ENRegionMonitor *regionMonitor;

+ (BOOL)verifyAppleServerResponse:(id)a0 signatureHeader:(id)a1;
+ (id)iCloudServerEndpoint;
+ (void)_printServerConfiguration:(id)a0;
+ (BOOL)isRampModeEnabledFromServerResponse:(id)a0;
+ (BOOL)serverResponse:(id)a0 isOnRampMode:(unsigned long long)a1;
+ (unsigned long long)rampModeFromServerResponse:(id)a0;
+ (double)randomSelectPercentagePerDayFromServerResponse:(id)a0;
+ (id)staticRegionForBundleID:(id)a0;

- (void)dealloc;
- (void)_activate;
- (void).cxx_destruct;
- (void)activate;
- (void)resetConfigurationManager;
- (void)prefsChanged;
- (id)initWithDelegate:(id)a0 activeEntity:(id)a1;
- (void)_reportErrorMetricForHTTPStatus:(long long)a0;
- (void)serverFetchRegionConfiguration:(id)a0 userInitiated:(BOOL)a1 completion:(id /* block */)a2;
- (void)_serverFetchRegionConfiguration:(id)a0 userInitiated:(BOOL)a1 completion:(id /* block */)a2;
- (BOOL)updateRampModeForRegion:(id)a0 rampMode:(unsigned long long)a1;
- (BOOL)regionSupportsFeatures:(id)a0 featureFlags:(unsigned int)a1;
- (unsigned long long)readCachedRampModeForRegion:(id)a0;
- (void)_scheduleRegionConfigurationRefresh;
- (void)resetConfigurationCache;
- (BOOL)isInGracePeriodTransition;
- (void)setupGracePeriodFetchTimerWithDelay:(double)a0;
- (void)stopGracePeriodTimer;
- (void)_processServerConfiguration:(id)a0 forceUpdate:(BOOL)a1;
- (void)refreshServerConfigurationsUponProfileChange;
- (void)fetchServerConfigurationsForRegion:(id)a0 userInitiated:(BOOL)a1 withCompletion:(id /* block */)a2;
- (void)_fetchServerConfigurationsForRegion:(id)a0 userInitiated:(BOOL)a1 completion:(id /* block */)a2;
- (void)_saveAndRemoveStaleConfigurations:(id)a0 region:(id)a1 error:(id)a2;
- (void)overrideRampModeForRegion:(id)a0 rampMode:(unsigned long long)a1;
- (void)updateRegionMonitorModeForCurrentRegion;
- (void)regionMonitor:(id)a0 regionDidChange:(id)a1;
- (void)regionMonitor:(id)a0 authorizationStateDidChange:(unsigned long long)a1;

@end
