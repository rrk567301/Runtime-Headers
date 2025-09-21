@class GCSProfile, NSArray, GCSGame, _TtC14GameController22GCOverlaySettingsStore, GCSController;

@interface GameController.GCOverlaySettingsStore : NSObject {
    void /* unknown type, empty encoding */ preferencesVersion;
    void /* unknown type, empty encoding */ userDefaults;
    void /* function */ connectedControllerIdentifiers;
    void /* function */ allControllers;
    void /* function */ profiles;
    void /* function */ games;
}

@property (class, nonatomic, readonly) _TtC14GameController22GCOverlaySettingsStore *shared;

@property (nonatomic, copy) NSArray *connectedControllerIdentifiers;
@property (nonatomic, copy) NSArray *allControllers;
@property (nonatomic, retain) GCSController *curentController;
@property (nonatomic, copy) NSArray *profiles;
@property (nonatomic, copy) NSArray *games;
@property (nonatomic, readonly) GCSGame *defaultGame;
@property (nonatomic, readonly) GCSProfile *defaultProfile;

- (void)refresh;
- (id)init;
- (void).cxx_destruct;
- (id)getSettingsControllerFor:(id)a0;
- (void)setSelectedProfileTo:(id)a0 controller:(id)a1 game:(id)a2;
- (void)updateControllers;
- (void)updateCurrentController;
- (void)updateGameFrom:(id)a0 to:(id)a1 saveToDisk:(BOOL)a2;

@end
