@class DiagnosticStorageManager, NSString, NSMutableArray;

@interface AutoBugCaptureCacheDelete : NSObject {
    NSString *logArchivePath;
    NSMutableArray *purgedFilePaths;
}

@property (retain, nonatomic) DiagnosticStorageManager *storageManager;

- (void).cxx_destruct;
- (id)initWithStorageManager:(id)a0;
- (id)replyCacheDeleteDictionaryWithCDInfo:(id)a0 amount:(unsigned long long)a1;
- (id)cacheDeletePeriodicWithInfo:(struct __CFDictionary { } *)a0;
- (void)registerCallbacks:(const char *)a0;
- (void)initCacheDeletePurgeMonitor;
- (void)processPurgedFilesForCDEvents:(id)a0;

@end
