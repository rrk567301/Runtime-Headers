@class DNDSSyncSettings;
@protocol DNDSSyncSettingsProviderDelegate;

@interface DNDSSyncSettingsProvider : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _initialized;
}

@property (copy) DNDSSyncSettings *syncSettings;
@property (weak, nonatomic) id<DNDSSyncSettingsProviderDelegate> delegate;

- (void)setPairSyncEnabled:(BOOL)a0;
- (void)pairedDeviceDidChange;
- (void)_lock_updateCompanionCloudSyncPreference;
- (BOOL)_lock_isCloudSyncPreferenceEnabled;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_beginMonitoringForChanges;
- (BOOL)_isCloudSyncPreferenceEnabled;
- (BOOL)_lock_isPairSyncPreferenceEnabled;
- (void)_lock_updateSyncSettingsIfNewSettingsDiffer:(id)a0;
- (void)dealloc;
- (void)_updatePairSyncPreferences;
- (void).cxx_destruct;
- (void)_endMonitoringForChanges;
- (void)_lock_setCompanionCloudSyncPreferenceEnabled:(BOOL)a0;
- (void)_updateCloudSyncPreferences;
- (id)init;
- (void)_lock_updatePairSyncPreferences;

@end
