@class NSArray, GCSGame;
@protocol GCUserDefaults, GCSSettingsStoreService;

@interface GCSGamesCollection : NSObject <GCSGames> {
    id<GCUserDefaults> _userDefaults;
    GCSGame *_defaultGame;
}

@property (retain, nonatomic) NSArray *values;
@property (readonly, weak, nonatomic) id<GCSSettingsStoreService> settingsStore;

- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)gameWithBundleIdentifier:(id)a0;
- (id)initWithSettingsStore:(id)a0 userDefaults:(id)a1;
- (char)storeVersionIsCompatible;
- (void)updateGames:(id)a0;

@end
