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

- (void)_commonInit;
- (void)mouseDown:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setObjectValue:(id)a0;
- (void)updateLayer;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (BOOL)becomeFirstResponder;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)draggingExited:(id)a0;
- (BOOL)accessibilityIsIgnored;
- (unsigned long long)draggingEntered:(id)a0;
- (BOOL)performDragOperation:(id)a0;
- (BOOL)wantsUpdateLayer;
- (void)applyBackgroundSelectionHighlightToPlaceholderText;
- (void)hideCellFromAccessibility;
- (void)removeBackgroundSelectionHighlightFromPlaceholderText;
- (void)revealCellToAccessibility;
- (void)sendDelegateNotification:(id)a0 selector:(SEL)a1;

@end
