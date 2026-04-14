@class NSString, CALayer;

@interface NSTouchBarControlStripGrabber : NSView <NSCollectionViewElement, NSGestureRecognizerDelegate> {
    CALayer *_backgroundLayer;
    CALayer *_upperChevronLayer;
    CALayer *_lowerChevronLayer;
    struct NSEdgeInsets { double top; double left; double bottom; double right; } _alignmentRectInsets;
    BOOL _enabled;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy) NSString *identifier;
@property (getter=isHighlighted) BOOL highlighted;
@property (weak) id target;
@property SEL action;
@property (getter=isEnabled) BOOL enabled;
@property long long state;
@property struct NSEdgeInsets { double x0; double x1; double x2; double x3; } alignmentRectInsets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keyPathsForValuesAffectingAlignmentRectInsets;
+ (id)keyPathsForValuesInvalidatingDisplay;
+ (id)keyPathsForValuesInvalidatingIntrinsicContentSize;
+ (id)keyPathsForValuesInvalidatingLayout;

- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (id)actionForLayer:(id)a0 forKey:(id)a1;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)updateLayer;
- (void)setLayer:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)layout;
- (void)_commonInit;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isFlipped;
- (id)initWithCoder:(id)a0;
- (void)applyLayoutAttributes:(id)a0;
- (void)prepareForReuse;
- (void).cxx_destruct;
- (id)accessibilityActionNames;
- (id)accessibilityAttributeNames;
- (id)accessibilityDescriptionAttribute;
- (id)accessibilityIdentifierAttribute;
- (BOOL)accessibilityIsIgnored;
- (void)accessibilityPerformAction:(id)a0;
- (id)accessibilityRoleAttribute;
- (void)handlePress:(id)a0;
- (void)layoutLayers;
- (BOOL)wantsLayer;
- (BOOL)wantsUpdateLayer;

@end
