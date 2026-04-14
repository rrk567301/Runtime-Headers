@interface VideosUI.UpNextViewController : VUIBaseViewController <VideosUI.VUICollectionViewHoverDelegate> {
    void /* unknown type, empty encoding */ collectionImpressioner;
    void /* unknown type, empty encoding */ backgroundMediaController;
    void /* unknown type, empty encoding */ initialMediaLoaded;
    void /* unknown type, empty encoding */ focusedMediaInfo;
    void /* unknown type, empty encoding */ horizontalStackViewController;
    void /* unknown type, empty encoding */ $__lazy_storage_$_gradientView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_gradientLayer;
}

- (BOOL)vuiCollectionView:(id)a0 shouldHoverItemAt:(id)a1;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)vui_viewDidLayoutSubviews;
- (void)vui_viewDidLoad;

@end
