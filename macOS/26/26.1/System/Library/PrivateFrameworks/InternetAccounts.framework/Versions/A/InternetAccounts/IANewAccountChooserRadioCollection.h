@class NSView, NSMutableArray, IANewAccountChooserRadioRowItem;

@interface IANewAccountChooserRadioCollection : NSObject <IANewAccountChooserRadioRowItemDelegateProtocol> {
    NSMutableArray *_items;
    NSView *_view;
}

@property (retain) IANewAccountChooserRadioRowItem *selectedItem;

- (id)initWithItems:(id)a0;
- (double)rowHeight;
- (id)view;
- (void).cxx_destruct;
- (id)_selectedItem;
- (void)radioButtonClicked:(id)a0;

@end
