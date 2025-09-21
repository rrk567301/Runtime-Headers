@protocol MTLComputePipelineState, MTLBuffer;

@interface TrackingAreasHitTesting : NSObject {
    id<MTLComputePipelineState> _hit_test_state;
    struct atomic<unsigned long long> { struct __cxx_atomic_impl<unsigned long long, std::__cxx_atomic_base_impl<unsigned long long>> { _Atomic unsigned long long __a_value; } __a_; } _hit_result_identifier;
    struct { id<MTLBuffer> hit_test_buffer; } _per_drawable[3];
}

@property (readonly, nonatomic) struct cp_hit_tracking_area { unsigned long long x0; struct { void /* unknown type, empty encoding */ x0[4]; } x1; } hitTrackingArea;

- (void)dealloc;
- (id).cxx_construct;
- (void).cxx_destruct;

@end
