@class NSString, NSHashTable, NSObject;
@protocol OS_dispatch_queue;

@interface DNDModeConfigurationService : NSObject <DNDRemoteServiceConnectionEventListener> {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSHashTable *_listeners;
    BOOL _registeredForUpdates;
}

@property (readonly, copy, nonatomic) NSString *clientIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)serviceForClientIdentifier:(id)a0;

- (BOOL)clearAppActionWithIdentifier:(id)a0 forApplicationIdentifier:(id)a1 modeIdentifier:(id)a2 error:(id *)a3;
- (id)createEmptyModeConfigurationForMode:(id)a0 error:(id *)a1;
- (id)getAppConfigurationActionsForModeIdentifier:(id)a0 error:(id *)a1;
- (BOOL)removeModeConfigurationForModeIdentifier:(id)a0 deletePlaceholder:(BOOL)a1 error:(id *)a2;
- (BOOL)canRemoveModeConfigurationForModeIdentifier:(id)a0;
- (BOOL)syncModeConfigurationsReturningError:(id *)a0;
- (BOOL)setModeConfiguration:(id)a0 error:(id *)a1;
- (id)createModeConfigurationUsingTemplateForModeIdentifier:(id)a0 error:(id *)a1;
- (BOOL)clearSystemActionWithIdentifier:(id)a0 forModeIdentifier:(id)a1 error:(id *)a2;
- (BOOL)hasActivelyConfiguredModes:(BOOL *)a0 error:(id *)a1;
- (id)_createEmptyModeConfigurationForMode:(id)a0 withRequestDetails:(id)a1 error:(id *)a2;
- (id)modeConfigurationsReturningError:(id *)a0;
- (BOOL)setSyncPreferenceEnabled:(BOOL)a0 error:(id *)a1;
- (id)availableModesReturningError:(id *)a0;
- (id)allowedModesForContactHandle:(id)a0 error:(id *)a1;
- (id)getAppActionsForModeIdentifier:(id)a0 error:(id *)a1;
- (id)getAppConfigurationTargetContentIdentifierPrefixesForModeIdentifier:(id)a0 error:(id *)a1;
- (id)_createTriggersForFocusWithIdentifier:(id)a0;
- (id)createModeConfigurationUsingTemplateForModeSemanticType:(long long)a0 error:(id *)a1;
- (id)publishCurrentStatusKitAvailabilityReturningError:(id *)a0;
- (id)createDefaultWorkoutModeConfigurationWithError:(id *)a0;
- (BOOL)hasActivelyConfiguredModesReturningError:(id *)a0;
- (BOOL)getSyncAvailableReturningError:(id *)a0;
- (BOOL)resetAppConfigurationState;
- (BOOL)setAppConfigurationAction:(id)a0 forApplicationIdentifier:(id)a1 modeIdentifier:(id)a2 error:(id *)a3;
- (id)_initWithClientIdentifier:(id)a0;
- (BOOL)clearAppConfigurationActionWithIdentifier:(id)a0 forApplicationIdentifier:(id)a1 modeIdentifier:(id)a2 error:(id *)a3;
- (id)getSystemActionsForModeIdentifier:(id)a0 error:(id *)a1;
- (id)modeConfigurationForModeIdentifier:(id)a0 error:(id *)a1;
- (BOOL)getSyncEnabledReturningError:(id *)a0;
- (BOOL)clearSystemConfigurationActionWithIdentifier:(id)a0 modeIdentifier:(id)a1 error:(id *)a2;
- (void)remoteService:(id)a0 didReceiveAppConfigurationContextUpdateForModeIdentifier:(id)a1;
- (id)silencedModesForContactHandle:(id)a0 error:(id *)a1;
- (id)getAppConfigurationPredicateForActionIdentifier:(id)a0 forApplicationIdentifier:(id)a1 modeIdentifier:(id)a2 error:(id *)a3;
- (unsigned long long)_defaultConfigurationTypeForModeSemanticType:(long long)a0;
- (BOOL)removeModeConfigurationForModeIdentifier:(id)a0 error:(id *)a1;
- (BOOL)setSystemAction:(id)a0 forModeIdentifier:(id)a1 error:(id *)a2;
- (void)removeListener:(id)a0;
- (id)createDefaultSleepingModeConfigurationWithError:(id *)a0;
- (id)createDefaultDrivingModeConfigurationWithError:(id *)a0;
- (BOOL)setAppConfigurationPredicate:(id)a0 forActionIdentifier:(id)a1 forApplicationIdentifier:(id)a2 modeIdentifier:(id)a3 error:(id *)a4;
- (BOOL)setAppAction:(id)a0 forApplicationIdentifier:(id)a1 modeIdentifier:(id)a2 error:(id *)a3;
- (id)_createDefaultModeConfigurationForIdentifier:(id)a0 withRequestDetails:(id)a1 error:(id *)a2;
- (id)getSystemConfigurationActionsForModeIdentifier:(id)a0 error:(id *)a1;
- (BOOL)getSyncPreferenceEnabledReturningError:(id *)a0;
- (void)remoteService:(id)a0 didReceiveUpdatedAvailableModeIdentifiers:(id)a1;
- (id)getAppConfigurationTargetContentIdentifierPrefixesForCurrentModeReturningError:(id *)a0;
- (id)_setModeConfigurationDefaultsForModeConfiguration:(id)a0 withIdentifier:(id)a1;
- (BOOL)isLocalUserAvailableForContactInActiveMode:(id)a0 error:(id *)a1;
- (BOOL)setAppConfigurationTargetContentIdentifierPrefix:(id)a0 forActionIdentifier:(id)a1 forApplicationIdentifier:(id)a2 modeIdentifier:(id)a3 error:(id *)a4;
- (void).cxx_destruct;
- (BOOL)_queue_registerForUpdatesIfRequired;
- (id)allModesReturningError:(id *)a0;
- (BOOL)setSystemConfigurationAction:(id)a0 modeIdentifier:(id)a1 error:(id *)a2;
- (void)addListener:(id)a0 withCompletionHandler:(id /* block */)a1;
- (id)_createModeSpecificConfigurationForModeSemanticType:(long long)a0 withIdentifier:(id)a1;

@end
