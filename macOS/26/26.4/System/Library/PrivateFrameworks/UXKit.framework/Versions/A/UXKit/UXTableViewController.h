@class UXTableView;
@protocol UXTableViewDelegate;

@interface UXTableViewController : UXCollectionViewController

@property (readonly, nonatomic) id<UXTableViewDelegate> tableViewDelegate;
@property (readonly, nonatomic) UXTableView *tableView;

+ (Class)collectionViewClass;

- (void)viewDidAppear;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0;
- (id)init;
- (void)viewWillAppear;
- (void)_updateContentInsetFromLayoutGuides;
- (void)didUpdateLayoutGuides;
- (id)preferredFirstResponder;

@end
