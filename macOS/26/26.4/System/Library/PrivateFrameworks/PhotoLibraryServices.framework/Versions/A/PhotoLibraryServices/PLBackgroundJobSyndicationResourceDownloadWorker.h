@interface PLBackgroundJobSyndicationResourceDownloadWorker : PLBackgroundJobSyndicationResourceSanitizationWorker

+ (id)syndicationWorkerCriteria;

- (unsigned long long)batchSize;
- (id)resourceIDsForPrefetchWithLibrary:(id)a0;
- (id)signalAgainDateWithLibrary:(id)a0;
- (BOOL)isNetworkAccessAllowed;
- (unsigned long long)type;

@end
