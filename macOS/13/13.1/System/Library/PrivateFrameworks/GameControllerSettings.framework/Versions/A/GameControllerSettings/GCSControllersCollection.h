@class NSArray;
@protocol GCUserDefaults, GCSSettingsStoreService;

@interface GCSControllersCollection : NSObject <GCSControllers> {
    id<GCUserDefaults> _userDefaults;
}

@property (retain, nonatomic) NSArray *values;
@property (readonly, weak, nonatomic) id<GCSSettingsStoreService> settingsStore;

- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (BOOL)storeVersionIsCompatible;
- (id)initWithSettingsStore:(id)a0 userDefaults:(id)a1;
- (id)controllerForPersistentIdentifier:(id)a0;
- (void)updateControllers:(id)a0;

@end
