@interface Safari.CompletionListCollectionViewSearchUIItem : NSCollectionViewItem {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ controller;
    void /* unknown type, empty encoding */ metrics;
    void /* unknown type, empty encoding */ shouldUseTrackingArea;
    void /* unknown type, empty encoding */ searchUIItemAccessibilityView;
    void /* unknown type, empty encoding */ backingView;
    void /* unknown type, empty encoding */ selectionView;
    void /* unknown type, empty encoding */ platterView;
    void /* unknown type, empty encoding */ trackingArea;
    void /* unknown type, empty encoding */ sfSearchResult;
    void /* unknown type, empty encoding */ searchUIView;
    void /* unknown type, empty encoding */ shouldUpdateSearchUICellHeight;
    void /* unknown type, empty encoding */ shouldShowPlatter;
}

@property (nonatomic) BOOL selected;

- (BOOL)isSelected;
- (void)viewDidLoad;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)loadView;
- (void)mouseEntered:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)mouseMoved:(id)a0;

@end
