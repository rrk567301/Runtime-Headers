@class ENCloudServerChannel, NSMutableDictionary, ENConfigurationStore, ENActiveEntity, ENXPCTimer, NSObject, ENRegionMonitor;
@protocol OS_dispatch_queue, ENConfigurationManagerDelegate;

@interface ENConfigurationManager : NSObject

@property (nonatomic) char mobileCountryCodeOverriden;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (retain, nonatomic) ENXPCTimer *serverConfigurationFetchTimer;
@property (retain, nonatomic) ENXPCTimer *gracePeriodConfigurationFetchTimer;
@property (retain, nonatomic) ENConfigurationStore *configurationStore;
@property (retain, nonatomic) ENCloudServerChannel *cloudServerChannel;
@property (retain, nonatomic) NSMutableDictionary *regionRampModeOverride;
@property (nonatomic) char prefTestHeaderEnabled;
@property (nonatomic) char prefRampTrialPeriodProfile;
@property (weak, nonatomic) NSObject<ENConfigurationManagerDelegate> *delegate;
@property (copy, nonatomic) ENActiveEntity *activeEntity;
@property (retain, nonatomic) ENRegionMonitor *regionMonitor;

+ (void)_printServerConfiguration:(id)a0;
+ (id)iCloudServerEndpoint;
+ (char)isRampModeEnabledFromServerResponse:(id)a0;
+ (unsigned long long)rampModeFromServerResponse:(id)a0;
+ (double)randomSelectPercentagePerDayFromServerResponse:(id)a0;
+ (char)serverResponse:(id)a0 isOnRampMode:(unsigned long long)a1;
+ (id)staticRegionForBundleID:(id)a0;
+ (char)verifyAppleServerResponse:(id)a0 signatureHeader:(id)a1;

- (void)dealloc;
- (void)_activate;
- (void).cxx_destruct;
- (void)activate;
- (void)_fetchServerConfigurationsForRegion:(id)a0 userInitiated:(char)a1 completion:(id /* block */)a2;
- (void)_processServerConfiguration:(id)a0 forceUpdate:(char)a1;
- (void)_reportErrorMetricForHTTPStatus:(long long)a0;
- (void)_saveAndRemoveStaleConfigurations:(id)a0 region:(id)a1 error:(id)a2;
- (void)_scheduleRegionConfigurationRefresh;
- (void)_serverFetchRegionConfiguration:(id)a0 userInitiated:(char)a1 completion:(id /* block */)a2;
- (void)fetchServerConfigurationsForRegion:(id)a0 userInitiated:(char)a1 withCompletion:(id /* block */)a2;
- (id)initWithDelegate:(id)a0 activeEntity:(id)a1;
- (char)isInGracePeriodTransition;
- (void)overrideRampModeForRegion:(id)a0 rampMode:(unsigned long long)a1;
- (void)prefsChanged;
- (unsigned long long)readCachedRampModeForRegion:(id)a0;
- (void)refreshServerConfigurationsUponProfileChange;
- (void)regionMonitor:(id)a0 authorizationStateDidChange:(unsigned long long)a1;
- (void)regionMonitor:(id)a0 regionDidChange:(id)a1;
- (char)regionSupportsFeatures:(id)a0 featureFlags:(unsigned int)a1;
- (void)resetConfigurationCache;
- (void)resetConfigurationManager;
- (void)serverFetchRegionConfiguration:(id)a0 userInitiated:(char)a1 completion:(id /* block */)a2;
- (void)setupGracePeriodFetchTimerWithDelay:(double)a0;
- (void)stopGracePeriodTimer;
- (char)updateRampModeForRegion:(id)a0 rampMode:(unsigned long long)a1;
- (void)updateRegionMonitorModeForCurrentRegion;

@end
