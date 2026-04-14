@class _PLQueueDispatcherQueueTrackingStats;

@interface PLQueueDispatcherContext : NSManagedObjectContext {
    _PLQueueDispatcherQueueTrackingStats *_pl_stats;
}

- (void).cxx_destruct;
- (id)initWithConcurrencyType:(unsigned long long)a0;
- (id)pl_queueDispatcherTrackingStats;

@end
