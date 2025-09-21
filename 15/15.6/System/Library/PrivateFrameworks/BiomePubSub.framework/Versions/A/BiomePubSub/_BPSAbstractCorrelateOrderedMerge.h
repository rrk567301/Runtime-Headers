@class NSMutableArray, NSMutableSet;
@protocol BPSSubscriber;

@interface _BPSAbstractCorrelateOrderedMerge : BMBookmarkableSubscription {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    struct os_unfair_recursive_lock_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } ourl_lock; unsigned int ourl_count; } _downstreamLock;
}

@property (nonatomic) unsigned long long upstreamCount;
@property (retain, nonatomic) id<BPSSubscriber> downstream;
@property (retain, nonatomic) NSMutableArray *subscriptions;
@property (retain, nonatomic) NSMutableArray *upstreamBookmarks;
@property (retain, nonatomic) NSMutableArray *buffers;
@property (retain, nonatomic) NSMutableArray *requestsPerSubscription;
@property (retain, nonatomic) NSMutableSet *completedUpstreamIndexes;
@property (nonatomic) char recursion;
@property (nonatomic) char finished;
@property (nonatomic) char errored;
@property (nonatomic) char cancelled;
@property (nonatomic) long long demand;
@property (nonatomic) unsigned long long finishCount;

- (void).cxx_destruct;
- (void)cancel;
- (id)newBookmark;
- (void)requestDemand:(long long)a0;
- (id)upstreamSubscriptions;
- (char)_isBuffersEmpty;
- (id)nextValueIndex:(id *)a0;
- (void)_completeWhileLockedWithCompletion:(id)a0;
- (void)_guardedBecomeTerminal;
- (long long)compareFirst:(id)a0 withSecond:(id)a1;
- (void)flushBufferAndRequestMoreWhileLocked;
- (id)initWithDownstream:(id)a0 upstreamCount:(unsigned long long)a1;
- (char)isWaitingForMoreValues;
- (void)receiveCompletion:(id)a0 atIndex:(unsigned long long)a1;
- (long long)receiveInput:(id)a0 atIndex:(unsigned long long)a1;
- (void)receiveSubscription:(id)a0 atIndex:(unsigned long long)a1;
- (void)updateBookmarksWhenLockedForIndex:(unsigned long long)a0;

@end
