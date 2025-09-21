@class NSProgress, NSButton;

@interface NSDocumentRevisionsNonLocalVersionPlaceholderView : NSDocumentRevisionsPlaceholderView {
    NSProgress *downloadProgress;
    SEL action;
    id target;
    BOOL clickEnabled;
    BOOL hasButton;
    NSButton *button;
}

@property BOOL hasButton;
@property (retain) NSProgress *downloadProgress;

- (void)_layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (BOOL)_hasButtonOrProgress;
- (void)_updateForProgress;
- (void)setClickAction:(SEL)a0 target:(id)a1;
- (void)setElementsHidden:(BOOL)a0;

@end
