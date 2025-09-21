@interface ICMacTableAttachmentView : ICTableAttachmentView

- (void)setHighlightColor:(id)a0;
- (BOOL)isFlipped;
- (void)viewDidMoveToWindow;
- (void)viewDidMoveToSuperview;
- (BOOL)isAccessibilityElement;
- (void)setHidden:(BOOL)a0;
- (id)accessibilityChildren;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)wantsDefaultClipping;
- (void)setHighlightPatternRegexFinder:(id)a0;
- (void)didChangeSize;
- (id)axTableElement;
- (id)icaxTypeDescription;
- (void)imageForTextPreviewUsingFindingResult:(id)a0 inTextView:(id)a1 completion:(id /* block */)a2;
- (void)sharedInit:(BOOL)a0;
- (id)tableAttachmentViewController;

@end
