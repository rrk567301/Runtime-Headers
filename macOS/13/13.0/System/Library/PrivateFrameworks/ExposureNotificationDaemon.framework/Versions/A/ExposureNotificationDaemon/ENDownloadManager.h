@class NSURLSession, ENDownloadManagerState, NSBackgroundActivityScheduler, NSURL, NSArray, NSObject, ENSecureArchiveFileWrapper;
@protocol OS_dispatch_queue;

@interface ENDownloadManager : NSObject {
    BOOL _invalidated;
    BOOL _didUnscheduleOnce;
    NSObject<OS_dispatch_queue> *_queue;
    NSArray *_pendingEndpoints;
    ENSecureArchiveFileWrapper *_stateFileWrapper;
}

@property (readonly, nonatomic) NSBackgroundActivityScheduler *fetchScheduler;
@property (retain, nonatomic) NSURLSession *URLSession;
@property (readonly, nonatomic) ENDownloadManagerState *state;
@property (readonly, copy, nonatomic) NSURL *directoryURL;
@property (readonly, nonatomic) unsigned long long enabledEndpointCount;
@property (copy, nonatomic) id /* block */ errorMetricReporter;

- (id)description;
- (void)_activate;
- (void)invalidate;
- (void).cxx_destruct;
- (void)update;
- (id)initWithQueue:(id)a0;
- (void)_invalidate;
- (void)_update;
- (void)activate;
- (id)initWithDirectoryURL:(id)a0 queue:(id)a1;
- (void)_reportErrorMetric:(unsigned int)a0;
- (void)_reportErrorMetricForHTTPStatus:(long long)a0 forIndexFile:(BOOL)a1;
- (id)countOfAvailableDownloadsWithError:(id *)a0;
- (id)_countOfAvailableDownloadsWithError:(id *)a0;
- (BOOL)enumerateDownloadsWithError:(id *)a0 handler:(id /* block */)a1;
- (BOOL)_enumerateDownloadsWithError:(id *)a0 handler:(id /* block */)a1;
- (void)setDownloadEndpoints:(id)a0;
- (void)_setDownloadEndpoints:(id)a0;
- (void)performDownloadsForced:(BOOL)a0 completion:(id /* block */)a1;
- (void)performDownloadsAtDate:(id)a0 forced:(BOOL)a1 completion:(id /* block */)a2;
- (void)_performDownloadsWithScheduler:(id)a0 atDate:(id)a1 forced:(BOOL)a2 completion:(id /* block */)a3;
- (BOOL)_shouldFetchFromEndpointWithState:(id)a0 time:(double)a1;
- (void)_downloadIndexWithTask:(id)a0;
- (id)_baseDirectoryPathForEndpointWithState:(id)a0;
- (id)_downloadsDirectoryPathForEndpointState:(id)a0;
- (id)_indexFilePathForEndpointState:(id)a0;
- (BOOL)_copyDownloadedFileAtPath:(id)a0 toPath:(id)a1 removeExisting:(BOOL)a2 error:(id *)a3;
- (void)_handleIndexFileDownloadFinishedForTask:(id)a0 filePath:(id)a1;
- (void)_downloadNextFileFromServerWithTask:(id)a0;
- (void)_handleFileDownloadFinishedForTask:(id)a0 serverFilePath:(id)a1 downloadedFilePath:(id)a2;
- (id)_nextFilePathToDownloadWithEndpointState:(id)a0;
- (void)purgeAllDownloads;
- (void)_purgeAllDownloads;
- (void)purgeExpiredDownloadsWithDate:(id)a0;
- (void)_purgeExpiredDownloadsWithDate:(id)a0;
- (void)_purgeKeepingDownloadsForIdentifiers:(id)a0 expiryDate:(id)a1;
- (BOOL)resetStateFile;
- (void)_updateFetchSchedule;
- (void)_backgroundActivityFiredWithCompletion:(id /* block */)a0;
- (double)_aggregateDownloadIntervalFromEndpoints:(id)a0;
- (BOOL)_readStateIfNecessaryWithError:(id *)a0;
- (BOOL)_saveState;
- (BOOL)_saveStateWithError:(id *)a0;
- (id)createScheduler;

@end
