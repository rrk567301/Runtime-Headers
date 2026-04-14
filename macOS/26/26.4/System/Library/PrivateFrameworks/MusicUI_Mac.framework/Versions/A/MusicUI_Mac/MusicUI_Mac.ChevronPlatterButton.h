@interface MusicUI_Mac.ChevronPlatterButton : MusicUI_Mac.HoverableButton {
    void /* unknown type, empty encoding */ backgroundMaterialView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_imageView;
    void /* unknown type, empty encoding */ direction;
    void /* unknown type, empty encoding */ chevronImage;
}

@property (nonatomic) BOOL enabled;

- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (void)layout;
- (BOOL)isEnabled;
- (id)accessibilityLabel;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
