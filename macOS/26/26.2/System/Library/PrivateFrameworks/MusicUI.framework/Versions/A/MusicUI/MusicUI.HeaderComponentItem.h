@interface MusicUI.HeaderComponentItem : NSCollectionViewItem {
    void /* unknown type, empty encoding */ automaticReloadTriggers;
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ contentDescriptor;
    void /* unknown type, empty encoding */ contextMenuButton;
    void /* unknown type, empty encoding */ menuPresenter;
    void /* unknown type, empty encoding */ textAlignment;
}

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)loadView;
- (id)initWithCoder:(id)a0;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (void)viewWillLayout;

@end
