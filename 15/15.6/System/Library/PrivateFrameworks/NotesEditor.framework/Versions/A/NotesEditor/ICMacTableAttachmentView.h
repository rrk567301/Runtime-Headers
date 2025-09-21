@interface ICMacTableAttachmentView : ICTableAttachmentView

- (void)setHidden:(char)a0;
- (id)accessibilityChildren;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (char)isAccessibilityElement;
- (char)isFlipped;
- (void)viewDidMoveToSuperview;
- (void)viewDidMoveToWindow;
- (char)wantsDefaultClipping;
- (void)setHighlightColor:(id)a0;
- (void)setHighlightPatternRegexFinder:(id)a0;
- (void)didChangeSize;
- (id)axTableElement;
- (id)icaxTypeDescription;
- (void)imageForTextPreviewUsingFindingResult:(id)a0 inTextView:(id)a1 completion:(id /* block */)a2;
- (void)sharedInit:(char)a0;
- (id)tableAttachmentViewController;

@end
