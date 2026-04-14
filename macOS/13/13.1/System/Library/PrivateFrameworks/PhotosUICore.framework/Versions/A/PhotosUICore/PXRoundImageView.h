@class NSColor, PHPerson;

@interface PXRoundImageView : NSImageView

@property (nonatomic) int currentRequestID;
@property (nonatomic) struct CGSize { double width; double height; } currentRequestSize;
@property (retain, nonatomic) PHPerson *representedPerson;
@property (retain, nonatomic) NSColor *backgroundColor;

- (void).cxx_destruct;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)wantsUpdateLayer;
- (void)updateLayer;
- (double)displayScale;
- (void)setNeedsLayout;
- (void)_updateImageIfNeeded;
- (void)_updateCorner;
- (void)_updateImageForFaceCropRequestID:(int)a0 image:(id)a1 contentsRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 error:(id)a3;

@end
