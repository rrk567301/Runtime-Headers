@interface CP_OBJECT_cp_layer_renderer_properties : NSObject <NSSecureCoding> {
    unsigned long long _texture_topologies_count;
    struct cp_texture_topology { unsigned long long _texture_type; unsigned long long _array_length; } _texture_topologies[3];
    unsigned long long _view_texture_map_count;
    void /* unknown type, empty encoding */ _vrr_max_screen_size_per_view;
    void /* unknown type, empty encoding */ _foveation_max_ppd_range;
    void /* unknown type, empty encoding */ _default_stereo_texture_size;
    unsigned long long _tracking_areas_format;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initPrivateWithConfiguration:(id)a0;

@end
