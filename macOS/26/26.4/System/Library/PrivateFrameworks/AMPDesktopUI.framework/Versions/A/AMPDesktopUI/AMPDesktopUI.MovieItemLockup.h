@protocol MovieItemLockupModel;

@interface AMPDesktopUI.MovieItemLockup : NSCollectionViewItem {
    void /* unknown type, empty encoding */ artwork;
    void /* unknown type, empty encoding */ mouseDownInside;
}

@property (nonatomic, copy) id representedObject;
@property (nonatomic, retain) id<MovieItemLockupModel> viewModel;
@property (nonatomic) BOOL selected;

- (BOOL)isSelected;
- (void)mouseUp:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)loadView;
- (void)prepareForReuse;
- (void).cxx_destruct;
- (void)mouseDown:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)accessibilityPerformAction:(id)a0;
- (void)keyUp:(id)a0;

@end
