@interface PLBackgroundJobSyndicationResourceDownloadWorker : PLBackgroundJobSyndicationResourceSanitizationWorker

+ (id)syndicationWorkerCriteria;

- (id)resourceIDsForPrefetchWithLibrary:(id)a0;
- (unsigned long long)type;
- (unsigned long long)batchSize;
- (BOOL)isNetworkAccessAllowed;

@end
