@class NSView, NSMutableArray;

@interface IAAppCheckboxMatrix : NSObject <IAAppCheckboxMatrixRowItemDelegateProtocol> {
    NSMutableArray *_items;
    NSView *_view;
}

@property (retain) id delegate;

- (void).cxx_destruct;
- (id)view;
- (double)rowHeight;
- (id)selectedItems;
- (id)initWithItems:(id)a0;
- (void)syncUI;
- (void)checkboxClicked:(id)a0;
- (id)itemForApp:(id)a0;

@end
