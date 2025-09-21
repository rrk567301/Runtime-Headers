@interface _NSBrowserColumnsContainerView : NSView {
    struct __BrccvFlags { unsigned char ignoreScrolling : 1; unsigned int reserved : 31; } _brccvFlags;
}

- (void)setFrameOrigin:(struct CGPoint { double x0; double x1; })a0;
- (void)_drawScrollViewFocusRing:(id)a0 clipRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 needsFullDisplay:(char)a2;
- (id)_enclosingBrowserView;
- (char)_ignoringScrolling;
- (struct CGSize { double x0; double x1; })_minimumFrameSize;
- (void)_setIgnoringScrolling:(char)a0;
- (char)_showingFocusRingAroundEnclosingScrollView:(id)a0;
- (char)_willDrawFocusRingAroundEnclosingScrollView;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (char)isOpaque;
- (id)menuForEvent:(id)a0;
- (char)preservesContentDuringLiveResize;
- (void)scrollPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)scrollRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 by:(struct CGSize { double x0; double x1; })a1;
- (char)scrollRectToVisible:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (void)updateLayer;
- (char)wantsUpdateLayer;

@end
