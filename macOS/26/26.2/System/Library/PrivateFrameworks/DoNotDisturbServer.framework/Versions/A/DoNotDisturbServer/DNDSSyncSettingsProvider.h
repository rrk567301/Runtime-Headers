@class DNDSSyncSettings;
@protocol DNDSSyncSettingsProviderDelegate;

@interface DNDSSyncSettingsProvider : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _initialized;
}

@property (copy) DNDSSyncSettings *syncSettings;
@property (weak, nonatomic) id<DNDSSyncSettingsProviderDelegate> delegate;

- (void)_lock_setCompanionCloudSyncPreferenceEnabled:(BOOL)a0;
- (BOOL)_lock_isCloudSyncPreferenceEnabled;
- (BOOL)_lock_isPairSyncPreferenceEnabled;
- (void)_updatePairSyncPreferences;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (BOOL)_isCloudSyncPreferenceEnabled;
- (void)_updateCloudSyncPreferences;
- (void).cxx_destruct;
- (void)_lock_updatePairSyncPreferences;
- (void)pairedDeviceDidChange;
- (void)_lock_updateCompanionCloudSyncPreference;
- (void)_endMonitoringForChanges;
- (void)setPairSyncEnabled:(BOOL)a0;
- (id)init;
- (void)_beginMonitoringForChanges;
- (void)_lock_updateSyncSettingsIfNewSettingsDiffer:(id)a0;
- (void)dealloc;

@end
