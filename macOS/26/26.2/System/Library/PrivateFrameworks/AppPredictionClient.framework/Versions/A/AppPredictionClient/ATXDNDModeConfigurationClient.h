@class NSString, DNDModeConfigurationService, DNDGlobalConfigurationService, NSHashTable, NSObject, NSDictionary;
@protocol OS_dispatch_queue, DNDModeConfigurationServiceListener;

@interface ATXDNDModeConfigurationClient : NSObject <ATXDNDModeConfigurationClientListenerDelegate> {
    DNDModeConfigurationService *_dndConfigurationService;
    DNDGlobalConfigurationService *_dndGlobalConfigurationService;
    id<DNDModeConfigurationServiceListener> _updateListener;
    NSHashTable *_observers;
    NSObject<OS_dispatch_queue> *_observerQueue;
    BOOL _isCacheValid;
    NSDictionary *_cachedModeConfig;
    NSDictionary *_cachedModesByModeIdentifiers;
    NSDictionary *_cachedModesBySemanticType;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)dndSemanticTypeToString:(long long)a0;

- (id)iOSAppDenyListForMode:(long long)a0;
- (unsigned long long)atxModeForDNDSemanticType:(long long)a0;
- (void)unregisterObserver:(id)a0;
- (id)dndModeForATXMode:(unsigned long long)a0;
- (id)modeConfigurationForDNDModeWithUUID:(id)a0 useCache:(BOOL)a1;
- (id)debug_allModeDescriptions;
- (id)iOSAppAllowListForMode:(long long)a0;
- (id)iOSContactAllowListForMode:(long long)a0;
- (id)dndModeForDNDModeWithUUID:(id)a0;
- (void)registerObserver:(id)a0;
- (id)_init;
- (void).cxx_destruct;
- (id)getAllModeConfigurationsWithoutCache;
- (id)iOSAppListForMode:(long long)a0 configurationType:(unsigned long long)a1;
- (void)invalidateCaches;
- (id)dndModeForDNDModeWithUUID:(id)a0 useCache:(BOOL)a1;
- (id)modesByModeIdentifiers;
- (id)iOSContactListForMode:(long long)a0 configurationType:(unsigned long long)a1;
- (id)appConfigurationsForModeIdentifier:(id)a0 error:(id *)a1;
- (id)dndSemanticTypeForATXMode:(unsigned long long)a0;
- (id)dndModeUUIDForDNDModeSemanticType:(long long)a0;
- (BOOL)isCloudSyncActive;
- (id)modeConfigurationForDNDModeWithUUID:(id)a0;
- (id)configuredModes;
- (void)refreshCachedConfigs;
- (id)iOSContactDenyListForMode:(long long)a0;
- (id)_configuredModesBySemanticType;
- (id)dndModeUUIDForDNDModeIdentifier:(id)a0;
- (void)configuredModesDidChange;
- (unsigned long long)atxModeForDNDMode:(id)a0;

@end
