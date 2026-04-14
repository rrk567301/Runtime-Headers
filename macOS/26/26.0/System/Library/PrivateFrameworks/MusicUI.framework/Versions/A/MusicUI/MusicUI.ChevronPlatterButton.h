@interface MusicUI.ChevronPlatterButton : MusicUI.HoverableButton {
    void /* unknown type, empty encoding */ backgroundMaterialView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_imageView;
    void /* unknown type, empty encoding */ direction;
    void /* unknown type, empty encoding */ chevronImage;
}

@property (nonatomic) BOOL enabled;

- (id)accessibilityLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isEnabled;
- (BOOL)resignFirstResponder;
- (void)layout;
- (BOOL)becomeFirstResponder;
- (void).cxx_destruct;

@end
