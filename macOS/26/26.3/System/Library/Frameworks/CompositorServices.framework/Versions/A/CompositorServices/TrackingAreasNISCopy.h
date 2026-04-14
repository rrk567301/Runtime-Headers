@class CP_OBJECT_cp_post_process_swapchain;
@protocol MTLTexture, MTLSharedEvent, MTLComputePipelineState;

@interface TrackingAreasNISCopy : NSObject {
    CP_OBJECT_cp_post_process_swapchain *_swapchain_reference_only;
    id<MTLSharedEvent> _did_render_event;
    struct { unsigned long long current_index; struct cp_tracking_area_nis_copy_drawable { unsigned long long link_id; BOOL is_presenting; id<MTLTexture> depth_texture; id<MTLTexture> tracking_areas_texture; struct cp_tracking_area *tracking_areas_buffer; } drawables[3]; } _pool;
    id<MTLComputePipelineState> _compute_state;
    struct { unsigned long long width; unsigned long long height; unsigned long long depth; } _threads_per_threadgroup;
    struct { unsigned long long width; unsigned long long height; unsigned long long depth; } _dispatch_threads;
    BOOL _is_client_remote_server;
}

- (void).cxx_destruct;

@end
