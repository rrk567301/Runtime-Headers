@class NSString;

@interface DDLogFileManagerDefault : NSObject <DDLogFileManager> {
    NSString *_logsDirectory;
}

@property unsigned long long maximumNumberOfLogFiles;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)logsDirectory;
- (id)unsortedLogFilePaths;
- (id)unsortedLogFileNames;
- (id)unsortedLogFileInfos;
- (id)sortedLogFilePaths;
- (id)sortedLogFileNames;
- (id)sortedLogFileInfos;
- (void)deleteOldLogFiles;
- (id)createNewLogFile;
- (id)initWithLogsDirectory:(id)a0;
- (id)defaultLogsDirectory;
- (BOOL)isLogFile:(id)a0;
- (id)generateShortUUID;

@end
