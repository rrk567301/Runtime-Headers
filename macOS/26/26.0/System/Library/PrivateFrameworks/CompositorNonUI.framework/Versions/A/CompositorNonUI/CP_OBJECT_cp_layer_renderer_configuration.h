@interface CP_OBJECT_cp_layer_renderer_configuration : NSObject <NSSecureCoding> {
    unsigned long long _color_format;
    unsigned long long _color_usage;
    unsigned long long _depth_format;
    unsigned long long _depth_usage;
    unsigned long long _tracking_areas_format;
    unsigned long long _tracking_areas_usage;
    long long _compression_type;
    unsigned long long _drawable_render_context_stencil_format;
    int _drawable_render_context_raster_sample_count;
    BOOL _supports_mtl4;
    BOOL _foveation_enabled;
    BOOL _generate_flipped_rasterization_rate_maps;
    unsigned int _layer_layout;
    unsigned long long _frame_count;
    void /* unknown type, empty encoding */ _default_depth_range;
    float _minimum_near_plane_distance;
    BOOL _is_reprojected;
    BOOL _use_shared_events;
    BOOL _contents_inverted_vertically;
    BOOL _use_hybrid_warp;
    BOOL _temporal_anti_aliasing_enabled;
    BOOL _wants_foveation_late_update;
    BOOL _enable_automatic_hand_matting;
    BOOL _render_quality_was_set;
    float _foveation_render_quality;
    void /* unknown type, empty encoding */ _occupancy_dimensions;
    unsigned long long _client_owner_shared_memory_size;
    unsigned int _remote_rendering_mode;
    BOOL _remote_compositor_is_being_debugged;
    BOOL _supports_progressive_style;
    float _remote_compositor_extended_fov_delta;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)initPrivate;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
