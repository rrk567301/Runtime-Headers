@class NSColor, NSString;

@interface AKArrowShapeAnnotation : AKArrowAnnotation <AKFilledAnnotationProtocol>

@property double arrowLineWidth;
@property double arrowHeadWidth;
@property double arrowHeadLength;
@property (copy) NSColor *fillColor;
@property (retain) NSColor *fillColorHDR;
@property (retain) NSColor *fillColorSDR;
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
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)keysForValuesToObserveForUndo;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })hitTestBounds;
- (id)keysForValuesToObserveForAdornments;
- (id)keysForValuesToObserveForRedrawing;

@end
