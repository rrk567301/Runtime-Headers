@protocol PRSTableViewDelegate;

@interface PRSTableView : NSTableView

@property (retain, nonatomic) id<PRSTableViewDelegate> prsTableViewDelegate;

- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)viewDidMoveToSuperview;
- (void)resizeSubviewsWithOldSize:(struct CGSize { double x0; double x1; })a0;

@end
