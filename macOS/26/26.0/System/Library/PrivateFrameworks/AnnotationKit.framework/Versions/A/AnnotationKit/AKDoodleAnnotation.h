@class NSColor, NSBezierPath, NSString;

@interface AKDoodleAnnotation : AKAnnotation <AKRectangularAnnotationProtocol, AKRotatableAnnotationProtocol, AKStrokedAnnotationProtocol>

@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rectangle;
@property double rotationAngle;
@property double strokeWidth;
@property (copy) NSColor *strokeColor;
@property (retain) NSColor *strokeColorHDR;
@property (retain) NSColor *strokeColorSDR;
@property (getter=isDashed) BOOL dashed;
@property (getter=brushStyle) long long brushStyle;
@property BOOL hasShadow;
@property (retain) NSBezierPath *path;
@property BOOL pathIsPrestroked;
@property BOOL pathIsDot;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;
+ (id)displayNameForUndoablePropertyChangeWithKey:(id)a0;
+ (id)keyPathsForValuesAffectingDrawingBounds;
+ (id)keyPathsForValuesAffectingHitTestBounds;

- (id)displayName;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)translateBy:(struct CGPoint { double x0; double x1; })a0;
- (id)keysForValuesToObserveForUndo;
- (void)adjustModelToCompensateForOriginalExif;
- (void)flattenModelExifOrientation:(long long)a0 withModelSize:(struct CGSize { double x0; double x1; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })hitTestBounds;
- (id)keysForValuesToObserveForAdornments;
- (id)keysForValuesToObserveForRedrawing;
- (id)strokeColorForOptions:(id)a0;

@end
