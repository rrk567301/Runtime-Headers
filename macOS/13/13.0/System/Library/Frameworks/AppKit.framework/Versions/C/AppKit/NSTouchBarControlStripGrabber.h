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

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (BOOL)wantsUpdateLayer;
- (void)updateLayer;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (BOOL)accessibilityIsIgnored;
- (id)accessibilityAttributeNames;
- (id)accessibilityRoleAttribute;
- (id)accessibilityActionNames;
- (void)accessibilityPerformAction:(id)a0;
- (id)accessibilityDescriptionAttribute;
- (void)setLayer:(id)a0;
- (BOOL)wantsLayer;
- (void)applyLayoutAttributes:(id)a0;
- (BOOL)isFlipped;
- (void)_commonInit;
- (id)actionForLayer:(id)a0 forKey:(id)a1;
- (void)handlePress:(id)a0;
- (id)accessibilityIdentifierAttribute;
- (void)layoutLayers;

@end
