@class NSArray;
@protocol GCUserDefaults, GCSSettingsStoreService;

@interface GCSControllersCollection : NSObject <GCSControllers> {
    id<GCUserDefaults> _userDefaults;
}

@property (retain, nonatomic) NSArray *values;
@property (readonly, weak, nonatomic) id<GCSSettingsStoreService> settingsStore;

- (void)updateControllers:(id)a0;
- (BOOL)storeVersionIsCompatible;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithSettingsStore:(id)a0 userDefaults:(id)a1;
- (void).cxx_destruct;
- (id)controllerForPersistentIdentifier:(id)a0;
- (void)dealloc;

@end
