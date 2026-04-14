@class NSArray, ABPhoneFormatter, NSColor;

@interface ABShadowTextField : NSTextField {
    NSColor *_deselctedPlaceholderTextColor;
    BOOL _isDraggingOperationActive;
}

@property (retain, nonatomic) ABPhoneFormatter *phoneFormatter;
@property (nonatomic) BOOL allowsMultipleLines;
@property (nonatomic) BOOL drawsShadow;
@property (nonatomic) BOOL selectAllOnFirstResponder;
@property (retain, nonatomic) NSArray *highlightStrings;
@property (nonatomic) BOOL displaysAlternatePlaceholder;
@property (nonatomic) BOOL needsCardViewBorderDrawing;

+ (Class)cellClass;

- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)setObjectValue:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (BOOL)wantsUpdateLayer;
- (void)updateLayer;
- (void)mouseDown:(id)a0;
- (BOOL)accessibilityIsIgnored;
- (BOOL)becomeFirstResponder;
- (unsigned long long)draggingEntered:(id)a0;
- (void)draggingExited:(id)a0;
- (BOOL)performDragOperation:(id)a0;
- (void)_commonInit;
- (void)hideCellFromAccessibility;
- (void)revealCellToAccessibility;
- (void)applyBackgroundSelectionHighlightToPlaceholderText;
- (void)removeBackgroundSelectionHighlightFromPlaceholderText;
- (void)sendDelegateNotification:(id)a0 selector:(SEL)a1;

@end
