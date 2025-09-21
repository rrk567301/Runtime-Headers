@class NSString, NSFileHandle;

@interface EFQueryLogger : NSObject {
    NSFileHandle *_lookasideFileHandle;
    NSString *_lookasideFilePath;
    BOOL _didFlushLogs;
    NSString *_baseFileName;
    NSString *_logDirectory;
}

+ (id)_logQueue;

- (void).cxx_destruct;
- (void)countQueryString:(id)a0 executionTime:(double)a1;
- (id)initWithBaseFilename:(id)a0 directory:(id)a1;
- (void)logQueryString:(id)a0;
- (void)_moveLogFileContentsAtPath:(id)a0;
- (void)_moveLogFileContentsWithoutDateAtPath:(id)a0;
- (void)_openLookasideFile;
- (void)_sortAndWriteQueries:(id)a0 forCount:(unsigned long long)a1 totalCount:(unsigned long long)a2 queryCountMap:(id)a3;
- (void)flushLogs;
- (void)flushLogsWithoutDate;
- (void)logPlainTextData:(id)a0;
- (void)logUniqueQueryString:(id)a0;

@end
