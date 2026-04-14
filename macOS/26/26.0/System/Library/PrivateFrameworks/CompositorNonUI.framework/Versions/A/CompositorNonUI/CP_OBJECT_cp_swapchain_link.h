@class NSArray, CCIntermediateData;
@protocol MTLBuffer;

@interface CP_OBJECT_cp_swapchain_link : NSObject <NSSecureCoding, NSCopying> {
    struct cp_texture_properties { BOOL is_recorder; unsigned int view_count; unsigned int layout; void /* unknown type, empty encoding */ allocation_size; void /* unknown type, empty encoding */ max_physical_size_per_view[2]; void /* unknown type, empty encoding */ max_screen_size_per_view; } _texture_properties;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long chainLinkID;
@property (retain, nonatomic) NSArray *colorTextures;
@property (retain, nonatomic) NSArray *depthTextures;
@property (retain, nonatomic) NSArray *trackingAreasTextures;
@property (retain, nonatomic) NSArray *postProcessColorTextures;
@property (retain, nonatomic) NSArray *vrrDecoderDataBuffers;
@property (retain, nonatomic) id<MTLBuffer> trackingAreasBuffer;
@property (retain, nonatomic) CCIntermediateData *coreCompositePoseIndependentData;
@property (readonly, nonatomic) unsigned char protectionState;
@property (readonly, nonatomic) struct cp_texture_properties { BOOL x0; unsigned int x1; unsigned int x2; void /* unknown type, empty encoding */ x3[2]; } *textureProperties;
@property (copy, nonatomic) id /* block */ onPresent;

- (id)initPrivate;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)sanitize;

@end
