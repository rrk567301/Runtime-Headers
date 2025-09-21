@class NSCell;

@interface CPKSearchFieldEditor : NSTextView

@property unsigned int owningID;
@property BOOL hasActiveNavigationTarget;
@property NSCell *ownerCell;
@property BOOL isRTLLayout;

- (void)moveForward:(id)a0;
- (void)cancelOperation:(id)a0;
- (BOOL)allowsVibrancy;
- (void)dealloc;
- (id)init;
- (void)doCommandBySelector:(SEL)a0;
- (void)insertNewline:(id)a0;
- (id)menuForEvent:(id)a0;
- (void)moveBackward:(id)a0;
- (BOOL)_isEmpty;
- (void)moveUp:(id)a0;
- (void)scrollPageDown:(id)a0;
- (void)pageUp:(id)a0;
- (void)scrollLineDown:(id)a0;
- (void)didChangeText;
- (void)insertBacktab:(id)a0;
- (void)insertNewlineIgnoringFieldEditor:(id)a0;
- (void)insertTab:(id)a0;
- (void)moveDown:(id)a0;
- (void)moveLeft:(id)a0;
- (void)moveRight:(id)a0;
- (void)moveToBeginningOfDocument:(id)a0;
- (void)moveToEndOfDocument:(id)a0;
- (void)pageDown:(id)a0;
- (void)scrollLineUp:(id)a0;
- (void)scrollPageUp:(id)a0;
- (void)scrollToBeginningOfDocument:(id)a0;
- (void)scrollToEndOfDocument:(id)a0;
- (id)_delegateWithSelector:(SEL)a0;
- (id)_ownerSearchField;
- (void)_postCharacterSelectionMove:(int)a0 onTarget:(int)a1;
- (void)_postNavigationCancel;
- (void)_postNavigationConfirm;
- (void)_postNavigationFocusMovedWithDirection:(int)a0;
- (void)checkNavigationFocusChange;

@end
