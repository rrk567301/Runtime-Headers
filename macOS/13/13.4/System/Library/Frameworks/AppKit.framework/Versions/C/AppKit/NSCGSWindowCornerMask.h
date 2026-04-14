@interface NSCGSWindowCornerMask : NSObject

@property (readonly) struct CGImage { } *image;
@property (readonly) double imageScale;
@property (readonly) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } center;
@property (readonly, getter=isNinePart) BOOL ninePart;
@property (readonly) BOOL hasTrivialEdges;
@property (readonly) BOOL hasUniformSquareCorners;
@property (readonly) BOOL clipsWindowContents;
@property (readonly) BOOL definesShadowShape;

- (void)dealloc;
- (id)initWithImage:(struct CGImage { } *)a0 scale:(double)a1 center:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 hasTrivialEdges:(BOOL)a3 clipsWindowContents:(BOOL)a4 definesShadowShape:(BOOL)a5;

@end
