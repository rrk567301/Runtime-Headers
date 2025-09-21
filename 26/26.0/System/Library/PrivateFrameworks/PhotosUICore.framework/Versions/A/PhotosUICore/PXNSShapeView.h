@class NSColor, NSBezierPath;

@interface PXNSShapeView : NSView

@property (copy, nonatomic) NSBezierPath *path;
@property (copy, nonatomic) NSColor *fillColor;

+ (Class)layerClass;

- (id)init;
- (id)shapeLayer;
- (void).cxx_destruct;
- (id)makeBackingLayer;

@end
