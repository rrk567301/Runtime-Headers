@class NSColor, NSBezierPath;

@interface PXNSShapeView : NSView

@property (copy, nonatomic) NSBezierPath *path;
@property (copy, nonatomic) NSColor *fillColor;

+ (Class)layerClass;

- (id)init;
- (void).cxx_destruct;
- (id)shapeLayer;
- (id)makeBackingLayer;

@end
