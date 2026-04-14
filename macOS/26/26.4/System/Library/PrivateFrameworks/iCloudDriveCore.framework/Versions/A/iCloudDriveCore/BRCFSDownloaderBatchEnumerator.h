@class NSMutableSet, BRCSyncContext, PQLResultSet;

@interface BRCFSDownloaderBatchEnumerator : NSObject {
    long long _now;
    long long *_retryQueueKick;
    PQLResultSet *_rs;
    NSMutableSet *_enumeratedThrottleIds;
    int _kind;
}

@property (readonly, nonatomic) BRCSyncContext *syncContext;

- (int)kind;
- (long long)completedUnitCount;
- (void).cxx_destruct;
- (long long)transferSize;
- (void)close;
- (id)etag;
- (id)stageID;
- (id)initWithSyncContext:(id)a0 kind:(int)a1 now:(long long)a2 retryQueueKick:(long long *)a3;
- (id)nextDocumentItem;
- (long long)transferQOS;

@end
