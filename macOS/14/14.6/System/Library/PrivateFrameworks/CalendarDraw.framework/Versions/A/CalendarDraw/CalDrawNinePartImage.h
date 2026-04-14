@class NSImage;

@interface CalDrawNinePartImage : NSObject

@property (retain) NSImage *topLeft;
@property (retain) NSImage *topCenter;
@property (retain) NSImage *topRight;
@property (retain) NSImage *middleLeft;
@property (retain) NSImage *middleCenter;
@property (retain) NSImage *middleRight;
@property (retain) NSImage *bottomLeft;
@property (retain) NSImage *bottomCenter;
@property (retain) NSImage *bottomRight;

+ (id)_imageByCroppingImage:(id)a0 withFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
+ (void)drawImage:(id)a0 withCenterRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 withLeftEndCap:(BOOL)a3 rightEndCap:(BOOL)a4;
+ (id)ninePartImageBySlicingImage:(id)a0 withCenterRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 withLeftEndCap:(BOOL)a2 rightEndCap:(BOOL)a3;

- (void).cxx_destruct;
- (void)drawInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
