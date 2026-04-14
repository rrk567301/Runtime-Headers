@interface VideosUI.CatchUpToLiveMetadataViewController : NSViewController <NSGestureRecognizerDelegate> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_metadataInteractor;
    void /* unknown type, empty encoding */ $__lazy_storage_$_metadataPresenter;
    void /* unknown type, empty encoding */ $__lazy_storage_$_metadataView;
    void /* unknown type, empty encoding */ pageControlBackground;
    void /* unknown type, empty encoding */ pageControl;
    void /* unknown type, empty encoding */ indicatorLayout;
    void /* unknown type, empty encoding */ $__lazy_storage_$_previousIndicator;
    void /* unknown type, empty encoding */ $__lazy_storage_$_nextIndicator;
    void /* unknown type, empty encoding */ $__lazy_storage_$_clickGesture;
    void /* unknown type, empty encoding */ indexDidChange;
    void /* unknown type, empty encoding */ onClick;
}

- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLayout;
- (void)viewDidLoad;
- (void)viewClickedWithGesture:(id)a0;

@end
