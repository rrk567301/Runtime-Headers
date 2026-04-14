@interface Safari.CompletionListCollectionViewHostingItem : NSCollectionViewItem {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ metrics;
    void /* unknown type, empty encoding */ shouldUseTrackingArea;
    void /* unknown type, empty encoding */ hostingAccessibilityView;
    void /* unknown type, empty encoding */ hostingBackingView;
    void /* unknown type, empty encoding */ selectionView;
    void /* unknown type, empty encoding */ trackingArea;
    void /* unknown type, empty encoding */ hostingView;
}

@property (nonatomic) BOOL selected;

- (BOOL)isSelected;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)loadView;
- (void)viewDidLoad;
- (void)mouseEntered:(id)a0;
- (void)prepareForReuse;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)mouseMoved:(id)a0;

@end
