@interface MusicUI.ContainerDetailHeaderLockupComponentItem : NSCollectionViewItem {
    void /* unknown type, empty encoding */ textArea;
    void /* unknown type, empty encoding */ descriptionTextField;
    void /* unknown type, empty encoding */ artworkContainer;
    void /* unknown type, empty encoding */ buttonBar;
    void /* unknown type, empty encoding */ siriBannerView;
    void /* unknown type, empty encoding */ badgeView;
    void /* unknown type, empty encoding */ videoLooperDidChangeHandler;
    void /* unknown type, empty encoding */ automaticReloadTriggers;
}

- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)loadView;
- (void)viewWillLayout;

@end
