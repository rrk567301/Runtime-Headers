@class CALayer, ICMImageGalleryQuadEditorOverlayView, NSString;

@interface ICMImageGalleryQuadEditKnobAccessibilityElement : NSObject <NSAccessibilityElement>

@property (readonly, nonatomic) CALayer *knobLayer;
@property (readonly, nonatomic) ICMImageGalleryQuadEditorOverlayView *parent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (id)accessibilityLabel;
- (id)accessibilityValue;
- (id)accessibilityRole;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (BOOL)accessibilityIsAttributeSettable:(id)a0;
- (id)accessibilityParent;
- (void)accessibilitySetValue:(id)a0 forAttribute:(id)a1;
- (id)initWithLayer:(id)a0 parent:(id)a1;
- (struct CGPoint { double x0; double x1; })normalizedPointInBounds;
- (id)positionFromLeftString;
- (id)positionFromTopString;

@end
