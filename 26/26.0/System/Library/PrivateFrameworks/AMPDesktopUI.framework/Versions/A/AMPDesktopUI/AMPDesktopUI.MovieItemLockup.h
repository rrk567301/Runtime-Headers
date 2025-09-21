@protocol MovieItemLockupModel;

@interface AMPDesktopUI.MovieItemLockup : NSCollectionViewItem {
    void /* unknown type, empty encoding */ artwork;
    void /* unknown type, empty encoding */ mouseDownInside;
}

@property (nonatomic, copy) id representedObject;
@property (nonatomic, retain) id<MovieItemLockupModel> viewModel;
@property (nonatomic) BOOL selected;

- (void)mouseDown:(id)a0;
- (void)mouseUp:(id)a0;
- (void)loadView;
- (BOOL)isSelected;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)prepareForReuse;
- (void).cxx_destruct;
- (void)accessibilityPerformAction:(id)a0;
- (void)keyUp:(id)a0;

@end
