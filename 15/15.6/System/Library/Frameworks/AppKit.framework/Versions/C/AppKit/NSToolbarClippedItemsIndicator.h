@class NSArray;

@interface NSToolbarClippedItemsIndicator : NSPopUpButton {
    NSArray *_clippedItems;
    char _cachedMenuIsValid;
    char _returnFocusToWindowAfterClick;
}

@property (copy) NSArray *clippedItems;
@property (readonly) char hasItemsToDisplayInPopUp;

+ (void)initialize;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)resignKeyWindow;
- (void)_simpleOverflowMenuItemClicked:(id)a0;
- (void)becomeKeyWindow;
- (id)_clipViewAncestor;
- (void)_computeMenuForClippedItems;
- (void)_computeMenuForClippedItemsIfNeeded;
- (char)_shouldDrawSelectionIndicatorForItem:(id)a0;
- (void)_updateMenuForClippedItems;
- (void)_willPopUpNotification:(id)a0;
- (char)acceptsFirstResponder;
- (char)becomeFirstResponder;
- (id)clipIndicatorImage;
- (void)didSendActionNotification:(id)a0;
- (void)mouseDown:(id)a0;
- (void)moveLeft:(id)a0;
- (void)moveRight:(id)a0;
- (char)needsPanelToBecomeKey;
- (void)performClick:(id)a0;
- (char)resignFirstResponder;
- (char)validateMenuItem:(id)a0;

@end
