@class _NSDebugTDLineView, NSTableView, NSStackView, NSDebugTDInspectorResultsHeaderView;

@interface NSDebugTDInspectorResultsView : NSView {
    NSStackView *_vertStack;
    _NSDebugTDLineView *_line;
}

@property (retain, nonatomic) NSDebugTDInspectorResultsHeaderView *headerView;
@property (retain, nonatomic) NSTableView *inspectorTableView;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)setDefaultHeader;
- (void)setItemHeader:(id)a0 secondaryText:(id)a1 tertiaryText:(id)a2;

@end
