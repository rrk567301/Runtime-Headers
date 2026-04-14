@class NSView, NSMutableArray;

@interface IAAppCheckboxMatrix : NSObject <IAAppCheckboxMatrixRowItemDelegateProtocol> {
    NSMutableArray *_items;
    NSView *_view;
}

@property (retain) id delegate;

- (id)initWithItems:(id)a0;
- (void).cxx_destruct;
- (id)view;
- (double)rowHeight;
- (id)selectedItems;
- (void)checkboxClicked:(id)a0;
- (id)itemForApp:(id)a0;
- (void)syncUI;

@end
