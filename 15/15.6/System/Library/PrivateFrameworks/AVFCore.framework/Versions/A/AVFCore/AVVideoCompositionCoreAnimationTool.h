@class AVVideoCompositionCoreAnimationToolInternal;

@interface AVVideoCompositionCoreAnimationTool : NSObject {
    AVVideoCompositionCoreAnimationToolInternal *_videoCompositionTool;
}

+ (id)videoCompositionCoreAnimationToolWithAdditionalLayer:(id)a0 asTrackID:(int)a1;
+ (id)videoCompositionCoreAnimationToolWithPostProcessingAsVideoLayer:(id)a0 inLayer:(id)a1;
+ (id)videoCompositionCoreAnimationToolWithPostProcessingAsVideoLayers:(id)a0 inLayer:(id)a1;

- (void)dealloc;
- (int)_auxiliaryTrackID;
- (id)_auxiliaryTrackLayer;
- (char)_hasLayerAsAuxiliaryTrack;
- (char)_hasPostProcessingLayers;
- (id)_postProcessingRootLayer;
- (id)_postProcessingVideoLayers;
- (id)initWithMagicTrackID:(int)a0 animationLayer:(id)a1 videoLayers:(id)a2;

@end
