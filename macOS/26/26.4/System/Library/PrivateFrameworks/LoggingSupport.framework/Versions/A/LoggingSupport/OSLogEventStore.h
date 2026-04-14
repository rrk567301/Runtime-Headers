@class NSURL, NSArray, NSProgress;

@interface OSLogEventStore : NSObject

@property (retain, nonatomic) NSURL *_archiveURL;
@property (retain, nonatomic) NSURL *_directoryURL;
@property (retain, nonatomic) NSArray *_relativeFilePaths;
@property (copy, nonatomic) id /* block */ _progressHandler;
@property (copy, nonatomic) id /* block */ _upgradeHandler;
@property (retain, nonatomic) NSProgress *_progress;

+ (id)localStore;
+ (id)localStoreWithRelativePaths:(id)a0;
+ (id)storeWithArchiveURL:(id)a0;
+ (id)storeWithArchiveURL:(id)a0 relativePaths:(id)a1;
+ (id)storeWithDirectoryURL:(id)a0;
+ (id)storeWithFileURL:(id)a0;

- (void)setProgressHandler:(id /* block */)a0;
- (void)prepareWithCompletionHandler:(id /* block */)a0;
- (BOOL)_createLiveFD:(int *)a0 error:(id *)a1;
- (struct _os_timesync_db_s { } *)_createTSDB:(int)a0 error:(id *)a1;
- (void).cxx_destruct;
- (void)_finalizeEventSource:(id)a0;
- (id)_createLCR:(id *)a0;
- (id)initWithDirectoryURL:(id)a0;
- (id)_createEventSource:(id)a0 metadata:(id)a1 timesync:(struct _os_timesync_db_s { } *)a2;
- (void)_addIndexFileForTraceFile:(id)a0 orChunkStore:(id)a1 toSource:(id)a2;
- (void)_advanceProgress;
- (id)_createArchiveLCR:(id *)a0;
- (id)_createArchiveStoreMetadata:(id)a0 error:(id *)a1;
- (id)_createDirectoryStoreMetadata:(id)a0 error:(id *)a1;
- (id)_createStoreMetadata:(id)a0 error:(id *)a1;
- (BOOL)_enumerateArchiveIntoSource:(id)a0 error:(id *)a1;
- (void)_enumerateDirectoryIntoSource:(id)a0 directory:(struct { int x0; unsigned long long x1; unsigned long long x2; char *x3; int x4; long long x5; long long x6; int x7; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x8; struct _telldir *x9; } *)a1 dirname:(const char *)a2;
- (void)_reportProgressWithError:(id)a0;
- (void)addFiles:(id)a0 toSource:(id)a1;
- (id)initWithArchiveURL:(id)a0;
- (id)initWithArchiveURL:(id)a0 relativePaths:(id)a1;
- (void)setUpgradeConfirmationHandler:(id /* block */)a0;

@end
