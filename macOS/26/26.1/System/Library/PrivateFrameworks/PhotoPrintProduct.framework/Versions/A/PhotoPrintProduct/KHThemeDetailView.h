@class UXView, NSString, NSArray, UXLabel, UXCollectionView, NSMutableArray, NSImage, UXImageView;

@interface KHThemeDetailView : UXView <UXCollectionViewDataSource> {
    NSMutableArray *_contentViewConstraints;
    NSMutableArray *_selfConstraints;
    NSMutableArray *_upperLayoutContainerConstraints;
    NSMutableArray *_lowerLayoutContainerConstraints;
    UXCollectionView *_gridView;
    UXView *_contentView;
}

@property (retain, nonatomic) UXImageView *themePreviewImageView;
@property (retain, nonatomic) UXLabel *themeTitleLabel;
@property (retain, nonatomic) UXLabel *themeDescriptionLabel;
@property (retain, nonatomic) UXView *upperHalfLayoutContainerView;
@property (retain, nonatomic) UXView *lowerHalfLayoutContainerView;
@property (retain, nonatomic) NSString *themeTitle;
@property (retain, nonatomic) NSString *themeDescription;
@property (retain, nonatomic) NSImage *themePreviewImage;
@property (retain, nonatomic) NSArray *previewImages;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)commonInit;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateConstraints;
- (void).cxx_destruct;
- (id)init;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end
