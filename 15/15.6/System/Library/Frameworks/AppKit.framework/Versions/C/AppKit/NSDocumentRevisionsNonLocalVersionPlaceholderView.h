@class NSProgress, NSButton;

@interface NSDocumentRevisionsNonLocalVersionPlaceholderView : NSDocumentRevisionsPlaceholderView {
    NSProgress *downloadProgress;
    SEL action;
    id target;
    char clickEnabled;
    char hasButton;
    NSButton *button;
}

@property char hasButton;
@property (retain) NSProgress *downloadProgress;

- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_layout;
- (char)_hasButtonOrProgress;
- (void)_updateForProgress;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setClickAction:(SEL)a0 target:(id)a1;
- (void)setElementsHidden:(char)a0;

@end
