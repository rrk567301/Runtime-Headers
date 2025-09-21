@interface SLDCloudKitSyncReader : SLDCloudKitSyncBase {
    char _garbageCollectScheduled;
    id /* block */ _changeCallback;
    char _changeCallbackScheduled;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)reset;
- (void)syncEngine:(id)a0 didDeleteRecordWithID:(id)a1;
- (void)syncEngine:(id)a0 didFetchRecord:(id)a1;
- (void)syncEngine:(id)a0 didSaveRecord:(id)a1;
- (void)syncEngine:(id)a0 didSaveRecordZone:(id)a1;
- (void)syncEngine:(id)a0 failedToDeleteRecordWithID:(id)a1 error:(id)a2;
- (void)syncEngine:(id)a0 failedToFetchChangesForRecordZoneID:(id)a1 error:(id)a2;
- (void)syncEngine:(id)a0 failedToSaveRecord:(id)a1 error:(id)a2;
- (void)syncEngine:(id)a0 failedToSaveRecordZone:(id)a1 error:(id)a2;
- (id)syncEngine:(id)a0 recordToSaveForRecordID:(id)a1;
- (void)syncEngine:(id)a0 recordWithIDWasDeleted:(id)a1 recordType:(id)a2;
- (char)syncEngine:(id)a0 shouldFetchChangesForZoneID:(id)a1;
- (id)apps;
- (void)setChangeCallback:(id /* block */)a0;
- (void)initializeState;
- (void)garbageCollect;
- (id)_fetchAttributionInternal:(id)a0;
- (id)_syncDirectory;
- (id)_syncDirectoryForWriter:(id)a0;
- (char)_validateRecordIDString:(id)a0;
- (void)accountStatusChanged;
- (void)addApplicationIdentifier:(id)a0;
- (void)addApplicationIdentifierInternal:(id)a0;
- (void)deleteFromDevice:(id)a0 fileName:(id)a1 overrideRetained:(char)a2;
- (id)fetchAttribution:(id)a0;
- (void)garbageCollectNow;
- (id)getHighlightsForApplicationIdentifier:(id)a0;
- (id)getHighlightsInternalForApplicationIdentifier:(id)a0;
- (id)getSyncableHighlightsForApplicationIdentifier:(id)a0;
- (void)invalidateApps;
- (void)invalidateAppsInternal;
- (void)notifyChangeCallback;
- (id)recordForDevice:(id)a0 fileName:(id)a1;
- (void)updateServerAppsIfNecessary;

@end
