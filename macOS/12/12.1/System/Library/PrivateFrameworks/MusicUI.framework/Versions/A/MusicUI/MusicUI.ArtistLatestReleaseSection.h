@interface MusicUI.ArtistLatestReleaseSection : MusicUI.GradientFadeView <NSCollectionViewElement, NSDraggingSource> {
    void /* unknown type, empty encoding */ collectionView;
    void /* unknown type, empty encoding */ menuPresenter;
    void /* unknown type, empty encoding */ dragAndDropPresenter;
    void /* unknown type, empty encoding */ lockup;
    void /* unknown type, empty encoding */ objectGraph;
    void /* unknown type, empty encoding */ overlayView;
    void /* unknown type, empty encoding */ overlayConfiguration;
    void /* unknown type, empty encoding */ headlineLabel;
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ artworkView;
    void /* unknown type, empty encoding */ trackingView;
    void /* unknown type, empty encoding */ trackCountLabel;
    void /* unknown type, empty encoding */ addToLibraryButton;
    void /* unknown type, empty encoding */ wasDragging;
}

@property (nonatomic, readonly) BOOL flipped;

- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)layout;
- (BOOL)isFlipped;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mouseExited:(id)a0;
- (void)mouseDragged:(id)a0;
- (void)mouseUp:(id)a0;
- (unsigned long long)draggingSession:(id)a0 sourceOperationMaskForDraggingContext:(long long)a1;

@end
