@class NSArray;

@interface NSToolbarClippedItemsIndicator : NSPopUpButton {
    NSArray *_clippedItems;
    BOOL _cachedMenuIsValid;
    BOOL _returnFocusToWindowAfterClick;
}

+ (void)initialize;
+ (BOOL)isMenuItemValidForDisplayInPopUp:(id)a0;
+ (BOOL)isItemShownInPopupIfSoleEntry:(id)a0;
+ (BOOL)willHaveItemsToDisplayForItemViewers:(id)a0;

- (void)dealloc;
- (id)init;
- (void)mouseDown:(id)a0;
- (BOOL)acceptsFirstResponder;
- (BOOL)validateMenuItem:(id)a0;
- (void)performClick:(id)a0;
- (void)becomeKeyWindow;
- (void)moveRight:(id)a0;
- (void)moveLeft:(id)a0;
- (BOOL)resignFirstResponder;
- (void)resignKeyWindow;
- (BOOL)becomeFirstResponder;
- (BOOL)needsPanelToBecomeKey;
- (id)clipIndicatorImage;
- (void)_willPopUpNotification:(id)a0;
- (void)_simpleOverflowMenuItemClicked:(id)a0;
- (BOOL)_shouldDrawSelectionIndicatorForItem:(id)a0;
- (void)_computeMenuForClippedItems;
- (void)_computeMenuForClippedItemsIfNeeded;
- (void)_updateMenuForClippedItems;
- (BOOL)hasItemsToDisplayInPopUp;
- (void)didSendActionNotification:(id)a0;
- (void)setClippedItems:(id)a0;
- (id)clippedItems;
- (BOOL)itemIsClipped:(id)a0;
- (id)_clipViewAncestor;

@end
