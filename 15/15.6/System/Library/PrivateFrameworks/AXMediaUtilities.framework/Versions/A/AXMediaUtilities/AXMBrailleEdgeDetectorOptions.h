@class AXMBrailleCanvasDescription;

@interface AXMBrailleEdgeDetectorOptions : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) AXMBrailleCanvasDescription *canvasDescription;
@property (nonatomic) double zoomLevel;
@property (nonatomic) struct CGPoint { double x; double y; } origin;
@property (nonatomic) double edgeStrength;
@property (nonatomic) char invert;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithCanvasDescription:(id)a0;

@end
