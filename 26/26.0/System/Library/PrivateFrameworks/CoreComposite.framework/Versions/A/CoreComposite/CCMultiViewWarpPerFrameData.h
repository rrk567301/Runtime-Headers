@class NSArray, CCMetalTextureStorage;
@protocol MTLTexture;

@interface CCMultiViewWarpPerFrameData : CCData {
    id<MTLTexture> _colorAtlas;
    id<MTLTexture> _depthAtlas;
    id<MTLTexture> _occupancyMap;
    BOOL _isIntraFrameSync;
    struct CCMultiViewSourceCameraStruct { long long sizeX; long long sizeY; NSArray *position; NSArray *rotation; long long projectionType; NSArray *erpPhiRange; NSArray *erpThetaRange; NSArray *perspectiveFocal; NSArray *perspectiveCenter; NSArray *depthRange; struct { void /* unknown type, empty encoding */ columns[4]; } rotationMatrix; long long pp; } _targertCamera;
}

@property (retain, nonatomic) CCMetalTextureStorage *colorAtlasTextureStorage;
@property (retain, nonatomic) CCMetalTextureStorage *depthAtlasTextureStorage;
@property (retain, nonatomic) CCMetalTextureStorage *occupancyMapTextureStorage;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
