@class NSDictionary, NSString, NSTextStorage;

@interface AKArrowAnnotation : AKShapeAnnotation <AKTextAnnotationProtocol>

@property struct CGPoint { double x; double y; } startPoint;
@property struct CGPoint { double x; double y; } endPoint;
@property struct CGPoint { double x; double y; } midPoint;
@property unsigned long long arrowHeadStyle;
@property (retain) NSTextStorage *annotationText;
@property (copy) NSDictionary *typingAttributes;
@property unsigned long long maximumNumberOfCharacters;
@property char isEditingText;
@property char textIsFixedWidth;
@property char textIsFixedHeight;
@property char textIsClipped;
@property char shouldUsePlaceholderText;
@property (getter=isHighlighted) char highlighted;
@property NSString *textContentType;
@property unsigned long long formContentType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (char)supportsSecureCoding;
+ (id)displayNameForUndoablePropertyChangeWithKey:(id)a0;
+ (id)keyPathsForValuesAffectingDrawingBounds;
+ (id)keyPathsForValuesAffectingHitTestBounds;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)displayName;
- (void)translateBy:(struct CGPoint { double x0; double x1; })a0;
- (id)keysForValuesToObserveForUndo;
- (void)adjustModelToCompensateForOriginalExif;
- (void)flattenModelExifOrientation:(long long)a0 withModelSize:(struct CGSize { double x0; double x1; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })hitTestBounds;
- (id)keysForValuesToObserveForAdornments;
- (id)keysForValuesToObserveForRedrawing;

@end
