@class NSColor, NSBezierPath;

@interface PXNSShapeView : NSView

@property (copy, nonatomic) NSBezierPath *path;
@property (copy, nonatomic) NSColor *fillColor;

+ (Class)layerClass;

- (void).cxx_destruct;
- (id)init;
- (id)shapeLayer;
- (id)makeBackingLayer;

@end
