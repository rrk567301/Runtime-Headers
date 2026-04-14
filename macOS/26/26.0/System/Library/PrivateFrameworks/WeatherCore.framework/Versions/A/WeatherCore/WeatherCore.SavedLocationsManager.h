@interface WeatherCore.SavedLocationsManager : NSObject <WCWeatherSharedPreferencesChangeObserver> {
    void /* unknown type, empty encoding */ savedLocations;
    void /* unknown type, empty encoding */ locationDataModels;
    void /* unknown type, empty encoding */ coherenceDataManager;
    void /* unknown type, empty encoding */ localKeyValueStore;
    void /* unknown type, empty encoding */ keyValueStoreProvider;
    void /* unknown type, empty encoding */ locationDataModelFactory;
    void /* unknown type, empty encoding */ defaultLocationManager;
    void /* unknown type, empty encoding */ savedLocationsReader;
    void /* unknown type, empty encoding */ coherenceMigrator;
    void /* unknown type, empty encoding */ nanoSyncManager;
    void /* unknown type, empty encoding */ locationMetadataManager;
    void /* unknown type, empty encoding */ observers;
    void /* unknown type, empty encoding */ observersLock;
    void /* unknown type, empty encoding */ notifyQueue;
    void /* unknown type, empty encoding */ $__lazy_storage_$_forceMigrateToCoherence;
    void /* unknown type, empty encoding */ nanoSyncTask;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)sharedPreferencesChangedExternally;

@end
