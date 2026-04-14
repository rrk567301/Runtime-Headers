@class GCSProfile, NSArray, NSDictionary, NSString, GCSGame;

@interface GameControllerSettingsUI.GCSPreferencesStore : NSObject {
    void /* unknown type, empty encoding */ preferencesVersion;
    void /* unknown type, empty encoding */ cloudSettings;
    void /* unknown type, empty encoding */ userDefaults;
    void /* unknown type, empty encoding */ _connectedControllerIdentifiers;
    void /* unknown type, empty encoding */ _allControllers;
    void /* unknown type, empty encoding */ _tombstones;
    void /* unknown type, empty encoding */ _profiles;
    void /* unknown type, empty encoding */ _mouseProfiles;
    void /* unknown type, empty encoding */ _games;
    void /* unknown type, empty encoding */ _copilotFusedControllers;
    void /* unknown type, empty encoding */ _profileUsageStats;
    void /* unknown type, empty encoding */ _systemButtonActionsEnabled;
    void /* unknown type, empty encoding */ _systemButtonLongPressAction;
    void /* unknown type, empty encoding */ _naturalThumbstickScrollDirection;
    void /* unknown type, empty encoding */ _thumbstickScrollingSpeed;
}

@property (nonatomic, copy) NSArray *connectedControllerIdentifiers;
@property (nonatomic, copy) NSArray *allControllers;
@property (nonatomic, copy) NSDictionary *tombstones;
@property (nonatomic, copy) NSArray *profiles;
@property (nonatomic, copy) NSArray *mouseProfiles;
@property (nonatomic, copy) NSArray *games;
@property (nonatomic, copy) NSArray *copilotFusedControllers;
@property (nonatomic, copy) NSDictionary *profileUsageStats;
@property (nonatomic) BOOL systemButtonActionsEnabled;
@property (nonatomic, copy) NSString *systemButtonLongPressAction;
@property (nonatomic) BOOL naturalThumbstickScrollDirection;
@property (nonatomic) double thumbstickScrollingSpeed;
@property (nonatomic, readonly) NSArray *controllers;
@property (nonatomic, readonly) NSArray *hiddenControllers;
@property (nonatomic, readonly) NSArray *fusedControllers;
@property (nonatomic, readonly) NSArray *unfusedFusableControllers;
@property (nonatomic, readonly) NSArray *fusableControllers;
@property (nonatomic, readonly) GCSGame *defaultGame;
@property (nonatomic, readonly) GCSProfile *defaultProfile;
@property (nonatomic, readonly) NSArray *activeProfiles;
@property (nonatomic, readonly) NSArray *inactiveProfiles;
@property (nonatomic, readonly) NSArray *sortedProfiles;

+ (id)keyPathsForValuesAffectingActiveProfiles;
+ (id)keyPathsForValuesAffectingControllers;
+ (id)keyPathsForValuesAffectingFusableControllers;
+ (id)keyPathsForValuesAffectingFusedControllers;
+ (id)keyPathsForValuesAffectingHiddenControllers;
+ (id)keyPathsForValuesAffectingInactiveProfiles;
+ (id)keyPathsForValuesAffectingSortedProfiles;
+ (id)keyPathsForValuesAffectingUnfusedFusableControllers;

- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)gameWithBundleIdentifier:(id)a0;
- (void)updateControllers;
- (void)updateGameFrom:(id)a0 to:(id)a1 saveToDisk:(BOOL)a2;
- (void)addController:(id)a0 saveToDisk:(BOOL)a1;
- (void)addCopilotFusedController:(id)a0 saveToDisk:(BOOL)a1;
- (void)addGame:(id)a0 saveToDisk:(BOOL)a1;
- (void)addMouseProfile:(id)a0 saveToDisk:(BOOL)a1;
- (void)addProfile:(id)a0 saveToDisk:(BOOL)a1;
- (void)calculateProfileUsageStats;
- (id)controllerConnectionFor:(id)a0;
- (id)controllerFor:(id)a0;
- (BOOL)controllerIsConnected:(id)a0;
- (BOOL)controllerIsFusedController:(id)a0;
- (id)copilotFusedControllerWithController:(id)a0;
- (id)copilotFusedControllerWithFusedController:(id)a0;
- (id)copilotFusedControllerWithPilotOrCopilotController:(id)a0;
- (BOOL)fusedControllerIsConnectedWithPilotOrCopilotController:(id)a0;
- (id)gameWithBundleIdentifier:(id)a0 controller:(id)a1;
- (id)mouseProfileWithBundleIdentifier:(id)a0;
- (void)removeController:(id)a0 saveToDisk:(BOOL)a1;
- (void)removeControllers:(id)a0 saveToDisk:(BOOL)a1;
- (void)removeGame:(id)a0 saveToDisk:(BOOL)a1;
- (void)removeMouseProfile:(id)a0 saveToDisk:(BOOL)a1;
- (void)removeProfile:(id)a0 saveToDisk:(BOOL)a1;
- (void)updateControllerFrom:(id)a0 to:(id)a1 saveToDisk:(BOOL)a2;
- (void)updateMouseProfileFrom:(id)a0 to:(id)a1 saveToDisk:(BOOL)a2;
- (void)updateProfileFrom:(id)a0 to:(id)a1 saveToDisk:(BOOL)a2;

@end
