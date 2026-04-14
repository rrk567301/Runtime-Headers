@interface MUIAboutCategoriesViewController : NSViewController {
    void /* unknown type, empty encoding */ daemonInterface;
    void /* unknown type, empty encoding */ provider;
    void /* unknown type, empty encoding */ categoriesView;
}

@property (nonatomic, weak) void /* function */ delegate;

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)viewWillAppear;
- (id)initWithDaemonInterface:(id)a0 delegate:(id)a1;

@end
