@class FI_TTagColumnTableViewController;

@interface FI_TTagColumnRowView : NSTableRowView {
    struct TNSWeakPtr<FI_TTagColumnTableViewController> { FI_TTagColumnTableViewController *fWeakObject; } _weakTableViewController;
}

@property (weak, nonatomic) FI_TTagColumnTableViewController *tableViewController;

- (void)setSelected:(BOOL)a0;
- (id).cxx_construct;
- (void).cxx_destruct;

@end
