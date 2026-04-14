@class NSColor;

@interface NSColorWell : NSControl {
    NSColor *_color;
    struct __cwFlags { unsigned char isActive : 1; unsigned char isBordered : 1; unsigned char cantDraw : 1; unsigned char isNotContinuous : 1; unsigned char refusesFR : 1; unsigned int reservedColorWell : 27; } _cwFlags;
}

@property (readonly, getter=isActive) BOOL active;
@property (getter=isBordered) BOOL bordered;
@property (copy) NSColor *color;

+ (void)initialize;
+ (BOOL)accessibilityIsSingleCelled;
+ (id)_exclusiveColorPanelOwner;
+ (void)colorPanelColorChanged:(id)a0;
+ (BOOL)automaticallyNotifiesObserversOfObjectValue;
+ (void)_deactivateAllColorWells;
+ (void)_delayedDeactiveWindowlessWell:(id)a0;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setEnabled:(BOOL)a0;
- (id)objectValue;
- (void)setObjectValue:(id)a0;
- (void)setNeedsDisplay:(BOOL)a0;
- (BOOL)isOpaque;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setContinuous:(BOOL)a0;
- (BOOL)isContinuous;
- (BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
- (BOOL)_contentHuggingDefault_isUsuallyFixedWidth;
- (void)mouseDown:(id)a0;
- (BOOL)acceptsFirstResponder;
- (id)accessibilityAttributeNames;
- (id)accessibilityRoleAttribute;
- (id)accessibilityActionNames;
- (id)accessibilityActionDescription:(id)a0;
- (void)accessibilityPerformAction:(id)a0;
- (void)performClick:(id)a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)deactivate;
- (id)accessibilityValueAttribute;
- (BOOL)accessibilityIsValueAttributeSettable;
- (void)windowWillClose:(id)a0;
- (BOOL)_hasKeyboardFocus;
- (void)_windowChangedKeyState;
- (BOOL)resignFirstResponder;
- (void)setRefusesFirstResponder:(BOOL)a0;
- (BOOL)acceptsFirstMouse:(id)a0;
- (BOOL)becomeFirstResponder;
- (BOOL)refusesFirstResponder;
- (unsigned long long)draggingEntered:(id)a0;
- (BOOL)performDragOperation:(id)a0;
- (struct { double x0; double x1; })_baselineOffsetsAtSize:(struct CGSize { double x0; double x1; })a0;
- (double)baselineOffsetFromBottom;
- (void)shiftModifySelection:(id)a0;
- (void)altModifySelection:(id)a0;
- (void)drawWellInside:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)drawColor;
- (void)_drawBorderInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)_shouldOrderFront;
- (id)_takeColorFrom:(id)a0 andSendAction:(BOOL)a1;
- (void)_colorWellCommonAwake;
- (id)_takeColorFromAndSendActionIfContinuous:(id)a0;
- (id)_takeColorFromDoAction:(id)a0;
- (double)_wellBorderThinkness;
- (struct __CFDictionary { } *)_coreUIBorderDrawOptions;
- (BOOL)_ownsColorPanelExclusively;
- (void)takeColorFrom:(id)a0;
- (void)activate:(BOOL)a0;
- (void)_performActivationClickWithShiftDown:(BOOL)a0;
- (void)viewWillMoveToWindow:(id)a0;
- (void)acceptColor:(id)a0 atPoint:(struct CGPoint { double x0; double x1; })a1;
- (id)_old_initWithCoder_NSColorWell:(id)a0;
- (double)_swatchBorderThickness;

@end
