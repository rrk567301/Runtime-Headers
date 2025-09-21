@interface _NSSavePanelTextView : NSTextView

- (id)gotoProvider;
- (void)keyDown:(id)a0;
- (id)pasteboardReader;
- (char)performDragOperation:(id)a0;
- (char)readSelectionFromPasteboard:(id)a0;
- (char)shouldChangeTextInRanges:(id)a0 replacementStrings:(id)a1;

@end
