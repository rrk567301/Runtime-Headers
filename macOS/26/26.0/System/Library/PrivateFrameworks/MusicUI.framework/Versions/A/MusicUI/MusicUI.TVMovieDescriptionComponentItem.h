@interface MusicUI.TVMovieDescriptionComponentItem : NSCollectionViewItem {
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ headingLabel;
    void /* unknown type, empty encoding */ contextMenuButton;
    void /* unknown type, empty encoding */ playButton;
    void /* unknown type, empty encoding */ menuPresenter;
}

- (void)loadView;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)viewWillLayout;

@end
