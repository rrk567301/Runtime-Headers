@class PFParallaxSpatialPhotoOcclusionLayer, PFParallaxSpatialPhotoLayer, NSArray, PFParallaxImageLayer, NSDictionary, PFPosterOrientedLayout, PFParallaxDataLayer, PFParallaxVideoLayer;

@interface PFParallaxLayerStack : NSObject

@property (retain, nonatomic) NSDictionary *layerMap;
@property (readonly, nonatomic) NSArray *layers;
@property (readonly, nonatomic) PFParallaxImageLayer *backgroundLayer;
@property (readonly, nonatomic) PFParallaxImageLayer *foregroundLayer;
@property (readonly, nonatomic) PFParallaxVideoLayer *settlingEffectLayer;
@property (readonly, nonatomic) PFParallaxSpatialPhotoLayer *spatialPhotoBackgroundLayer;
@property (readonly, nonatomic) PFParallaxSpatialPhotoOcclusionLayer *spatialPhotoForegroundLayer;
@property (readonly, nonatomic) BOOL hasMainLayers;
@property (readonly, nonatomic) PFParallaxImageLayer *inactiveBackgroundLayer;
@property (readonly, nonatomic) PFParallaxImageLayer *inactiveForegroundLayer;
@property (readonly, nonatomic) PFParallaxDataLayer *inactiveSpatialPhotoDataLayer;
@property (readonly, nonatomic) BOOL hasInactiveLayers;
@property (readonly, nonatomic) PFParallaxImageLayer *backgroundBackfillLayer;
@property (readonly, nonatomic) PFParallaxImageLayer *foregroundBackfillLayer;
@property (readonly, nonatomic) PFParallaxSpatialPhotoLayer *spatialPhotoBackgroundBackfillLayer;
@property (readonly, nonatomic) PFParallaxSpatialPhotoOcclusionLayer *spatialPhotoForegroundBackfillLayer;
@property (readonly, nonatomic) BOOL hasBackfillLayers;
@property (readonly, nonatomic) BOOL hasAnySpatialLayer;
@property (readonly, nonatomic) BOOL hasDebugLayers;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } size;
@property (readonly, nonatomic) PFPosterOrientedLayout *layout;
@property (readonly, nonatomic) double clockAreaLuminance;
@property (readonly, nonatomic) BOOL depthEnabled;
@property (readonly, nonatomic) BOOL settlingEffectEnabled;
@property (readonly, nonatomic) BOOL spatialPhotoEnabled;
@property (nonatomic) BOOL userAdjustedVisibleFrame;
@property (readonly, nonatomic) BOOL parallaxDisabled;
@property (readonly, nonatomic) BOOL mayContainBakedHeadroom;
@property (readonly, nonatomic) BOOL spatialPhotoBackfillIncludesHeadroom;

- (id)description;
- (void).cxx_destruct;
- (id)_resizeLayers:(id)a0 oldImageSize:(struct CGSize { double x0; double x1; })a1 newImageSize:(struct CGSize { double x0; double x1; })a2;
- (id)initWithLayers:(id)a0 layout:(id)a1 depthEnabled:(BOOL)a2 parallaxDisabled:(BOOL)a3 clockAreaLuminance:(double)a4 settlingEffectEnabled:(BOOL)a5 spatialPhotoEnabled:(BOOL)a6;
- (id)initWithLayers:(id)a0 layout:(id)a1 depthEnabled:(BOOL)a2 parallaxDisabled:(BOOL)a3 clockAreaLuminance:(double)a4 settlingEffectEnabled:(BOOL)a5 spatialPhotoEnabled:(BOOL)a6 userAdjustedVisibleFrame:(BOOL)a7;
- (id)layerStackByRemovingLayersWithIdentifiers:(id)a0;
- (id)layerStackByRemovingLayersWithOptions:(unsigned long long)a0;
- (id)layerStackByUpdatingClockAreaLuminance:(double)a0;
- (id)layerStackByUpdatingClockLayerOrder:(id)a0;
- (id)layerStackByUpdatingDepthEnabled:(BOOL)a0;
- (id)layerStackByUpdatingInactiveFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layerStackByUpdatingLayers:(id)a0 imageSize:(struct CGSize { double x0; double x1; })a1;
- (id)layerStackByUpdatingLayout:(id)a0;
- (id)layerStackByUpdatingParallaxDisabled:(BOOL)a0;
- (id)layerStackByUpdatingSettlingEffectEnabled:(BOOL)a0;
- (id)layerStackByUpdatingSpatialPhotoEnabled:(BOOL)a0;
- (id)layerStackByUpdatingUserAdjustedVisibleFrame:(BOOL)a0;
- (id)layerStackByUpdatingVisibleFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layerWithIdentifier:(id)a0;
- (void)markMayContainBakedHeadroom;

@end
