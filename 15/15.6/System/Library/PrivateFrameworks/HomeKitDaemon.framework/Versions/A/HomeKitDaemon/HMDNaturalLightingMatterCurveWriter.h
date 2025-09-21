@class HMDLightProfile, HMDHAPAccessory, HMFTimer, NSString, HMDNaturalLightingCurve, NSObject, NSNumber, NSNotificationCenter;
@protocol OS_dispatch_queue, HMDLightProfileDataSource;

@interface HMDNaturalLightingMatterCurveWriter : HMFObject <HMFLogging, HMFTimerDelegate>

@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (weak) HMDHAPAccessory *accessory;
@property (readonly) id /* block */ timerFactory;
@property (weak) HMDLightProfile *lightProfile;
@property (retain) HMFTimer *periodicWriteTimer;
@property (copy) HMDNaturalLightingCurve *naturalLightingCurve;
@property (readonly) id<HMDLightProfileDataSource> dataSource;
@property (readonly) NSNotificationCenter *notificationCenter;
@property (readonly, getter=isDemoMode) char demoMode;
@property (readonly, getter=isTimerRunning) char timerRunning;
@property char naturalLightingAllowed;
@property (readonly) NSNumber *regularTransitionTime;
@property (copy) NSNumber *accessoryMinColorTemperature;
@property (copy) NSNumber *accessoryMaxColorTemperature;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)logIdentifier;
- (void)timerDidFire:(id)a0;
- (id)setNaturalLightingEnabled:(char)a0;
- (void)checkIfNaturalLightingAllowed;
- (void)configurePostNaturalLightingContext;
- (void)configurePreNaturalLightingContext;
- (void)configureWithLightProfile:(id)a0;
- (char)didAdjustNewColorTempBasedOnAccessoryColorTempRange:(id *)a0;
- (void)disableNaturalLightingCurveWithCompletion:(id /* block */)a0;
- (void)disableNaturalLightingWithReason:(id)a0 message:(id)a1;
- (void)enableNaturalLightingWithReason:(id)a0;
- (void)enableNaturalLightingWithReason:(id)a0 message:(id)a1;
- (void)enableOrUpdateNaturalLightingCurveWithColorMode:(id)a0 accessoryColorTemp:(id)a1 completion:(id /* block */)a2;
- (void)enableOrUpdateNaturalLightingCurveWithCompletion:(id /* block */)a0;
- (void)getDemoModeTransitionTime:(id *)a0 newColorTemp:(id *)a1 accessoryColorTemp:(id)a2 colorMode:(id)a3;
- (unsigned short)getShortTransitionTimeForAccessoryColorTemp:(id)a0 curveColorTemp:(id)a1;
- (void)getTransitionTime:(id *)a0 newColorTemp:(id *)a1 accessoryColorTemp:(id)a2 colorMode:(id)a3;
- (void)handleAccessoryConnected:(id)a0;
- (void)handleAccessoryFirmwareVersionChangedNotification:(id)a0;
- (void)handleColorControlAttributeReport:(id)a0;
- (void)handleColorTemperatureAttributes:(id)a0;
- (void)handleHomeNaturalLightingContextUpdated:(id)a0;
- (void)handleMobileAssetsUpdatedNotification:(id)a0;
- (void)handlePrimaryResidentUpdateNotification:(id)a0;
- (void)handleSetNaturalLightingEnabledMessage:(id)a0 lightProfile:(id)a1;
- (id)initWithWorkQueue:(id)a0 accessory:(id)a1;
- (id)initWithWorkQueue:(id)a0 accessory:(id)a1 dataSource:(id)a2 notificationCenter:(id)a3 timerFactory:(id /* block */)a4;
- (char)isAccessoryColorTemp:(id)a0 closeToCurveColorTemp:(id)a1;
- (id)isNaturalLightingAllowedBasedOnAllowList;
- (id)isNaturalLightingAllowedBasedOnSpecVersion;
- (void)setNaturalLightingEnabled:(char)a0 completion:(id /* block */)a1;
- (void)setStartUpColorTemperature;
- (char)shouldAcceptSpecificationVersion:(id)a0;
- (void)startPeriodicWriteTimerWithInterval:(id)a0;
- (void)stopPeriodicWriteTimer;
- (void)updateNaturalLightingEnabledFromAttributes;
- (void)updateSettingsIfNaturalLightingSupportedByAccessory;

@end
