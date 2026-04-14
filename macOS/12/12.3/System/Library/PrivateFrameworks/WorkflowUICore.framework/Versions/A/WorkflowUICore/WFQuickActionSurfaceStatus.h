@class NSDictionary, NSHashTable, WFServicesStatusProvider, NSObject;
@protocol OS_dispatch_queue;

@interface WFQuickActionSurfaceStatus : NSObject <WFQuickActionSurfaceStatusObserver>

@property (class, readonly, nonatomic) WFQuickActionSurfaceStatus *sharedStatus;

@property (readonly, nonatomic) NSDictionary *providersBySurface;
@property (readonly, nonatomic) WFServicesStatusProvider *servicesProvider;
@property (readonly, nonatomic) NSHashTable *observers;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *maintenanceQueue;

+ (BOOL)availabilityOfSurface:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)quickActionSurfaceStatusDidChange;
- (void)addStatusObserver:(id)a0;
- (BOOL)visibilityOfWorkflow:(id)a0 inQuickActionSurface:(id)a1;
- (id)globalKeyboardShortcutForWorkflow:(id)a0;
- (BOOL)setGlobalKeyboardShortcut:(id)a0 forWorkflow:(id)a1;
- (void)quickActionsShortcutsDidChange;
- (BOOL)setVisibility:(BOOL)a0 ofWorkflow:(id)a1 inQuickActionSurface:(id)a2;
- (void)migratePreferencesCreatedPre80286216IfNeeded;
- (void)removeOrphanShortcuts;
- (void)removeStatusObserver:(id)a0;

@end
