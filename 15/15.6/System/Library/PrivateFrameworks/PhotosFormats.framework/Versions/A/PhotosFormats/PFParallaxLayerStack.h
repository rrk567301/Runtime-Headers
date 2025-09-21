@class PFPosterOrientedLayout, NSArray, NSDictionary, PFParallaxImageLayer, PFParallaxVideoLayer;

@interface PFParallaxLayerStack : NSObject

@property (retain, nonatomic) NSDictionary *layerMap;
@property (readonly, nonatomic) NSArray *layers;
@property (readonly, nonatomic) PFParallaxImageLayer *backgroundLayer;
@property (readonly, nonatomic) PFParallaxImageLayer *foregroundLayer;
@property (readonly, nonatomic) PFParallaxVideoLayer *settlingEffectLayer;
@property (readonly, nonatomic) char hasMainLayers;
@property (readonly, nonatomic) PFParallaxImageLayer *inactiveBackgroundLayer;
@property (readonly, nonatomic) PFParallaxImageLayer *inactiveForegroundLayer;
@property (readonly, nonatomic) char hasInactiveLayers;
@property (readonly, nonatomic) PFParallaxImageLayer *backgroundBackfillLayer;
@property (readonly, nonatomic) PFParallaxImageLayer *foregroundBackfillLayer;
@property (readonly, nonatomic) char hasBackfillLayers;
@property (readonly, nonatomic) char hasDebugLayers;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } size;
@property (readonly, nonatomic) PFPosterOrientedLayout *layout;
@property (readonly, nonatomic) double clockAreaLuminance;
@property (readonly, nonatomic) char depthEnabled;
@property (readonly, nonatomic) char settlingEffectEnabled;
@property (readonly, nonatomic) char parallaxDisabled;
@property (readonly, nonatomic) char mayContainBakedHeadroom;

- (id)description;
- (void).cxx_destruct;
- (id)_resizeLayers:(id)a0 oldImageSize:(struct CGSize { double x0; double x1; })a1 newImageSize:(struct CGSize { double x0; double x1; })a2;
- (id)initWithLayers:(id)a0 layout:(id)a1 depthEnabled:(char)a2 parallaxDisabled:(char)a3 clockAreaLuminance:(double)a4 settlingEffectEnabled:(char)a5;
- (id)layerStackByRemovingLayersWithIdentifiers:(id)a0;
- (id)layerStackByRemovingLayersWithOptions:(unsigned long long)a0;
- (id)layerStackByUpdatingClockAreaLuminance:(double)a0;
- (id)layerStackByUpdatingClockLayerOrder:(id)a0;
- (id)layerStackByUpdatingDepthEnabled:(char)a0;
- (id)layerStackByUpdatingInactiveFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layerStackByUpdatingLayers:(id)a0 imageSize:(struct CGSize { double x0; double x1; })a1;
- (id)layerStackByUpdatingLayout:(id)a0;
- (id)layerStackByUpdatingParallaxDisabled:(char)a0;
- (id)layerStackByUpdatingSettlingEffectEnabled:(char)a0;
- (id)layerStackByUpdatingVisibleFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layerWithIdentifier:(id)a0;
- (void)markMayContainBakedHeadroom;

@end
