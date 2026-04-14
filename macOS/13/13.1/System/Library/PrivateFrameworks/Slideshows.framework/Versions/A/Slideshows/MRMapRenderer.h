@interface MRMapRenderer : NSObject

+ (id)sharedRenderer;

- (id)init;
- (id)requestStringForX:(int)a0 y:(int)a1 scale:(int)a2;
- (struct CGImage { } *)newTileForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withScale:(int)a1 wrap:(BOOL)a2;
- (struct CGImage { } *)_imageFromData:(id)a0;
- (id)splitToTileRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withTileSize:(float)a1;

@end
