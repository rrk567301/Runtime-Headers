@interface MusicUI.CatalogPageViewController : NSViewController {
    void /* unknown type, empty encoding */ isForModalPresentation;
    void /* unknown type, empty encoding */ contentView;
    void /* unknown type, empty encoding */ objectGraph;
    void /* unknown type, empty encoding */ overlayViewController;
    void /* unknown type, empty encoding */ catalogPagePresenter;
    void /* unknown type, empty encoding */ eventSubscription;
    void /* unknown type, empty encoding */ willBeginSheetToken;
    void /* unknown type, empty encoding */ didEndSheetToken;
}

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)loadView;
- (id)initWithCoder:(id)a0;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)dealloc;
- (void)viewDidDisappear;
- (void)viewWillAppear;
- (void)viewWillLayout;

@end
