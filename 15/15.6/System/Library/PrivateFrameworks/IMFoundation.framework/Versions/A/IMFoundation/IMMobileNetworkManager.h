@class NSNumber, NSMutableSet, NSRecursiveLock;

@interface IMMobileNetworkManager : NSObject

@property (retain, nonatomic) NSRecursiveLock *lock;
@property (retain, nonatomic) NSMutableSet *cellularAutoAssociationTokens;
@property (nonatomic) char registered;
@property (nonatomic) char shouldBringUpDataContext;
@property (nonatomic) char isDataPossible;
@property (nonatomic) char isDataContextActive;
@property (nonatomic) char isDataIndicatorNone;
@property (nonatomic) char isDataContextUsable;
@property (readonly, nonatomic) char isAirplaneModeEnabled;
@property (readonly, nonatomic) char isWiFiEnabled;
@property (readonly, nonatomic) char isWiFiUsable;
@property (readonly, nonatomic) char isWiFiAssociated;
@property (readonly, nonatomic) char isWiFiCaptive;
@property (readonly, nonatomic) char isHostingWiFiHotSpot;
@property (readonly, nonatomic) char autoAssociateWiFi;
@property (readonly, nonatomic) char autoAssociateCellular;
@property (readonly, nonatomic) char disableFastDormancy;
@property (readonly, nonatomic) char willTryToSearchForWiFiNetwork;
@property (readonly, nonatomic) char willTryToAutoAssociateWiFiNetwork;
@property (readonly, retain, nonatomic) NSNumber *wiFiSignalStrength;
@property (readonly, retain, nonatomic) NSNumber *wiFiScaledRSSI;
@property (readonly, retain, nonatomic) NSNumber *wiFiScaledRate;
@property (readonly, nonatomic) char dataConnectionExists;
@property (readonly, nonatomic) char has2GDataConnection;
@property (readonly, nonatomic) char hasLTEDataConnection;
@property (readonly, nonatomic) char isDataSwitchEnabled;
@property (readonly, nonatomic) char isDataConnectionActive;
@property (readonly, nonatomic) char inValidSIMState;
@property (readonly, nonatomic) char requiresSIMInserted;
@property (readonly, nonatomic) char isSIMLocked;
@property (readonly, nonatomic) char isSIMRemoved;

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)removeFastDormancyDisableToken:(id)a0;
- (void)addFastDormancyDisableToken:(id)a0;
- (void)addWiFiAutoAssociationClientToken:(id)a0;
- (void)removeWiFiAutoAssociationClientToken:(id)a0;
- (void)showNetworkOptions;
- (void)_adjustCellularAutoAssociation;
- (char)_isDataConnectionAvailable;
- (char)_legacy_inValidSIMState;
- (void)_lockedAdjustCellularAutoAssociation;
- (void)_makeDataConnectionAvailable:(char)a0;
- (id)_telephonyDataSIMStatus;
- (void)addCellularAutoAssociationClientToken:(id)a0;
- (void)removeCellularAutoAssociationClientToken:(id)a0;
- (void)setDataConnectionActive:(char)a0;
- (void)showSIMUnlock;

@end
