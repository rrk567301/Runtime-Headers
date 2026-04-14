@interface NSViewTextAttachmentCell : NSTextAttachmentCell

- (BOOL)wantsToTrackMouse;
- (void)drawWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1 characterIndex:(unsigned long long)a2 layoutManager:(id)a3;
- (Class)textAttachmentViewProviderClass;
- (BOOL)usesTextAttachmentView;
- (void)_helperDeallocatedForView:(id)a0 layoutManager:(id)a1;
- (id)viewForCharacterIndex:(unsigned long long)a0 layoutManager:(id)a1;
- (void)adjustView:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 forView:(id)a2 characterIndex:(unsigned long long)a3 layoutManager:(id)a4;
- (void)removeView:(id)a0 fromView:(id)a1 layoutManager:(id)a2;
- (oneway void)releaseView:(id)a0;
- (id)viewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forView:(id)a1 characterIndex:(unsigned long long)a2 layoutManager:(id)a3;
- (void)addView:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 toView:(id)a2 characterIndex:(unsigned long long)a3 layoutManager:(id)a4;
- (id)helperForView:(id)a0 layoutManager:(id)a1 characterIndex:(unsigned long long)a2;
- (void)_textAttachmentCellBaseDrawWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1 characterIndex:(unsigned long long)a2 layoutManager:(id)a3;

@end
