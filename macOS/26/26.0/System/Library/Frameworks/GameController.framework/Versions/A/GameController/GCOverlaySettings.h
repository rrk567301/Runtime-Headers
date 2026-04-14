@class GCOverlayProfile, NSArray, NSString, _TtC14GameController22GCOverlaySettingsStore, GCController;

@interface GCOverlaySettings : NSObject {
    _TtC14GameController22GCOverlaySettingsStore *_settingsStore;
}

@property (retain, nonatomic) NSArray *availableProfiles;
@property (retain, nonatomic) GCController *controller;
@property (retain, nonatomic) NSString *gameBundleIdentifier;
@property (retain, nonatomic) GCOverlayProfile *selectedProfile;

- (void)_refresh;
- (void)refresh;
- (id)init;
- (void).cxx_destruct;
- (void)_onqueue_refresh;
- (id)gameForActiveController;

@end
