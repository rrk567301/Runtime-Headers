@class NSPersistentUIPreservedStateDirectory, NSURL, NSObject;
@protocol OS_dispatch_queue;

@interface NSPersistentUIFileManager : NSObject {
    NSObject<OS_dispatch_queue> *_IOQueue;
    int _stateFileFD;
    int _publicPlistFD;
    unsigned long long _currentFileSize;
    unsigned long long _fileSizeAfterLastRewrite;
    unsigned int _publicPlistChecksum;
    BOOL _stateDirectoryHasBeenRefreshed;
    BOOL _stateFileHasBeenCreated;
    BOOL _elideAllFileWrites;
}

@property (retain, setter=_setRawStateDirectoryAtLaunch:) NSPersistentUIPreservedStateDirectory *_rawStateDirectoryAtLaunch;
@property (setter=_setRawHadValidStateDirectoryAtLaunch:) char _rawHadValidStateDirectoryAtLaunch;
@property (readonly, copy) NSURL *persistentStateDirectoryURL;

+ (id)persistentStateDirectoryURLForBundleID:(id)a0;

- (void)dealloc;
- (id)initWithBundleID:(id)a0;
- (BOOL)hasPersistentStateToRestore;
- (id)initWithPersistentStateDirectoryURL:(id)a0;
- (void)tryCreatingPersistentStateDirectoryForURL:(id)a0;
- (BOOL)_refreshStateDirectoryIfNecessary;
- (id)_persistentStateFileURL;
- (void)_elideAllFileWrites;
- (BOOL)_trySystemCallDescribedBy:(const char *)a0 executor:(id /* block */)a1;
- (unsigned long long)writeRecords:(id)a0 toFile:(int)a1;
- (int)openPersistentStateFile;
- (void)rewriteFile:(int)a0 withWindowInfos:(id)a1 withImpendingRecords:(id)a2;
- (void)_writeRecords:(id)a0 withWindowInfos:(id)a1 flushingStaleData:(BOOL)a2;
- (void)refreshStateDirectoryIfNecessary;
- (void)_writePublicPlistData:(id)a0;
- (void)preserveStateDirectoryAtLaunch;
- (void)reopenPersistentState;
- (void)writeRecords:(id)a0 withWindowInfos:(id)a1 flushingStaleData:(BOOL)a2;
- (void)writePublicPlistData:(id)a0;
- (void)discardPersistentState;
- (id)stateDirectoryAtLaunch;
- (void)invalidateStateDirectoryAtLaunch;
- (void)finishPendingChangesImmediatelyWithCompletionHandler:(id /* block */)a0;

@end
