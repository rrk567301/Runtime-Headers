@class NSView, NSMutableArray, IANewAccountChooserRadioRowItem;

@interface IANewAccountChooserRadioCollection : NSObject <IANewAccountChooserRadioRowItemDelegateProtocol> {
    NSMutableArray *_items;
    NSView *_view;
}

@property (retain) IANewAccountChooserRadioRowItem *selectedItem;

- (id)initWithItems:(id)a0;
- (void).cxx_destruct;
- (id)view;
- (double)rowHeight;
- (id)_selectedItem;
- (void)radioButtonClicked:(id)a0;

@end
