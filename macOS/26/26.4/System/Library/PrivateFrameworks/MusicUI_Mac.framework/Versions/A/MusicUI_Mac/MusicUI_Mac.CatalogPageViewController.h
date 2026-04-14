@interface MusicUI_Mac.CatalogPageViewController : NSViewController {
    void /* unknown type, empty encoding */ isForModalPresentation;
    void /* unknown type, empty encoding */ contentView;
    void /* unknown type, empty encoding */ objectGraph;
    void /* unknown type, empty encoding */ overlayViewController;
    void /* unknown type, empty encoding */ catalogPagePresenter;
    void /* unknown type, empty encoding */ eventSubscription;
    void /* unknown type, empty encoding */ willBeginSheetToken;
    void /* unknown type, empty encoding */ didEndSheetToken;
}

- (void)viewDidAppear;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)loadView;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (void)viewDidDisappear;
- (void)viewWillAppear;
- (void)viewWillLayout;

@end
