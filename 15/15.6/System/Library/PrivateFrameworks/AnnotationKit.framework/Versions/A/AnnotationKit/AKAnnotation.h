@class NSString, NSDate;

@interface AKAnnotation : NSObject <NSSecureCoding, NSCopying> {
    id /* block */ _appearanceOverride;
    char _shouldUseAppearanceOverride;
    char _isObservingForAppearance;
    struct CGPDFDocument { } *_appearanceOverridePDF;
    char _isObservingForIsEdited;
    char _isReallyObservingForIsEdited;
    char _conformsToAKStrokedAnnotationProtocol;
    char _conformsToAKFilledAnnotationProtocol;
    char _conformsToAKRectangularAnnotationProtocol;
    char _conformsToAKFlippableAnnotationProtocol;
    char _conformsToAKRotatableAnnotationProtocol;
    char _conformsToAKTextAnnotationProtocol;
    char _conformsToAKParentAnnotationProtocol;
}

@property (class, readonly) char supportsSecureCoding;

@property char isEdited;
@property long long akSerializationVersion;
@property long long akSerializationPlatform;
@property char isEditingText;
@property char textIsClipped;
@property char editingDisabled;
@property (weak) AKAnnotation *parentAnnotation;
@property (weak) AKAnnotation *childAnnotation;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } initialDrawingBoundsForAppearanceOverride;
@property char shouldUseAppearanceOverride;
@property char shouldObserveEdits;
@property char isBeingCopied;
@property char textIsFixedWidth;
@property char textIsFixedHeight;
@property char shouldUsePlaceholderText;
@property unsigned long long formContentType;
@property NSString *textContentType;
@property (readonly) NSString *UUID;
@property (readonly) NSString *displayName;
@property (copy) NSString *customPlaceholderText;
@property (nonatomic) double originalModelBaseScaleFactor;
@property (nonatomic) long long originalExifOrientation;
@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } hitTestBounds;
@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } drawingBounds;
@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } integralDrawingBounds;
@property (copy) id /* block */ appearanceOverride;
@property (readonly) char isUsingAppearanceOverride;
@property char editsDisableAppearanceOverride;
@property (readonly) char shouldBurnIn;
@property (retain) NSDate *modificationDate;
@property (copy) NSString *author;
@property char isTranslating;
@property char isDraggingHandle;
@property char isFormField;

+ (id)annotationWithData:(id)a0;
+ (id)defaultPlaceholderText;
+ (id)displayNameForUndoablePropertyChangeWithKey:(id)a0;
+ (id)keyPathsForValuesAffectingDrawingBounds;
+ (id)keyPathsForValuesAffectingHitTestBounds;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dataRepresentation;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (char)conformsToAKFilledAnnotationProtocol;
- (char)conformsToAKStrokedAnnotationProtocol;
- (char)conformsToAKTextAnnotationProtocol;
- (void)translateBy:(struct CGPoint { double x0; double x1; })a0;
- (id)keysForValuesToObserveForUndo;
- (void)adjustModelToCompensateForOriginalExif;
- (char)conformsToAKFlippableAnnotationProtocol;
- (char)conformsToAKParentAnnotationProtocol;
- (char)conformsToAKRectangularAnnotationProtocol;
- (char)conformsToAKRotatableAnnotationProtocol;
- (void)flattenModelExifOrientation:(long long)a0 withModelSize:(struct CGSize { double x0; double x1; })a1;
- (id)keysForValuesToObserveForAdornments;
- (id)keysForValuesToObserveForRedrawing;

@end
