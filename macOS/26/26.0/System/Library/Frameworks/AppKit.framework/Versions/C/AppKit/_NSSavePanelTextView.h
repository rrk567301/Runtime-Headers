@interface _NSSavePanelTextView : NSTextView

- (void)keyDown:(id)a0;
- (id)gotoProvider;
- (id)pasteboardReader;
- (BOOL)performDragOperation:(id)a0;
- (BOOL)readSelectionFromPasteboard:(id)a0;
- (BOOL)shouldChangeTextInRanges:(id)a0 replacementStrings:(id)a1;

@end
