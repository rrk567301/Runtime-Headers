@interface WFEditorDrawerHostingViewController : NSViewController {
    void /* unknown type, empty encoding */ hostingViewController;
    void /* unknown type, empty encoding */ dataSource;
    void /* unknown type, empty encoding */ workflow;
    void /* unknown type, empty encoding */ state;
}

@property (nonatomic, weak) void /* unknown type, empty encoding */ delegate;
@property (nonatomic) void /* unknown type, empty encoding */ navigationStyle;
@property (nonatomic, weak) void /* unknown type, empty encoding */ scrollViewObserver;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)loadView;
- (void)viewDidLoad;
- (void)clearSearchBar;
- (void)focusSearchBar;
- (id)initWithHome:(id)a0 workflow:(id)a1 actionSuggester:(id)a2;
- (void)performScrollingTest:(id)a0;

@end
