@class AXMBrailleCanvasDescription;

@interface AXMBrailleEdgeDetectorOptions : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) AXMBrailleCanvasDescription *canvasDescription;
@property (nonatomic) double zoomLevel;
@property (nonatomic) struct CGPoint { double x; double y; } origin;
@property (nonatomic) double edgeStrength;
@property (nonatomic) BOOL invert;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCanvasDescription:(id)a0;

@end
