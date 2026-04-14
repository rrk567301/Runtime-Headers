@class NSValue, FI_TTagColumnTableViewController;

@interface FI_TTagColumnRowView : NSTableRowView {
    struct TNSWeakPtr<FI_TTagColumnTableViewController, void> { NSValue *fWeakObject; } _weakTableViewController;
}

@property (weak, nonatomic) FI_TTagColumnTableViewController *tableViewController;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)setSelected:(BOOL)a0;
- (void)setTableViewController:(id)a0;
- (id)tableViewController;

@end
