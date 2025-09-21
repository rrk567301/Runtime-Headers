@class DNDSSyncSettings;
@protocol DNDSSyncSettingsProviderDelegate;

@interface DNDSSyncSettingsProvider : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _initialized;
}

@property (copy) DNDSSyncSettings *syncSettings;
@property (weak, nonatomic) id<DNDSSyncSettingsProviderDelegate> delegate;

- (void)setPairSyncEnabled:(BOOL)a0;
- (void)dealloc;
- (void)_lock_updateCompanionCloudSyncPreference;
- (void)_beginMonitoringForChanges;
- (void)_updateCloudSyncPreferences;
- (void)_updatePairSyncPreferences;
- (void)_lock_updatePairSyncPreferences;
- (BOOL)_isCloudSyncPreferenceEnabled;
- (void)_endMonitoringForChanges;
- (id)init;
- (void)pairedDeviceDidChange;
- (BOOL)_lock_isPairSyncPreferenceEnabled;
- (void)_lock_setCompanionCloudSyncPreferenceEnabled:(BOOL)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_lock_updateSyncSettingsIfNewSettingsDiffer:(id)a0;
- (void).cxx_destruct;
- (BOOL)_lock_isCloudSyncPreferenceEnabled;

@end
