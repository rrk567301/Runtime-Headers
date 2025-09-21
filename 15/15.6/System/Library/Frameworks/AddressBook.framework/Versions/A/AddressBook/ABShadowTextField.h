@class NSArray, ABPhoneFormatter, NSColor;

@interface ABShadowTextField : NSTextField {
    NSColor *_deselctedPlaceholderTextColor;
    char _isDraggingOperationActive;
}

@property (retain, nonatomic) ABPhoneFormatter *phoneFormatter;
@property (nonatomic) char allowsMultipleLines;
@property (nonatomic) char drawsShadow;
@property (nonatomic) char selectAllOnFirstResponder;
@property (retain, nonatomic) NSArray *highlightStrings;
@property (nonatomic) char displaysAlternatePlaceholder;
@property (nonatomic) char needsCardViewBorderDrawing;

+ (Class)cellClass;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)setObjectValue:(id)a0;
- (void)draggingExited:(id)a0;
- (void)_commonInit;
- (char)accessibilityIsIgnored;
- (char)becomeFirstResponder;
- (unsigned long long)draggingEntered:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)mouseDown:(id)a0;
- (char)performDragOperation:(id)a0;
- (void)updateLayer;
- (char)wantsUpdateLayer;
- (void)applyBackgroundSelectionHighlightToPlaceholderText;
- (void)hideCellFromAccessibility;
- (void)removeBackgroundSelectionHighlightFromPlaceholderText;
- (void)revealCellToAccessibility;
- (void)sendDelegateNotification:(id)a0 selector:(SEL)a1;

@end
