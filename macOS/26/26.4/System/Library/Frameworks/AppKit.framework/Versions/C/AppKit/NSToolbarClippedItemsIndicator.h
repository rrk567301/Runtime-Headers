@class NSArray;

@interface NSToolbarClippedItemsIndicator : NSPopUpButton {
    NSArray *_clippedItems;
    BOOL _cachedMenuIsValid;
    BOOL _returnFocusToWindowAfterClick;
    unsigned long long _displayMode;
    long long _toolbarStyle;
}

@property (copy) NSArray *clippedItems;
@property (readonly) BOOL hasItemsToDisplayInPopUp;
@property unsigned long long displayMode;
@property long long toolbarStyle;

+ (void)initialize;

- (BOOL)resignFirstResponder;
- (void)becomeKeyWindow;
- (BOOL)becomeFirstResponder;
- (BOOL)acceptsFirstResponder;
- (BOOL)validateMenuItem:(id)a0;
- (void).cxx_destruct;
- (void)mouseDown:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)init;
- (void)dealloc;
- (void)resignKeyWindow;
- (void)_simpleOverflowMenuItemClicked:(id)a0;
- (id)_clipViewAncestor;
- (void)_computeMenuForClippedItems;
- (void)_computeMenuForClippedItemsIfNeeded;
- (BOOL)_shouldDrawSelectionIndicatorForItem:(id)a0;
- (void)_updateMenuForClippedItems;
- (void)_willPopUpNotification:(id)a0;
- (id)clipIndicatorImage;
- (void)didSendActionNotification:(id)a0;
- (void)moveLeft:(id)a0;
- (void)moveRight:(id)a0;
- (BOOL)needsPanelToBecomeKey;
- (void)performClick:(id)a0;

@end
