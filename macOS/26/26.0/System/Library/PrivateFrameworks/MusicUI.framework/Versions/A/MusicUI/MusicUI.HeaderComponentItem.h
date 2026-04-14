@interface MusicUI.HeaderComponentItem : NSCollectionViewItem {
    void /* unknown type, empty encoding */ automaticReloadTriggers;
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ contentDescriptor;
    void /* unknown type, empty encoding */ contextMenuButton;
    void /* unknown type, empty encoding */ menuPresenter;
    void /* unknown type, empty encoding */ textAlignment;
}

- (void)loadView;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidAppear;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)viewWillLayout;

@end
