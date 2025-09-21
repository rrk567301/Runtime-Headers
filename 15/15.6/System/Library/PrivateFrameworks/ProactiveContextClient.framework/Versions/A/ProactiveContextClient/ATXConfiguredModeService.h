@class NSString, DNDModeConfigurationService, ATXGenericFileBasedCache;

@interface ATXConfiguredModeService : NSObject <DNDModeConfigurationServiceListener> {
    DNDModeConfigurationService *_service;
    ATXGenericFileBasedCache *_cache;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)modeConfigurationService:(id)a0 didReceiveAvailableModesUpdate:(id)a1;
- (id)DNDModeConfigurationForActivityWithUUID:(id)a0;
- (void)_updateUserDefaultsWithAnySmartActivationUpdatesWithDNDConfigs:(id)a0;
- (id)_DNDModeConfigurationForActivityWithUUID:(id)a0 dndConfigs:(id)a1;
- (id)_cacheAndReturnDNDModeConfigurationDictionary;
- (void)_cacheDNDModeConfigurationDictionary:(id)a0;
- (void)_checkIfConfigurationOfCurrentModeChangedWithDNDConfigs:(id)a0;
- (void)_createServiceIfNeeded;
- (char)_isActivityTypeConfigured:(unsigned long long)a0 uuid:(id *)a1 allowsSmartEntry:(char *)a2 userModeName:(id *)a3 dndConfigs:(id)a4;
- (char)_isActivityWithUUIDConfigured:(id)a0 activityType:(unsigned long long *)a1 allowsSmartEntry:(char *)a2 userModeName:(id *)a3 dndConfigs:(id)a4;
- (char)_isSmartActivationEnabled:(id)a0;
- (id)_modeConfigurationsReturningError:(id *)a0;
- (id)_retrieveCachedDNDModeConfigurationDictionary;
- (void)_updateUserDefaultsForAnyNewlyAddedModesWithDNDConfigs:(id)a0;
- (char)isActivityTypeConfigured:(unsigned long long)a0;
- (char)isActivityTypeConfigured:(unsigned long long)a0 uuid:(id *)a1 allowsSmartEntry:(char *)a2 userModeName:(id *)a3;
- (char)isActivityWithUUIDConfigured:(id)a0;
- (char)isActivityWithUUIDConfigured:(id)a0 activityType:(unsigned long long *)a1 allowsSmartEntry:(char *)a2 userModeName:(id *)a3;

@end
