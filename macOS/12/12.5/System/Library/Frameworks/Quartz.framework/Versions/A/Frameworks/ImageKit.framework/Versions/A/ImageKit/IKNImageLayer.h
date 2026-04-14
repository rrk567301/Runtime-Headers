@class IKNCustomLayer, IKNImageViewHandler, CALayer, IKPlaceholderLayer;

@interface IKNImageLayer : CALayer {
    IKPlaceholderLayer *_placeholderLayer;
    CALayer *_leftShadowLayer;
    CALayer *_bottomShadowLayer;
    CALayer *_rightShadowLayer;
}

@property IKNImageViewHandler *imageViewHandler;
@property (nonatomic) double rotation;
@property (readonly) double width;
@property (readonly) double height;
@property (readonly) IKNCustomLayer *templateLayer;
@property (readonly) IKNCustomLayer *alphaLayer;
@property (nonatomic) struct CGSize { double width; double height; } noImageSize;

- (void)setImage:(struct CGImage { } *)a0 imageProperties:(id)a1;
- (void)adjustToViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateLayerContents:(struct CGImage { } *)a0;
- (void)installPlaceHolderLayer:(id)a0;
- (void)removePlaceHolderLayer;
- (void)updateTemplateLayer;
- (void)updateAlphaLayer;
- (void)updatePlaceholderLayer;
- (void)updateShadowLayers;
- (void)autoResizeToViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)installTemplateLayer:(id)a0;
- (void)removeTemplateLayer;
- (void)installAlphaLayerWithGray:(double)a0 alpha:(double)a1;
- (void)removeAlphaLayer;

@end
