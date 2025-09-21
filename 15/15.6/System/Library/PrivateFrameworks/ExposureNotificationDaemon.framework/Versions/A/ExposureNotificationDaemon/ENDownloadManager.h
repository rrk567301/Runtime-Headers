@class NSURLSession, ENDownloadManagerState, NSBackgroundActivityScheduler, NSURL, NSArray, NSObject, ENSecureArchiveFileWrapper;
@protocol OS_dispatch_queue;

@interface ENDownloadManager : NSObject {
    char _invalidated;
    char _didUnscheduleOnce;
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
- (void).cxx_destruct;
- (void)invalidate;
- (void)activate;
- (void)_update;
- (void)_invalidate;
- (id)initWithQueue:(id)a0;
- (void)update;
- (id)createScheduler;
- (id)_indexFilePathForEndpointState:(id)a0;
- (void)_purgeExpiredDownloadsWithDate:(id)a0;
- (char)_readStateIfNecessaryWithError:(id *)a0;
- (double)_aggregateDownloadIntervalFromEndpoints:(id)a0;
- (void)_backgroundActivityFiredWithCompletion:(id /* block */)a0;
- (id)_baseDirectoryPathForEndpointWithState:(id)a0;
- (char)_copyDownloadedFileAtPath:(id)a0 toPath:(id)a1 removeExisting:(char)a2 error:(id *)a3;
- (id)_countOfAvailableDownloadsWithError:(id *)a0;
- (void)_downloadIndexWithTask:(id)a0;
- (void)_downloadNextFileFromServerWithTask:(id)a0;
- (id)_downloadsDirectoryPathForEndpointState:(id)a0;
- (char)_enumerateDownloadsWithError:(id *)a0 handler:(id /* block */)a1;
- (void)_handleFileDownloadFinishedForTask:(id)a0 serverFilePath:(id)a1 downloadedFilePath:(id)a2;
- (void)_handleIndexFileDownloadFinishedForTask:(id)a0 filePath:(id)a1;
- (id)_nextFilePathToDownloadWithEndpointState:(id)a0;
- (void)_performDownloadsWithScheduler:(id)a0 atDate:(id)a1 forced:(char)a2 completion:(id /* block */)a3;
- (void)_purgeAllDownloads;
- (void)_purgeKeepingDownloadsForIdentifiers:(id)a0 expiryDate:(id)a1;
- (void)_reportErrorMetric:(unsigned int)a0;
- (void)_reportErrorMetricForHTTPStatus:(long long)a0 forIndexFile:(char)a1;
- (char)_saveState;
- (char)_saveStateWithError:(id *)a0;
- (void)_setDownloadEndpoints:(id)a0;
- (char)_shouldFetchFromEndpointWithState:(id)a0 time:(double)a1;
- (void)_updateFetchSchedule;
- (id)countOfAvailableDownloadsWithError:(id *)a0;
- (char)enumerateDownloadsWithError:(id *)a0 handler:(id /* block */)a1;
- (id)initWithDirectoryURL:(id)a0 queue:(id)a1;
- (void)performDownloadsAtDate:(id)a0 forced:(char)a1 completion:(id /* block */)a2;
- (void)performDownloadsForced:(char)a0 completion:(id /* block */)a1;
- (void)purgeAllDownloads;
- (void)purgeExpiredDownloadsWithDate:(id)a0;
- (char)resetStateFile;
- (void)setDownloadEndpoints:(id)a0;

@end
