@interface PLBackgroundJobSyndicationResourceDownloadWorker : PLBackgroundJobSyndicationResourceSanitizationWorker

+ (id)syndicationWorkerCriteria;

- (unsigned long long)batchSize;
- (char)isNetworkAccessAllowed;
- (id)resourceIDsForPrefetchWithLibrary:(id)a0;

@end
