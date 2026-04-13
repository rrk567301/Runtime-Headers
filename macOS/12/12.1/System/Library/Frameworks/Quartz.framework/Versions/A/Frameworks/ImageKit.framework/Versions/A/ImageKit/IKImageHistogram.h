@class IKScanUIControllerAdvanced;

@interface IKImageHistogram : NSView {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _selectionRectInch;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _selectionRectPixels;
    BOOL _isDirty;
    BOOL _updating;
    struct CGImage { } *_image;
    unsigned long long _histA[256];
    unsigned long long _histR[256];
    unsigned long long _histG[256];
    unsigned long long _histB[256];
    unsigned long long *_histogram[4];
}

@property IKScanUIControllerAdvanced *scanUIController;
@property BOOL isGray;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })fittingSize;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (void)updateHistogram;
- (void)updateCGImage;
- (void)update_vImageBufferFromImageGray:(struct CGImage { } *)a0;
- (void)update_vImageBufferFromImageRGB:(struct CGImage { } *)a0;
- (void)update_vImageBufferFromImage:(struct CGImage { } *)a0;
- (void)setSelectionRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
