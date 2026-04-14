@class NSImage;

@interface NSCompositeImageRep : NSImageRep

@property (retain) NSImage *baseImage;
@property (retain) NSImage *overlayImage;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } overlayFrame;
@property struct CGPoint { double x; double y; } translation;

- (BOOL)draw;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithBaseImage:(id)a0 overlayImage:(id)a1 overlayFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;

@end
