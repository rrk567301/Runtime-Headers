@class UXTableView;
@protocol UXTableViewDelegate;

@interface UXTableViewController : UXCollectionViewController

@property (readonly, nonatomic) id<UXTableViewDelegate> tableViewDelegate;
@property (readonly, nonatomic) UXTableView *tableView;

+ (Class)collectionViewClass;

- (void)viewDidLayoutSubviews;
- (id)initWithStyle:(long long)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear;
- (void)viewWillAppear;
- (void)_updateContentInsetFromLayoutGuides;
- (void)didUpdateLayoutGuides;
- (id)preferredFirstResponder;

@end
