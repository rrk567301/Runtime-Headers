@protocol MTLBuffer, MTLRenderPipelineState;

@interface HoverEffectsRenderer : NSObject {
    id<MTLRenderPipelineState> _render_states[4];
    struct vector<HoverEffectArea, std::allocator<HoverEffectArea>> { struct HoverEffectArea *__begin_; struct HoverEffectArea *__end_; struct HoverEffectArea *__cap_; } _glow_animator;
    struct abs_time_t { unsigned long long mabs; } _last_presentation_time;
    struct { struct { id<MTLBuffer> buffer; struct *ptr; } uniforms; unsigned short glow_count; } _per_drawable[4];
}

- (id).cxx_construct;
- (void).cxx_destruct;

@end
