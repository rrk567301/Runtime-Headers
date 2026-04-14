@class NSMutableSet, BRCSyncContext, PQLResultSet;

@interface BRCFSDownloaderBatchEnumerator : NSObject {
    long long _now;
    long long *_retryQueueKick;
    PQLResultSet *_rs;
    NSMutableSet *_enumeratedThrottleIds;
    int _kind;
}

@property (readonly, nonatomic) BRCSyncContext *syncContext;

- (long long)completedUnitCount;
- (int)kind;
- (id)etag;
- (void)close;
- (void).cxx_destruct;
- (long long)transferSize;
- (id)stageID;
- (id)initWithSyncContext:(id)a0 kind:(int)a1 now:(long long)a2 retryQueueKick:(long long *)a3;
- (id)nextDocumentItem;
- (long long)transferQOS;

@end
