@class FI_TTagColumnTableViewController;

@interface FI_TTagColumnRowView : NSTableRowView {
    struct TNSWeakPtr<FI_TTagColumnTableViewController> { FI_TTagColumnTableViewController *fWeakObject; } _weakTableViewController;
}

@property (weak, nonatomic) FI_TTagColumnTableViewController *tableViewController;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)setSelected:(char)a0;

@end
