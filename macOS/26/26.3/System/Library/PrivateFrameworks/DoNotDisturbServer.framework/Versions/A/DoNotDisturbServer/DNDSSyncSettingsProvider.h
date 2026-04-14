@class DNDSSyncSettings;
@protocol DNDSSyncSettingsProviderDelegate;

@interface DNDSSyncSettingsProvider : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _initialized;
}

@property (copy) DNDSSyncSettings *syncSettings;
@property (weak, nonatomic) id<DNDSSyncSettingsProviderDelegate> delegate;

- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)setPairSyncEnabled:(BOOL)a0;
- (BOOL)_lock_isCloudSyncPreferenceEnabled;
- (void)_updatePairSyncPreferences;
- (id)init;
- (void)_lock_updateSyncSettingsIfNewSettingsDiffer:(id)a0;
- (void)_beginMonitoringForChanges;
- (BOOL)_lock_isPairSyncPreferenceEnabled;
- (BOOL)_isCloudSyncPreferenceEnabled;
- (void)_lock_updatePairSyncPreferences;
- (void).cxx_destruct;
- (void)_lock_setCompanionCloudSyncPreferenceEnabled:(BOOL)a0;
- (void)dealloc;
- (void)pairedDeviceDidChange;
- (void)_updateCloudSyncPreferences;
- (void)_lock_updateCompanionCloudSyncPreference;
- (void)_endMonitoringForChanges;

@end
