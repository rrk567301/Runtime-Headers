@interface PaperKit.LinkListItemView : NSView {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ $__lazy_storage_$_imageView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_titleTextField;
    void /* unknown type, empty encoding */ $__lazy_storage_$_subtitleTextField;
    void /* unknown type, empty encoding */ $__lazy_storage_$_addLinkButton;
    void /* unknown type, empty encoding */ linkItem;
}

- (void)updateLayer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)viewDidChangeEffectiveAppearance;
- (void).cxx_destruct;
- (void)didClickAddLinkButton;

@end
