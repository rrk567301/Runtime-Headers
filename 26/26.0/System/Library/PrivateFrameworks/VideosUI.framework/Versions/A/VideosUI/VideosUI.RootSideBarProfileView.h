@interface VideosUI.RootSideBarProfileView : VUIBaseView {
    void /* unknown type, empty encoding */ $__lazy_storage_$_titleLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_titleLabelLayout;
    void /* unknown type, empty encoding */ $__lazy_storage_$_subtitleLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_subtitleLabelLayout;
    void /* unknown type, empty encoding */ imageView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_imageLayout;
    void /* unknown type, empty encoding */ $__lazy_storage_$_appleAccountString;
    void /* unknown type, empty encoding */ $__lazy_storage_$_signInString;
    void /* unknown type, empty encoding */ $__lazy_storage_$_accountSettingsVoiceOverString;
    void /* unknown type, empty encoding */ $__lazy_storage_$_logPrefix;
}

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)accountStoreDidChange:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)handleTap:(id)a0;
- (void)profileImageDidChange:(id)a0;
- (struct CGSize { double x0; double x1; })vui_layoutSubviews:(struct CGSize { double x0; double x1; })a0 computationOnly:(BOOL)a1;

@end
