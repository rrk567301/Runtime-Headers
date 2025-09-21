@protocol MTLTexture;

@interface VFXRendererRayMap : NSObject

@property (retain, nonatomic) id<MTLTexture> directionTexture;
@property (retain, nonatomic) id<MTLTexture> originTexture;
@property (nonatomic) void /* unknown type, empty encoding */ scale;
@property (nonatomic) float zOrigin;

- (void)dealloc;

@end
