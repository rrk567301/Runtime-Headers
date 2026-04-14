@class BMDSL, BPSPublisher;
@protocol BMDSLScheduler;

@interface BMDSLSubscribeOn : BPSPublisher <BPSCancellable> {
    BPSPublisher *_currentPublisher;
    BOOL _cancelled;
    struct os_unfair_recursive_lock_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } ourl_lock; unsigned int ourl_count; } _lock;
}

@property (readonly, nonatomic) BMDSL *upstream;
@property (readonly, nonatomic) id<BMDSLScheduler> scheduler;

- (BOOL)completed;
- (void)cancel;
- (id)startWithSubscriber:(id)a0;
- (void)subscribe:(id)a0;
- (id)nextEvent;
- (void)reset;
- (void).cxx_destruct;
- (id)initWithUpstream:(id)a0 scheduler:(id)a1;

@end
