@interface PLBackgroundJobSyndicationResourceDownloadWorker : PLBackgroundJobSyndicationResourceSanitizationWorker

+ (id)syndicationWorkerCriteria;

- (unsigned long long)type;
- (unsigned long long)batchSize;
- (id)signalAgainDateWithLibrary:(id)a0;
- (BOOL)isNetworkAccessAllowed;
- (id)resourceIDsForPrefetchWithLibrary:(id)a0;

@end
