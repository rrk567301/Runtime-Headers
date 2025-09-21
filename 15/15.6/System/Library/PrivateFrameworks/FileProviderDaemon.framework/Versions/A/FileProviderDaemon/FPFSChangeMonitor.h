@class FPFSVolume, NSURL, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_log;

@interface FPFSChangeMonitor : NSObject {
    _Atomic int _resetCount;
    _Atomic int _suspendCount;
    struct fpfs_fsevent_stream { } *_stream;
    NSObject<OS_dispatch_queue> *_streamQueue;
    NSObject<OS_dispatch_queue> *_processQueue;
    NSObject<OS_dispatch_source> *_fseventsProcessSource;
    NSMutableArray *_fseventsToProcess;
    unsigned long long _maxFSEventQueueSize;
    unsigned long long _fseventProcessBatchSize;
    char _isCancelled;
    char _drainEvents;
    char _isActivated;
    char _createNoDelay;
    char _shouldWatchRoot;
    char _hasMarkSelf;
    char _optimizeOutOwnEvents;
    char _isProcessingHistory;
    FPFSVolume *_volume;
    NSMutableArray *_subscriptions;
    NSMutableArray *_pendingBarrierEvents;
    NSObject<OS_os_log> *_log;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegationQueue;
@property (copy, nonatomic) NSURL *barrierFolderURL;
@property (readonly, nonatomic) char hasBufferedEvents;
@property (readonly, nonatomic) double latency;
@property (nonatomic, getter=hasPlannedRescan) char plannedRescan;

- (void)dealloc;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)close;
- (void)resume;
- (void)suspend;
- (void)cancel;
- (void)_cancel;
- (void)_close;
- (char)_activateSubscription:(id)a0 error:(id *)a1;
- (struct fpfs_fsevent_stream { } *)_createStreamNamed:(id)a0 since:(unsigned long long)a1;
- (char)_queueEvents:(id)a0 markSelfEncountered:(char)a1;
- (char)activateSubscription:(id)a0 error:(id *)a1;
- (void)deliverBarrierEvents;
- (void)disableSubscription:(id)a0;
- (void)flushStream;
- (void)foreachSubscriptionInState:(unsigned long long)a0 apply:(id /* block */)a1;
- (char)handleFSEvent:(id)a0 indexInBatch:(unsigned int)a1 batchSize:(unsigned int)a2;
- (id)initWithLabel:(id)a0 workloop:(id)a1 shouldWatchRoot:(char)a2;
- (unsigned long long)oldestStartingPoint;
- (void)processFseventBatch;
- (void)queueEvents:(id)a0 markSelfEncountered:(char)a1;
- (void)resetWithReason:(long long)a0 newFSEventID:(unsigned long long)a1;
- (char)setUpStreamForReason:(long long)a0 error:(id *)a1;
- (id)subscribeToEventsAtPath:(id)a0 fd:(int)a1 sinceEventID:(unsigned long long)a2 streamUUID:(id)a3 ignoreOwnEvents:(char)a4 delegate:(id)a5 purpose:(id)a6;

@end
