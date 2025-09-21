@class CP_OBJECT_stencil_clear_render_pass, CP_OBJECT_re_portal_renderer;

@interface CP_OBJECT_drawable_render_context_impl : NSObject {
    CP_OBJECT_re_portal_renderer *_re_portal_renderer;
    CP_OBJECT_stencil_clear_render_pass *_stencil_clear_render_pass;
}

- (id)initPrivate;
- (void).cxx_destruct;

@end
