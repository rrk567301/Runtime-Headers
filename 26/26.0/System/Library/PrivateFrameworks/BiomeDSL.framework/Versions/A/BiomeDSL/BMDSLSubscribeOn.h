@class BMDSL, BPSPublisher;
@protocol BMDSLScheduler;

@interface BMDSLSubscribeOn : BPSPublisher <BPSCancellable> {
    BPSPublisher *_currentPublisher;
    BOOL _cancelled;
    struct os_unfair_recursive_lock_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } ourl_lock; unsigned int ourl_count; } _lock;
}

@property (readonly, nonatomic) BMDSL *upstream;
@property (readonly, nonatomic) id<BMDSLScheduler> scheduler;

- (id)startWithSubscriber:(id)a0;
- (BOOL)completed;
- (void)reset;
- (id)nextEvent;
- (void)subscribe:(id)a0;
- (void)cancel;
- (id)initWithUpstream:(id)a0 scheduler:(id)a1;
- (void).cxx_destruct;

@end
