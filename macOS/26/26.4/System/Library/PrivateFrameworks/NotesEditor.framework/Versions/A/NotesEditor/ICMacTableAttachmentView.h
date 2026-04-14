@interface ICMacTableAttachmentView : ICTableAttachmentView

- (void)setHighlightColor:(id)a0;
- (void)viewDidMoveToSuperview;
- (void)setHidden:(BOOL)a0;
- (BOOL)isFlipped;
- (BOOL)isAccessibilityElement;
- (void)viewDidMoveToWindow;
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
