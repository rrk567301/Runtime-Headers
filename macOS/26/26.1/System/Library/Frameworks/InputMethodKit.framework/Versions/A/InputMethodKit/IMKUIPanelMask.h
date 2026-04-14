@class NSImage;

@interface IMKUIPanelMask : NSObject

@property (retain, nonatomic) NSImage *cachedMaskImage;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (readonly, nonatomic) NSImage *maskImage;

- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })edgeInsets;
- (void).cxx_destruct;
- (void)drawInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)makeImage;

@end
