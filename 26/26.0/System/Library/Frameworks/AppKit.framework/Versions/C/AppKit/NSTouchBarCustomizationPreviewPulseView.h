@class NSColor, NSImage, CALayer;

@interface NSTouchBarCustomizationPreviewPulseView : NSView {
    CALayer *_borderLayer;
    CALayer *_imageLayer;
}

@property (copy) NSColor *pulseColor;
@property (copy) NSImage *contentImage;

+ (id)keyPathsForValuesInvalidatingDisplay;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)updateLayer;
- (void)setLayer:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (BOOL)wantsUpdateLayer;

@end
