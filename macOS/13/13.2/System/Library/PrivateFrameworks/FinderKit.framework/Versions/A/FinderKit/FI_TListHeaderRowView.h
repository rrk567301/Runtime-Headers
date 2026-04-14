@class NSValue, NSTrackingArea, FI_TListHeaderCellView, NSMutableArray, NSObject;
@protocol TListHeaderRowViewDelegate;

@interface FI_TListHeaderRowView : NSTableRowView {
    struct TFENode { struct OpaqueNodeRef *fNodeRef; } _node;
    long long _columnBeingDragged;
    FI_TListHeaderCellView *_cellViewForDrag;
    NSMutableArray *_cellViews;
    NSTrackingArea *_headerTrackingArea;
    BOOL _isCursorOverDivider;
    struct TNSWeakPtr<NSObject<TListHeaderRowViewDelegate>> { NSValue *fWeakObject; } _delegate;
}

@property (nonatomic) double tableInset;
@property (readonly, weak, nonatomic) NSObject<TListHeaderRowViewDelegate> *delegate;
@property (nonatomic) long long sortColumnIndex;
@property (nonatomic, getter=isSortAscending) BOOL sortAscending;

- (void)dealloc;
- (void)setDelegate:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)layout;
- (void)updateLayer;
- (void)mouseDown:(id)a0;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)mouseMoved:(id)a0;
- (void)rightMouseDown:(id)a0;
- (void)performLayout;
- (void)setFloating:(BOOL)a0;
- (void)handleMouseDown:(id)a0;
- (void)setNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 delegate:(id)a1;
- (id)initAsGroupHeader:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 node:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a1 delegate:(id)a2;
- (BOOL)isGroupHeader;
- (id)firstRowViewIfAvailable;
- (void)updateCellViews;
- (void)performUpdateLayer;
- (long long)mouseInDivider:(id)a0;
- (id)columnForDivider:(long long)a0;
- (void)updateCursor:(id)a0;
- (void)setNeedsDisplayForColumn:(long long)a0 draggedDelta:(double)a1;

@end
