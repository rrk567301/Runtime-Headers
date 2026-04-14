@class NSPersistentUIPreservedStateDirectory, NSMutableDictionary, NSURL, NSObject;
@protocol OS_dispatch_queue;

@interface NSPersistentUIFileManager : NSObject {
    NSURL *_persistentStateDirectoryURL;
    NSObject<OS_dispatch_queue> *_IOQueue;
    int _stateFileFD;
    int _publicPlistFD;
    NSMutableDictionary *_snapshotFilesByWindowID;
    unsigned long long _currentFileSize;
    unsigned long long _fileSizeAfterLastRewrite;
    unsigned int _publicPlistChecksum;
    BOOL _stateDirectoryHasBeenRefreshed;
    BOOL _stateFileHasBeenCreated;
    BOOL _elideAllFileWrites;
    char _volumeIsLocal;
}

@property (retain, setter=_setRawStateDirectoryAtLaunch:) NSPersistentUIPreservedStateDirectory *_rawStateDirectoryAtLaunch;
@property (setter=_setRawHadValidStateDirectoryAtLaunch:) char _rawHadValidStateDirectoryAtLaunch;

- (void)dealloc;
- (id)initWithBundleID:(id)a0;
- (void)_elideAllFileWrites;
- (id)_persistentStateFileURL;
- (BOOL)_refreshStateDirectoryIfNecessary;
- (id)_restorationCountFileURL;
- (BOOL)_trySystemCallDescribedBy:(const char *)a0 executor:(id /* block */)a1;
- (void)_writePublicPlistData:(id)a0;
- (void)_writeRecords:(id)a0 withWindowInfos:(id)a1 flushingStaleData:(BOOL)a2;
- (void)deleteSnapshotForWindowID:(unsigned int)a0;
- (void)discardCrashData;
- (void)discardPersistentState;
- (void)finishPendingChangesImmediatelyWithCompletionHandler:(id /* block */)a0;
- (void)finishPendingChangesWithCompletionHandler:(id /* block */)a0;
- (BOOL)hasPersistentStateToRestore;
- (id)initWithPersistentStateDirectoryURL:(id)a0 IOQueue:(id)a1;
- (void)inspectCrashDataForModification:(BOOL)a0 withHandler:(id /* block */)a1;
- (void)invalidateStateDirectoryAtLaunch;
- (int)openPersistentStateFile;
- (void)preserveStateDirectoryAtLaunch;
- (void)refreshStateDirectoryIfNecessary;
- (void)reopenPersistentState;
- (void)rewriteFile:(int)a0 withWindowInfos:(id)a1 withImpendingRecords:(id)a2;
- (id)stateDirectoryAtLaunch;
- (void)tryCreatingPersistentStateDirectoryForURL:(id)a0;
- (void)writePublicPlistData:(id)a0;
- (unsigned long long)writeRecords:(id)a0 toFile:(int)a1;
- (void)writeRecords:(id)a0 withWindowInfos:(id)a1;
- (void)writeWindowSnapshot:(const void *)a0 length:(unsigned long long)a1 width:(unsigned long long)a2 height:(unsigned long long)a3 bytesPerRow:(unsigned long long)a4 encryptingWithKey:(id)a5 uuid:(id)a6 checkChecksum:(BOOL)a7 forWindowID:(unsigned int)a8 synchronously:(BOOL)a9 completionHandler:(id /* block */)a10;
- (BOOL)writeWindowSnapshot:(const void *)a0 length:(unsigned long long)a1 width:(unsigned long long)a2 height:(unsigned long long)a3 bytesPerRow:(unsigned long long)a4 toFile:(id)a5 encryptingWithKey:(id)a6 uuid:(id)a7 checksum:(unsigned int *)a8 fd:(int *)a9;

@end
