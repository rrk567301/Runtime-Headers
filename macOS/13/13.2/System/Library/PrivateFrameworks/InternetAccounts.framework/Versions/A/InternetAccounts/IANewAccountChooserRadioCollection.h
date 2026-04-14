@class NSView, NSMutableArray, IANewAccountChooserRadioRowItem;

@interface IANewAccountChooserRadioCollection : NSObject <IANewAccountChooserRadioRowItemDelegateProtocol> {
    NSMutableArray *_items;
    NSView *_view;
}

@property (retain) IANewAccountChooserRadioRowItem *selectedItem;

- (void).cxx_destruct;
- (id)view;
- (double)rowHeight;
- (id)_selectedItem;
- (id)initWithItems:(id)a0;
- (void)radioButtonClicked:(id)a0;

@end
