@class NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface REProxyAudioClockManager : NSObject {
    double _rateRelativeToHost;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _ownTimelineAnchor;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _referenceTimelineAnchor;
    struct OpaqueCMClock { } *_audioClock;
    NSObject<OS_dispatch_queue> *_audioClockUpdateQueue;
    NSObject<OS_dispatch_source> *_timer;
    NSObject<OS_dispatch_queue> *_queue;
    struct unordered_set<OpaqueCMClock *, std::hash<OpaqueCMClock *>, std::equal_to<OpaqueCMClock *>, std::allocator<OpaqueCMClock *>> { struct __hash_table<OpaqueCMClock *, std::hash<OpaqueCMClock *>, std::equal_to<OpaqueCMClock *>, std::allocator<OpaqueCMClock *>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<OpaqueCMClock *, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<OpaqueCMClock *, void *> *> *>>> { void **__ptr_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<OpaqueCMClock *, void *> *> *>> { unsigned long long __size_; } __deleter_; } __bucket_list_; struct __hash_node_base<std::__hash_node<OpaqueCMClock *, void *> *> { void *__next_; } __first_node_; unsigned long long __size_; float __max_load_factor_; } __table_; } _clocks;
    BOOL _initialized;
}

+ (id)sharedInstance;

- (void)dealloc;
- (void)_tearDown;
- (id)init;
- (void)_setUp;
- (id).cxx_construct;
- (void).cxx_destruct;
- (struct OpaqueCMClock { } *)_copyAudioClock;
- (void)_setAudioClock:(struct OpaqueCMClock { } *)a0;
- (void)_addClock:(struct OpaqueCMClock { } *)a0;
- (void)_removeClock:(struct OpaqueCMClock { } *)a0;
- (void)_routeChangeOrMediaServicesReset:(id)a0;
- (void)_updateClock:(struct OpaqueCMClock { } *)a0;
- (void)_updateClocks;
- (void)_updateClocksWithRate:(double)a0 ownTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 referenceTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2;
- (void)addClock:(struct OpaqueCMClock { } *)a0;
- (struct OpaqueCMClock { } *)copyAudioClock;
- (void)removeClock:(struct OpaqueCMClock { } *)a0;
- (void)routeChangeOrMediaServicesReset:(id)a0;
- (void)simulateStall;

@end
