@interface ILMediaBrowserImageView : IKImageBrowserView {
    char _shouldDrawOverlays;
    char _displaysToolTips;
}

- (void)rightMouseDown:(id)a0;
- (void)copy:(id)a0;
- (unsigned long long)draggingSession:(id)a0 sourceOperationMaskForDraggingContext:(long long)a1;
- (void)keyDown:(id)a0;
- (void)magnifyWithEvent:(id)a0;
- (id)menuForEvent:(id)a0;
- (void)mouseDown:(id)a0;
- (void)scrollWheel:(id)a0;
- (char)validateMenuItem:(id)a0;
- (char)wantsLayer;
- (char)selectItem:(char)a0 atIndex:(unsigned long long)a1;
- (void)setSelectionIndexes:(id)a0 byExtendingSelection:(char)a1;
- (char)_shouldSelectIndex:(long long)a0;
- (char)displaysToolTips;
- (void)scaleCellSizeByFactor:(double)a0;
- (void)setDisplaysToolTips:(char)a0;
- (void)setShouldDrawOverlays:(char)a0;
- (char)shouldDrawOverlays;

@end
