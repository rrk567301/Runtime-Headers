@interface PTEffectCompositionRenderRequest : NSObject

@property struct __CVBuffer { } *inputSourcePixelBuffer;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } inputCropRect;
@property struct __CVBuffer { } *inputTargetPixelBuffer;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } inputTargetRect;
@property float inputTargetRectCornerRadius;
@property struct __CVBuffer { } *outputPixelBuffer;

@end
