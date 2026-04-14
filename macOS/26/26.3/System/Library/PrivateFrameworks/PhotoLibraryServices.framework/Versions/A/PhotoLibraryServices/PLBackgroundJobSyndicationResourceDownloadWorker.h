@interface PLBackgroundJobSyndicationResourceDownloadWorker : PLBackgroundJobSyndicationResourceSanitizationWorker

+ (id)syndicationWorkerCriteria;

- (unsigned long long)batchSize;
- (unsigned long long)type;
- (BOOL)isNetworkAccessAllowed;
- (id)resourceIDsForPrefetchWithLibrary:(id)a0;
- (id)signalAgainDateWithLibrary:(id)a0;

@end
