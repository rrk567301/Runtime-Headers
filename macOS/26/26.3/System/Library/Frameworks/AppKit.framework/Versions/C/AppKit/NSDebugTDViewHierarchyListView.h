@class _NSDebugTDLineView, NSTableView, NSButton, NSOutlineView;

@interface NSDebugTDViewHierarchyListView : NSView {
    _NSDebugTDLineView *_line1;
    _NSDebugTDLineView *_line2;
}

@property (retain, nonatomic) NSButton *refreshButton;
@property (retain, nonatomic) NSTableView *suggestedTextViewsTable;
@property (retain, nonatomic) NSOutlineView *viewHierarchyOutlineView;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)getLeftOutlineView;
- (id)getLeftTableView;

@end
