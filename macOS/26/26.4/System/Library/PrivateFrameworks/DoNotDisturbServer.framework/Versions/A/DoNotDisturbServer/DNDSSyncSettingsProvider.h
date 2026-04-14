@class DNDSSyncSettings;
@protocol DNDSSyncSettingsProviderDelegate;

@interface DNDSSyncSettingsProvider : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _initialized;
}

@property (copy) DNDSSyncSettings *syncSettings;
@property (weak, nonatomic) id<DNDSSyncSettingsProviderDelegate> delegate;

- (void)_lock_updateSyncSettingsIfNewSettingsDiffer:(id)a0;
- (void)_lock_setCompanionCloudSyncPreferenceEnabled:(BOOL)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_updateCloudSyncPreferences;
- (BOOL)_lock_isPairSyncPreferenceEnabled;
- (BOOL)_lock_isCloudSyncPreferenceEnabled;
- (void)pairedDeviceDidChange;
- (void)_beginMonitoringForChanges;
- (void).cxx_destruct;
- (void)_lock_updatePairSyncPreferences;
- (id)init;
- (void)_lock_updateCompanionCloudSyncPreference;
- (void)_updatePairSyncPreferences;
- (void)setPairSyncEnabled:(BOOL)a0;
- (void)dealloc;
- (void)_endMonitoringForChanges;
- (BOOL)_isCloudSyncPreferenceEnabled;

@end
