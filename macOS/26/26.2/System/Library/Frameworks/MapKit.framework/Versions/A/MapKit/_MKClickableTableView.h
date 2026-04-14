@protocol _MKClickableTableViewDelegate;

@interface _MKClickableTableView : NSTableView

@property (weak, nonatomic) id<_MKClickableTableViewDelegate> clickableDelegate;

- (void)mouseDown:(id)a0;
- (void).cxx_destruct;

@end
