@class NSView, NSMutableArray, IANewAccountChooserRadioRowItem;

@interface IANewAccountChooserRadioCollection : NSObject <IANewAccountChooserRadioRowItemDelegateProtocol> {
    NSMutableArray *_items;
    NSView *_view;
}

@property (retain) IANewAccountChooserRadioRowItem *selectedItem;

- (id)initWithItems:(id)a0;
- (double)rowHeight;
- (void).cxx_destruct;
- (id)view;
- (id)_selectedItem;
- (void)radioButtonClicked:(id)a0;

@end
