@interface VideosUI.PaginatedSwipingContainerView : VUIBaseView {
    void /* unknown type, empty encoding */ metadataPresenter;
    void /* unknown type, empty encoding */ isSwipeEnabled;
    void /* unknown type, empty encoding */ mediaViewOffset;
    void /* unknown type, empty encoding */ previousTranslation;
    void /* unknown type, empty encoding */ shouldHandleSwipe;
    void /* unknown type, empty encoding */ disableBackgroundExtension;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ $__lazy_storage_$_logPrefix;
    void /* unknown type, empty encoding */ contentExtensionEnabled;
    void /* unknown type, empty encoding */ $__lazy_storage_$_mediaContainerView;
    void /* unknown type, empty encoding */ mediaView;
    void /* unknown type, empty encoding */ metadataView;
    void /* unknown type, empty encoding */ gradientView;
}

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)scrollWheel:(id)a0;
- (struct CGSize { double x0; double x1; })vui_layoutSubviews:(struct CGSize { double x0; double x1; })a0 computationOnly:(BOOL)a1;

@end
