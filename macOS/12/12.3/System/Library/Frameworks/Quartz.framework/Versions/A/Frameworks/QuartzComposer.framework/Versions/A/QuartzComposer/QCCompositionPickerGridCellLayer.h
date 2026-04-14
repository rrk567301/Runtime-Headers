@class QCCompositionCellLayer, QCPickerSelectionLayer, CATextLayer;

@interface QCCompositionPickerGridCellLayer : CALayer <CAAction> {
    QCCompositionCellLayer *_QCLayer;
    QCPickerSelectionLayer *_selectionLayer;
    CATextLayer *_textLayer;
    struct CGColor { } *_cellFocusRingColor;
    struct CGColor { } *_cellSelectedTextColor;
    struct CGColor { } *_cellTextColor;
    id _controller;
    BOOL _selected;
}

- (void)finalize;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (BOOL)selected;
- (void)setSelected:(BOOL)a0;
- (void)wakeup;
- (void)runActionForKey:(id)a0 object:(id)a1 arguments:(id)a2;
- (void)updateLayout;
- (id)composition;
- (void)selectionDidChange;
- (void)sleep;
- (id)initWithComposition:(id)a0 controller:(id)a1;
- (void)_finalize_QCCompositionPickerGridCellLayer;
- (void)animateCompositionsIfNeeded;
- (void)cellBackgroundColorDidChange;
- (void)selectionModeDidChange;
- (id)compositionLayer;
- (void)setCollapsedLayout;
- (void)restoreExpandedLayout;

@end
