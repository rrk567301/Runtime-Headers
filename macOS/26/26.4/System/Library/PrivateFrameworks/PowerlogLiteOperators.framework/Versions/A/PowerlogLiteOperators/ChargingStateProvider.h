@class NSHashTable, NSObject;
@protocol OS_dispatch_queue, ChargingStateProviderDelegate;

@interface ChargingStateProvider : NSObject {
    int _chargingIconographyStateNotifyToken;
    int _powerSourceNotifyToken;
    int _uisocChangeToken;
    int _chargeToFullNotifyToken;
    int _chargingStatusOverrideNotifyToken;
    NSObject<OS_dispatch_queue> *_queue;
    NSHashTable *_delegates;
}

@property (weak, nonatomic) id<ChargingStateProviderDelegate> delegate;
@property BOOL isLowPowerModeEnabled;
@property BOOL isExternallyConnected;
@property int uisocLevel;
@property BOOL isEoc;
@property BOOL isPaused;
@property BOOL isSlowCharger;
@property short chargingState;

+ (BOOL)isChargingStatusOverrideEngaged;
+ (id)chargingIconStateDictionary;
+ (BOOL)isChargingIconographySupported;

- (id)debugDescription;
- (void).cxx_destruct;
- (id)init;
- (void)lowPowerModeChanged;
- (void)dealloc;
- (BOOL)areBatteryGaugingAndMCLEnabledWithOverrideStateArray:(id)a0;
- (void)chargeLevelChanged;
- (void)chargingStateChanged;
- (void)computeStates;
- (short)getChargingState;
- (id)getMostApplicableState:(id)a0 isPaused:(BOOL)a1;
- (BOOL)isMCLEnabled;
- (short)overrideTypeWithOriginal:(short)a0;
- (void)powerSourceChanged;
- (void)refreshChargeLevel;
- (void)refreshChargingState;
- (void)refreshData;
- (void)refreshLowPowerMode;
- (void)refreshPowerSource;
- (void)stateCalculation;

@end
