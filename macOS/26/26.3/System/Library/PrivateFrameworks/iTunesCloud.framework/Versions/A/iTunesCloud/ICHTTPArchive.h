@class NSString, NSDateFormatter, NSDictionary, NSObject, NSMutableArray;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface ICHTTPArchive : NSObject {
    NSMutableArray *_loggedEvents;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_source> *_flushTimer;
    NSString *_currentArchiveFileName;
    NSDateFormatter *_dateFormatter;
    NSDictionary *_creatorDictionary;
    NSString *_archiveDirectoryPath;
    NSMutableArray *_archiveFilePaths;
    BOOL _hasValidArchiveDirectory;
    long long _maxArchiveFiles;
    long long _maxArchiveBodyLength;
    long long _flushDelaySeconds;
}

@property (class, readonly, nonatomic) ICHTTPArchive *sharedArchive;

- (id)_archiveCreator;
- (id)_archiveForResponse:(id)a0 responseData:(id)a1;
- (void)archiveRequest:(id)a0 withResponse:(id)a1 responseData:(id)a2 performanceMetrics:(id)a3;
- (id)init;
- (id)_archiveForRequest:(id)a0;
- (id)initWithArchiveDirectoryPath:(id)a0 maxArchiveFiles:(long long)a1 maxArchiveBodyLength:(long long)a2 flushDelaySeconds:(long long)a3;
- (void)flush;
- (id)initUnboundedArchiveWithDirectoryPath:(id)a0;
- (void).cxx_destruct;
- (void)_loadExistingArchivePaths;
- (void)archiveRequest:(id)a0 withResponse:(id)a1 responseData:(id)a2;
- (void)dealloc;
- (id)_arrayFromHeaderDictionary:(id)a0;
- (void)_pruneOldArchives;
- (void)_onQueueFlush;

@end
