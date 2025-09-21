@class CALayer, CATextLayer;

@interface _VZDRMLayer : CALayer {
    CALayer *_content;
    CALayer *_drawableAreaLayer;
    CALayer *_imageAreaLayer;
    CALayer *_imageLayer;
    struct CGSize { double width; double height; } _imageOriginalSize;
    CALayer *_textAreaLayer;
    CATextLayer *_textLayer;
}

+ (BOOL)isSupported;

- (void)setContents:(id)a0;
- (void).cxx_destruct;
- (void)layerDidResize:(struct CGSize { double x0; double x1; })a0;
- (id)initForTesting:(id)a0 content:(id)a1;
- (id)initWithParentLayer:(id)a0;

@end
