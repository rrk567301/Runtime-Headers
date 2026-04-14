@class NSArray;
@protocol MTLEvent, MTLSharedEvent, MTL4CommandBuffer, MTLCommandQueue;

@interface CP_OBJECT_re_portal_renderer : NSObject {
    _Atomic unsigned long long _current_resource_id;
    NSArray *_progressive_style_resources;
    struct { id<MTLEvent> event; id<MTLCommandQueue> cmd_queue; } _params_update_mtl3;
    struct { id<MTL4CommandBuffer> cmd_buffer; id<MTLSharedEvent> update_mask_event; } _params_update_mtl4;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithDevice:(id)a0 commandQueue:(id)a1 configuration:(id)a2;

@end
