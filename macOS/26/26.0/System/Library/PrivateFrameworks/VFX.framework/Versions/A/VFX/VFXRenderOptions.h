@class NSArray, VFXRendererRayMap;
@protocol MTLRasterizationRateMap, MTLCommandBuffer;

@interface VFXRenderOptions : NSObject {
    id<MTLRasterizationRateMap> _rasterizationRateMap;
    VFXRendererRayMap *_rayMap;
    NSArray *_viewpoints;
    id<MTLCommandBuffer> _commandBuffer;
    BOOL _disableCoreRendering;
}

@property (retain, nonatomic) id<MTLRasterizationRateMap> rasterizationRateMap;
@property (retain, nonatomic) VFXRendererRayMap *rayMap;
@property (copy, nonatomic) NSArray *viewpoints;
@property (retain, nonatomic) id<MTLCommandBuffer> commandBuffer;
@property (nonatomic) unsigned long long coordinateSpace;
@property (nonatomic) BOOL waitUntilCompleted;
@property (nonatomic) BOOL isSideBySideStereo;
@property (nonatomic) BOOL shouldLoadFinalColor;
@property (nonatomic) unsigned long long depthPixelFormat;
@property (nonatomic) unsigned long long stencilPixelFormat;

- (void)dealloc;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (BOOL)disableCoreRendering;
- (void)setDisableCoreRendering:(BOOL)a0;

@end
