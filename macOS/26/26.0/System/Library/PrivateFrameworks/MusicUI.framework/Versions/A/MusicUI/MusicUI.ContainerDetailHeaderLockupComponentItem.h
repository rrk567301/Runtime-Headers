@interface MusicUI.ContainerDetailHeaderLockupComponentItem : NSCollectionViewItem {
    void /* unknown type, empty encoding */ textArea;
    void /* unknown type, empty encoding */ descriptionTextView;
    void /* unknown type, empty encoding */ artworkContainer;
    void /* unknown type, empty encoding */ buttonBar;
    void /* unknown type, empty encoding */ siriBannerView;
    void /* unknown type, empty encoding */ badgeView;
    void /* unknown type, empty encoding */ aggregatedDownloadFetchTask;
    void /* unknown type, empty encoding */ objectGraph;
    void /* unknown type, empty encoding */ videoLooperDidChangeHandler;
    void /* unknown type, empty encoding */ automaticReloadTriggers;
}

- (id)accessibilityLabel;
- (void)loadView;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidAppear;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)viewWillLayout;

@end
