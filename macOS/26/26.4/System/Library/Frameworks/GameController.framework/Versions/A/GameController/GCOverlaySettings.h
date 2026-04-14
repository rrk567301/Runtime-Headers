@class GCOverlayProfile, NSArray, NSString, _TtC14GameController22GCOverlaySettingsStore, GCController;

@interface GCOverlaySettings : NSObject {
    _TtC14GameController22GCOverlaySettingsStore *_settingsStore;
}

@property (retain, nonatomic) NSArray *availableProfiles;
@property (retain, nonatomic) GCController *controller;
@property (retain, nonatomic) NSString *gameBundleIdentifier;
@property (retain, nonatomic) GCOverlayProfile *selectedProfile;

- (void)refresh;
- (void)_refresh;
- (void).cxx_destruct;
- (id)init;
- (void)_onqueue_refresh;
- (id)gameForActiveController;

@end
