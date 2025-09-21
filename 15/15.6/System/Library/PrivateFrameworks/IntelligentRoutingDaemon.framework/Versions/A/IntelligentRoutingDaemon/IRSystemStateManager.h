@class IRAVOutputContextController, NSObject, IRTimer, IRNearbyDeviceContainerDO, IRDisplayMonitor, IRCMPDRFenceBridge, IRServiceStore, NSString, IRMiloLslPredictionDO, IRBiomeProvider, IRProximityProvider, IRMiLoProvider, IRSystemStateDO;
@protocol OS_dispatch_queue, IRPolicyManagerContextObserver;

@interface IRSystemStateManager : NSObject <IRBiomeProviderObserverProtocol, IRMiLoProviderObserverProtocol, IRProximityProviderObserverProtocol, IRDeallocSync, IRDisplayMonitorObserverProtocol, IRAVOutputContextControllerObserverProtocol>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) IRMiloLslPredictionDO *miloProviderLslPredictionResults;
@property (weak, nonatomic) id<IRPolicyManagerContextObserver> contextObserver;
@property (retain, nonatomic) IRNearbyDeviceContainerDO *nearbyDeviceContainer;
@property (retain, nonatomic) IRSystemStateDO *systemState;
@property (retain, nonatomic) IRBiomeProvider *biomeProvider;
@property (retain, nonatomic) IRMiLoProvider *miloProvider;
@property (retain, nonatomic) IRProximityProvider *proximityProvider;
@property (retain, nonatomic) IRServiceStore *serviceStore;
@property (retain, nonatomic) IRDisplayMonitor *displayMonitor;
@property (retain, nonatomic) IRAVOutputContextController *audioAVOutputContextController;
@property (retain, nonatomic) IRTimer *appInFocusWindowTimer;
@property (nonatomic) char isBiomeRegistered;
@property (retain, nonatomic) IRCMPDRFenceBridge *pdrFenceBridge;
@property (retain, nonatomic) IRTimer *pdrFenceTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (char)isObservedEventType:(long long)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)addEvent:(id)a0 forCandidate:(id)a1;
- (void)_cancelAppInFocusWindowTimer;
- (void)_checkAndStartPDRFenceLogicIfNeededWithEvent:(id)a0 andCandidate:(id)a1;
- (void)_checkAndStopPDRFenceLogicIfNeeded;
- (void)_checkAndUpdateLatestPickerChoiceDateIfNeededForEvent:(id)a0;
- (void)_didUpdateContextWithReason:(id)a0;
- (void)_initBiomeIfNeededUponAppInFocus;
- (id)_miloLslPredictionToDO:(id)a0;
- (void)_registerToMiLo:(char)a0;
- (void)_startAppInFocusWindowTimer;
- (void)_unregisterForBiomeEvents;
- (void)_unregisterFromMiLo;
- (char)_updateSystemStateWithAppInFocus:(id)a0 andOpenWindowIfApplicable:(char)a1 isScreenUnlockEvent:(char)a2;
- (char)_updateSystemStateWithAppInFocusWindowEnd;
- (char)_updateSystemStateWithDeviceWiFi:(id)a0;
- (char)_updateSystemStateWithDisplayOn:(char)a0;
- (char)_updateSystemStateWithIsContinuityDisplay:(char)a0;
- (char)_updateSystemStateWithLOIType:(int)a0 WithLOIIdentifier:(id)a1;
- (char)_updateSystemStateWithOutputDevice:(id)a0;
- (char)_updateSystemStateWithPredictedOutputDevice:(id)a0;
- (void)context:(id)a0 didUpdateOutputDevice:(id)a1;
- (void)context:(id)a0 didUpdatePredicatedOutputDevice:(id)a1;
- (void)deallocSync;
- (void)deleteLegacyServiceIdentifier;
- (void)didSpotOnLocationCompleteWithError:(id)a0;
- (void)endAppInFocusWindow;
- (id)initWithQueue:(id)a0 contextObserver:(id)a1 biomeProvider:(id)a2 miloProvider:(id)a3 proximityProvider:(id)a4 serviceStore:(id)a5 displayMonitor:(id)a6 audioAVOutputContextController:(id)a7 isLowLatencyMiLo:(char)a8;
- (void)logProviderState;
- (void)monitor:(id)a0 didUpdateAppInFocus:(id)a1 isScreenUnlockEvent:(char)a2;
- (void)monitor:(id)a0 didUpdateDisplayOn:(char)a1;
- (void)monitor:(id)a0 didUpdateIsContinuityDisplay:(char)a1;
- (void)onPrediction:(id)a0;
- (void)onUpdateLOIType:(int)a0 WithLOIIdentifier:(id)a1;
- (void)provider:(id)a0 didUpdateDeviceWiFi:(id)a1;
- (void)provider:(id)a0 didUpdateNearbyDevices:(id)a1;
- (void)restartLowLatencyMiLo:(char)a0;
- (char)startLowLatencyMiLo;

@end
