@class NSView, NSMutableArray, IANewAccountChooserRadioRowItem;

@interface IANewAccountChooserRadioCollection : NSObject <IANewAccountChooserRadioRowItemDelegateProtocol> {
    NSMutableArray *_items;
    NSView *_view;
}

@property (retain) IANewAccountChooserRadioRowItem *selectedItem;

- (void).cxx_destruct;
- (id)view;
- (id)_selectedItem;
- (id)initWithItems:(id)a0;
- (double)rowHeight;
- (void)radioButtonClicked:(id)a0;

@end
