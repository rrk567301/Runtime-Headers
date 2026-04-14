@class NSImage;

@interface NSCompositeImageRep : NSImageRep {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _baseFrame;
    struct CGPoint { double x; double y; } _translation;
}

@property (readonly) NSImage *baseImage;
@property (readonly) NSImage *overlayImage;
@property (readonly) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } overlayFrame;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)draw;
- (id)initWithBaseImage:(id)a0 overlayImage:(id)a1 overlayFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;

@end
