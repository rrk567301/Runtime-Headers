@class UXTableView;
@protocol UXTableViewDelegate;

@interface UXTableViewController : UXCollectionViewController

@property (readonly, nonatomic) id<UXTableViewDelegate> tableViewDelegate;
@property (readonly, nonatomic) UXTableView *tableView;

+ (Class)collectionViewClass;

- (id)initWithStyle:(long long)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidAppear;
- (void)viewDidLayoutSubviews;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (id)init;
- (void)viewWillAppear;
- (void)_updateContentInsetFromLayoutGuides;
- (void)didUpdateLayoutGuides;
- (id)preferredFirstResponder;

@end
