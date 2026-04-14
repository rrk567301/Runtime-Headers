@interface PLBackgroundJobSyndicationResourceDownloadWorker : PLBackgroundJobSyndicationResourceSanitizationWorker

+ (id)syndicationWorkerCriteria;

- (unsigned long long)batchSize;
- (id)signalAgainDateWithLibrary:(id)a0;
- (unsigned long long)type;
- (BOOL)isNetworkAccessAllowed;
- (id)resourceIDsForPrefetchWithLibrary:(id)a0;

@end
