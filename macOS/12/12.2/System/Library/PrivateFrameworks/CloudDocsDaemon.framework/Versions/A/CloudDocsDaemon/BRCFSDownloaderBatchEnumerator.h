@class BRCSyncContext, PQLResultSet;

@interface BRCFSDownloaderBatchEnumerator : NSObject {
    long long _now;
    long long *_retryQueueKick;
    PQLResultSet *_rs;
}

@property (readonly, nonatomic) BRCSyncContext *syncContext;

- (void)close;
- (void).cxx_destruct;
- (id)etag;
- (long long)completedUnitCount;
- (id)initWithSyncContext:(id)a0 kind:(int)a1 now:(long long)a2 retryQueueKick:(long long *)a3;
- (id)nextDocumentItem;
- (id)stageID;

@end
