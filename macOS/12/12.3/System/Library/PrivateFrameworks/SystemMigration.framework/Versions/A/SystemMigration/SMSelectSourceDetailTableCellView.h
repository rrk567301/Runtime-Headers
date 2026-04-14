@class SMSelectSourceDetailTableDelegate;

@interface SMSelectSourceDetailTableCellView : NSTableCellView

@property BOOL selected;
@property SMSelectSourceDetailTableDelegate *tableDelegate;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;

@end
