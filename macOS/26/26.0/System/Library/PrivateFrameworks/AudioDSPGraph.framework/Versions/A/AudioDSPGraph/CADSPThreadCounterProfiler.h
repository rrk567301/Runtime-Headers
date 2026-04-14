@class NSDictionary;

@interface CADSPThreadCounterProfiler : NSObject {
    struct optional<AudioDSPGraph::Extras::ThreadCounterProfiler> { union { char __null_state_; struct ThreadCounterProfiler { struct shared_ptr<AudioDSPGraph::Graph> { struct Graph *__ptr_; struct __shared_weak_count *__cntrl_; } mGraph; struct shared_ptr<AudioDSPGraph::Extras::ThreadCounterProfiler::Implementation> { struct Implementation *__ptr_; struct __shared_weak_count *__cntrl_; } mImplementation; } __val_; } ; BOOL __engaged_; } _this;
}

@property (readonly, copy, nonatomic) NSDictionary *statistics;

- (id)statistics;
- (id)initWithGraph:(id)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithGraph:(id)a0 secondsPerWindow:(double)a1;

@end
