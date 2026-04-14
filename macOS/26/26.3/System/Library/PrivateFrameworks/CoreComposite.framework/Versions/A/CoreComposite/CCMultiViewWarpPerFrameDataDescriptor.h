@interface CCMultiViewWarpPerFrameDataDescriptor : CCDataDescriptor

@property (nonatomic) unsigned long long colorAtlasPixelFormat;
@property (nonatomic) unsigned long long depthAtlasPixelFormat;
@property (nonatomic) unsigned long long occupancyMapPixelFormat;

+ (BOOL)supportsSecureCoding;

- (id)init;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
