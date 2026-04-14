@class CSKHeaderView;

@interface CSKHeaderViewController : NSViewController

@property (weak, nonatomic) CSKHeaderView *headerView;
@property (weak, nonatomic) CSKHeaderView *headerExtendedView;
@property (nonatomic) BOOL showsExtendedView;

- (void)viewDidLoad;
- (void)_commonInit;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)_swapHeaderViews;
- (void)_swapView:(id)a0 withView:(id)a1;
- (void)extendedHeaderExtendActionButtonDidClick:(id)a0;
- (void)headerExtendActionButtonDidClick:(id)a0;

@end
