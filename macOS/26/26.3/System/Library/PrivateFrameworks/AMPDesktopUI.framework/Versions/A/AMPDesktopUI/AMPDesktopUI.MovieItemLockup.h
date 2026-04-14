@protocol MovieItemLockupModel;

@interface AMPDesktopUI.MovieItemLockup : NSCollectionViewItem {
    void /* unknown type, empty encoding */ artwork;
    void /* unknown type, empty encoding */ mouseDownInside;
}

@property (nonatomic, copy) id representedObject;
@property (nonatomic, retain) id<MovieItemLockupModel> viewModel;
@property (nonatomic) BOOL selected;

- (void)mouseUp:(id)a0;
- (BOOL)isSelected;
- (void)prepareForReuse;
- (void).cxx_destruct;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)mouseDown:(id)a0;
- (void)loadView;
- (void)accessibilityPerformAction:(id)a0;
- (void)keyUp:(id)a0;

@end
