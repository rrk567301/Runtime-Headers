@class DNDSCoreDataBackingStore;
@protocol DNDSAppSpecificSettingsManagerDelegate;

@interface DNDSAppSpecificSettingsManager : NSObject

@property (readonly, nonatomic) DNDSCoreDataBackingStore *store;
@property (weak, nonatomic) id<DNDSAppSpecificSettingsManagerDelegate> delegate;

- (id)modeSpecificSettingsOfType:(Class)a0 modeIdentifier:(id)a1 error:(id *)a2;
- (void)_allPerModeSettingsMOsOfType:(Class)a0 processBlock:(id /* block */)a1;
- (id)removeModeSpecificSettingsForModeIdentifiersNotInModeIdentifiers:(id)a0 error:(id *)a1;
- (id)appSpecificSettingsOfType:(Class)a0 modeIdentifier:(id)a1 applicationIdentifier:(id)a2 error:(id *)a3;
- (id)appConfigurationTargetContentIdentifierPrefixForApplicationIdentifier:(id)a0 modeIdentifier:(id)a1 error:(id *)a2;
- (id)appConfigurationPredicateForApplicationIdentifier:(id)a0 modeIdentifier:(id)a1 error:(id *)a2;
- (id)appSpecificSettingsOfType:(Class)a0 modeIdentifier:(id)a1 error:(id *)a2;
- (BOOL)removeModeSpecificSettingsForModeIdentifier:(id)a0 error:(id *)a1;
- (id)initWithIDSSyncEngine:(id)a0 backingStoreURL:(id)a1;
- (id)init;
- (id)appActionWithIdentifier:(id)a0 forApplicationIdentifier:(id)a1 modeIdentifier:(id)a2 error:(id *)a3;
- (void)_modesToSave:(id)a0 modesToDelete:(id)a1;
- (id)systemActionWithIdentifier:(id)a0 modeIdentifier:(id)a1 error:(id *)a2;
- (BOOL)setAppSpecificSettings:(id)a0 identifier:(id)a1 type:(Class)a2 applicationIdentifier:(id)a3 modeIdentifier:(id)a4 error:(id *)a5;
- (id)_initWithBackingStoreURL:(id)a0;
- (id)modeSpecificSettingsOfType:(Class)a0 identifier:(id)a1 modeIdentifier:(id)a2 error:(id *)a3;
- (id)appSpecificSettingsOfType:(Class)a0 identifier:(id)a1 modeIdentifier:(id)a2 applicationIdentifier:(id)a3 error:(id *)a4;
- (BOOL)setModeSpecificSettings:(id)a0 identifier:(id)a1 type:(Class)a2 modeIdentifier:(id)a3 error:(id *)a4;
- (id)_perModeSettingsMOsOfType:(Class)a0 modeIdentifier:(id)a1 processBlock:(id /* block */)a2;
- (id)appConfigurationPredicateForActionIdentifier:(id)a0 forApplicationIdentifier:(id)a1 modeIdentifier:(id)a2 error:(id *)a3;
- (id)_allAppSpecificSettingsOfType:(Class)a0;
- (id)_allModeSpecificSettingsOfType:(Class)a0;
- (id)appConfigurationTargetContentIdentifierPrefixForActionIdentifier:(id)a0 forApplicationIdentifier:(id)a1 modeIdentifier:(id)a2 error:(id *)a3;
- (void).cxx_destruct;
- (BOOL)removeAppSpecificSettingsForApplicationIdentifier:(id)a0 error:(id *)a1;

@end
