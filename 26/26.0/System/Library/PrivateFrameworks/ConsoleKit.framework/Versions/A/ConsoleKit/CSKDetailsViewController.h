@class CSKHeaderViewController, NSArray, NSString, NSStackView, CSKTabViewController;

@interface CSKDetailsViewController : NSViewController <CSKTabViewControllerDelegate, CSKTabViewControllerDataSource>

@property (weak, nonatomic) NSStackView *contentStackView;
@property (retain, nonatomic) CSKHeaderViewController *headerViewController;
@property (readonly, nonatomic) CSKTabViewController *tabViewController;
@property (retain, nonatomic) NSArray *tabs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)_commonInit;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)numberOfTabsInTabViewController:(id)a0;
- (id)tabViewController:(id)a0 itemAtIndex:(unsigned long long)a1;
- (id)tabViewController:(id)a0 viewForTabItemAtIndex:(unsigned long long)a1;

@end
