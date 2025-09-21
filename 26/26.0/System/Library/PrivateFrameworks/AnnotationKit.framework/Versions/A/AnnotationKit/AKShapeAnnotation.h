@class NSColor, NSString;

@interface AKShapeAnnotation : AKStrokedAnnotation <AKFilledAnnotationProtocol>

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
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)keysForValuesToObserveForUndo;
- (id)fillColorForOptions:(id)a0;
- (id)keysForValuesToObserveForRedrawing;

@end
