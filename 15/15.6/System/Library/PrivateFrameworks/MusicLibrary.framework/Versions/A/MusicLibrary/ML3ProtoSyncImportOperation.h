@class NSObject, NSMutableSet, ML3DatabaseConnection;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface ML3ProtoSyncImportOperation : ML3ImportOperation {
    unsigned int _totalSyncPackageCount;
    unsigned int _syncPackageNum;
    char _syncSessionStarted;
    int _syncType;
    ML3DatabaseConnection *_connection;
    char _isServerImport;
    long long _readSourceState;
    char _isReadSourceCancelled;
    char _importFinished;
    char _pairedDeviceCanProcessStandAloneCollections;
    NSMutableSet *_syncIdsToUnlink;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_source> *_readSource;
}

- (void).cxx_destruct;
- (void)cancel;
- (void)main;
- (unsigned long long)importSource;
- (char)_performImportWithTransaction:(id)a0;
- (char)_processAlbumArtistOperation:(id)a0 withImportSession:(void *)a1;
- (char)_processAlbumOperation:(id)a0 withImportSession:(void *)a1;
- (char)_processMediaItemOperation:(id)a0 withImportSession:(void *)a1;
- (char)_processPlaylistOperation:(id)a0 withImportSession:(void *)a1;
- (char)_processSyncError:(id)a0;
- (char)_processSyncHeader:(id)a0;
- (char)_processSyncOperation:(id)a0 withImportSession:(void *)a1;
- (char)_processSyncPackage:(id)a0 withImportSession:(void *)a1;
- (void)_unlinkUnavailableMediaItems;
- (id)initWithDatabaseImport:(id)a0;

@end
