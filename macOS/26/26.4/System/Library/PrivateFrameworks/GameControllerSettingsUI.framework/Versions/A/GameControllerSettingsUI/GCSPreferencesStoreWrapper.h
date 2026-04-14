@class _TtC24GameControllerSettingsUI19GCSPreferencesStore, NSArray;

@interface GCSPreferencesStoreWrapper : NSObject

@property (nonatomic, readonly) _TtC24GameControllerSettingsUI19GCSPreferencesStore *preferencesStore;
@property (nonatomic, readonly) NSArray *allControllers;
@property (nonatomic, readonly) NSArray *controllers;
@property (nonatomic, readonly) NSArray *profiles;
@property (nonatomic, readonly) NSArray *games;
@property (nonatomic, readonly) NSArray *copilotFusedControllers;
@property (nonatomic, readonly) NSArray *unfusedFusableControllers;

- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)gameWithBundleIdentifier:(id)a0;
- (void)updateGameFrom:(id)a0 to:(id)a1 saveToDisk:(BOOL)a2;
- (void)addController:(id)a0 saveToDisk:(BOOL)a1;
- (void)addCopilotFusedController:(id)a0 saveToDisk:(BOOL)a1;
- (void)addGame:(id)a0 saveToDisk:(BOOL)a1;
- (void)addProfile:(id)a0 saveToDisk:(BOOL)a1;
- (id)controllerFor:(id)a0;
- (id)gameWithBundleIdentifier:(id)a0 controller:(id)a1;
- (void)removeController:(id)a0 saveToDisk:(BOOL)a1;
- (void)removeControllers:(id)a0 saveToDisk:(BOOL)a1;
- (void)removeGame:(id)a0 saveToDisk:(BOOL)a1;
- (void)removeProfile:(id)a0 saveToDisk:(BOOL)a1;
- (void)updateProfileFrom:(id)a0 to:(id)a1 saveToDisk:(BOOL)a2;

@end
