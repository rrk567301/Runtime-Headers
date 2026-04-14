@class NSArray;

@interface NSToolbarClippedItemsIndicator : NSPopUpButton {
    NSArray *_clippedItems;
    BOOL _cachedMenuIsValid;
    BOOL _returnFocusToWindowAfterClick;
}

+ (void)initialize;
+ (BOOL)isItemShownInPopupIfSoleEntry:(id)a0;
+ (BOOL)isMenuItemValidForDisplayInPopUp:(id)a0;
+ (BOOL)willHaveItemsToDisplayForItemViewers:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)becomeKeyWindow;
- (void)_simpleOverflowMenuItemClicked:(id)a0;
- (void)resignKeyWindow;
- (id)_clipViewAncestor;
- (void)_computeMenuForClippedItems;
- (void)_computeMenuForClippedItemsIfNeeded;
- (BOOL)_shouldDrawSelectionIndicatorForItem:(id)a0;
- (void)_updateMenuForClippedItems;
- (void)_willPopUpNotification:(id)a0;
- (BOOL)acceptsFirstResponder;
- (BOOL)becomeFirstResponder;
- (id)clipIndicatorImage;
- (id)clippedItems;
- (void)didSendActionNotification:(id)a0;
- (BOOL)hasItemsToDisplayInPopUp;
- (BOOL)itemIsClipped:(id)a0;
- (void)mouseDown:(id)a0;
- (void)moveLeft:(id)a0;
- (void)moveRight:(id)a0;
- (BOOL)needsPanelToBecomeKey;
- (void)performClick:(id)a0;
- (BOOL)resignFirstResponder;
- (void)setClippedItems:(id)a0;
- (BOOL)validateMenuItem:(id)a0;

@end
