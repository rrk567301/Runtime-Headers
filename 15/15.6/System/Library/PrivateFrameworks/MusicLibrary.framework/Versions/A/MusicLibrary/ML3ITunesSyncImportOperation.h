@class NSMutableDictionary, NSMutableSet;

@interface ML3ITunesSyncImportOperation : ML3ImportOperation {
    char _sagaIsEnabled;
    char _resetSync;
    NSMutableDictionary *_cachedPIDToFilePathMap;
    NSMutableDictionary *_cachedPIDToLocationPropertyMap;
    NSMutableDictionary *_cachedSyncIDsToPIDsMap;
    NSMutableSet *_importedPlaylists;
    long long _devicePrimaryContainer;
}

- (void).cxx_destruct;
- (void)main;
- (unsigned long long)importSource;
- (id)_dbInfoValuesForStep:(id)a0;
- (char)_performImportFromPlistFiles:(id)a0 withTransaction:(id)a1;
- (char)_performImportOfTrackData:(id)a0 WithTransaction:(id)a1;
- (char)_performImportWithTransaction:(id)a0;
- (char)_processDeletePlaylistOperation:(id)a0 withImportSession:(void *)a1;
- (char)_processDeleteTrackOperation:(id)a0 withImportSession:(void *)a1;
- (void)_processGeniusConfigPlist:(id)a0;
- (char)_processInsertPlaylistOperation:(id)a0 withImportSession:(void *)a1;
- (char)_processInsertTrackOperation:(id)a0 withImportSession:(void *)a1;
- (char)_processSyncOperation:(id)a0 withImportSession:(void *)a1;
- (char)_processUpdateDBInfoOperation:(id)a0 withImportSession:(void *)a1;
- (char)_processUpdatePlaylistOperation:(id)a0 withImportSession:(void *)a1;
- (char)_processUpdateTrackOperation:(id)a0 withImportSession:(void *)a1;
- (void)_recoverExistingAsset:(id)a0 forTrackId:(long long)a1;
- (id)_syncOperationsFromPlistFile:(id)a0;
- (id)_syncPlistFilesFromDirectory:(id)a0;

@end
