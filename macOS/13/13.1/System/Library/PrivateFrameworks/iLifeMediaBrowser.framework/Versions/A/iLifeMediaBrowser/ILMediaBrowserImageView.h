@interface ILMediaBrowserImageView : IKImageBrowserView {
    BOOL _shouldDrawOverlays;
    BOOL _displaysToolTips;
}

- (void)mouseDown:(id)a0;
- (BOOL)validateMenuItem:(id)a0;
- (void)rightMouseDown:(id)a0;
- (void)copy:(id)a0;
- (BOOL)wantsLayer;
- (void)keyDown:(id)a0;
- (void)scrollWheel:(id)a0;
- (id)menuForEvent:(id)a0;
- (void)magnifyWithEvent:(id)a0;
- (unsigned long long)draggingSession:(id)a0 sourceOperationMaskForDraggingContext:(long long)a1;
- (BOOL)selectItem:(BOOL)a0 atIndex:(unsigned long long)a1;
- (void)setSelectionIndexes:(id)a0 byExtendingSelection:(BOOL)a1;
- (void)setDisplaysToolTips:(BOOL)a0;
- (BOOL)displaysToolTips;
- (void)setShouldDrawOverlays:(BOOL)a0;
- (BOOL)shouldDrawOverlays;
- (void)scaleCellSizeByFactor:(double)a0;
- (BOOL)_shouldSelectIndex:(long long)a0;

@end
