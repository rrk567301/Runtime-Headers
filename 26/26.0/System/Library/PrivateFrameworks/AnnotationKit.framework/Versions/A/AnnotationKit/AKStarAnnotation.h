@interface AKStarAnnotation : AKPolygonAnnotation

@property double innerRadiusFactor;

+ (BOOL)supportsSecureCoding;
+ (id)displayNameForUndoablePropertyChangeWithKey:(id)a0;
+ (id)keyPathsForValuesAffectingDrawingBounds;
+ (id)keyPathsForValuesAffectingHitTestBounds;

- (id)displayName;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)keysForValuesToObserveForUndo;
- (id)keysForValuesToObserveForAdornments;
- (id)keysForValuesToObserveForRedrawing;

@end
