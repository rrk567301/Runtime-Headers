@class NSColor, NSString;

@interface AKStrokedAnnotation : AKAnnotation <AKStrokedAnnotationProtocol>

@property double strokeWidth;
@property (copy) NSColor *strokeColor;
@property (retain) NSColor *strokeColorHDR;
@property (retain) NSColor *strokeColorSDR;
@property (getter=isDashed) BOOL dashed;
@property long long brushStyle;
@property BOOL hasShadow;
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
- (id)keysForValuesToObserveForUndo;
- (id)keysForValuesToObserveForRedrawing;
- (id)strokeColorForOptions:(id)a0;

@end
