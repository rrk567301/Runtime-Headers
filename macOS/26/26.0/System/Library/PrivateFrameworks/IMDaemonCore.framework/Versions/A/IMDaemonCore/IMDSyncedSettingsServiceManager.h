@interface IMDSyncedSettingsServiceManager : NSObject <IMSyncedSettingsManaging> {
    void /* unknown type, empty encoding */ localDomain;
    void /* unknown type, empty encoding */ remoteDomain;
    void /* unknown type, empty encoding */ ubiquitousStoreQueue;
    void /* unknown type, empty encoding */ sharedOTPDefaults;
    void /* unknown type, empty encoding */ localStorageDelegate;
    void /* unknown type, empty encoding */ remoteStorageDelegate;
    void /* unknown type, empty encoding */ watchSyncDelegate;
    void /* unknown type, empty encoding */ syncConfigurationDelegate;
}

@property (class, nonatomic, readonly) IMDSyncedSettingsServiceManager *sharedManager;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)setSettingValue:(id)a0 forKey:(long long)a1;
- (BOOL)settingExplicitlySetForKey:(long long)a0;
- (id)settingValueForKey:(long long)a0;
- (void)cloudkitStateEnabledReturnedWithNotification:(id)a0;
- (void)handleDidChangeWithNotification:(id)a0;
- (id)initWithLocalDomain:(id)a0 remoteDomain:(id)a1 localStorageDelegate:(id)a2 remoteStorageDelegate:(id)a3 watchSyncDelegate:(id)a4 syncConfigurationDelegate:(id)a5;
- (void)migrateNotificationSettingsV1toV2IfNecessary;

@end
