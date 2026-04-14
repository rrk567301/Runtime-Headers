@interface NSImageKitViewTextAttachmentCell : NSViewTextAttachmentCell

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })cellFrameForTextContainer:(id)a0 proposedLineFragment:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 glyphPosition:(struct CGPoint { double x0; double x1; })a2 characterIndex:(unsigned long long)a3;
- (id)viewForCharacterIndex:(unsigned long long)a0 layoutManager:(id)a1;
- (void)adjustView:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 forView:(id)a2 characterIndex:(unsigned long long)a3 layoutManager:(id)a4;
- (id)viewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forView:(id)a1 characterIndex:(unsigned long long)a2 layoutManager:(id)a3;
- (void)addView:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 toView:(id)a2 characterIndex:(unsigned long long)a3 layoutManager:(id)a4;
- (id)helperForView:(id)a0 layoutManager:(id)a1 characterIndex:(unsigned long long)a2;
- (void)_loadImageKit;
- (Class)_imageKitViewClass;

@end
