@interface CP_OBJECT_cp_layer_renderer_capabilities : NSObject <NSSecureCoding> {
    BOOL _supports_foveation;
    unsigned long long _supported_color_formats_count;
    unsigned long long _supported_color_formats[10];
    unsigned long long _supported_depth_formats_count;
    unsigned long long _supported_depth_formats[10];
    unsigned long long _supported_tracking_areas_formats_count;
    unsigned long long _supported_tracking_areas_formats[10];
    unsigned long long _supported_stencil_formats_count;
    unsigned long long _supported_stencil_formats[10];
    float _supported_minimum_near_plane_distance;
    BOOL _supports_lossy_compression;
    void /* unknown type, empty encoding */ _foveation_max_ppd_range;
    float _foveation_max_ppd_no_eye_tracking;
    BOOL _supports_eye_tracking;
    void /* unknown type, empty encoding */ _panel_size;
    BOOL _is_mono;
    struct RTVRRMetrics { struct RTSize { unsigned int width; unsigned int height; } max_physical_size_per_eye; struct RTSize { unsigned int width; unsigned int height; } max_screen_size_per_eye; struct RTSize { unsigned int width; unsigned int height; } allocation_size_per_eye; } _vrr_metrics;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)initPrivate;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
