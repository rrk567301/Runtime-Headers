@interface MusicUI.CircularCheckmarkButton : NSButton {
    void /* unknown type, empty encoding */ isSelected;
    void /* unknown type, empty encoding */ onValueChanged;
    void /* unknown type, empty encoding */ onValueDidRevertToInitialValue;
    void /* unknown type, empty encoding */ initialIsSelected;
    void /* unknown type, empty encoding */ ignoreValueChangedBlocks;
    void /* unknown type, empty encoding */ $__lazy_storage_$_checkmarkImage;
    void /* unknown type, empty encoding */ $__lazy_storage_$_circleImage;
    void /* unknown type, empty encoding */ $__lazy_storage_$_checkmarkImageConfiguration;
    void /* unknown type, empty encoding */ $__lazy_storage_$_circleImageConfiguration;
    void /* unknown type, empty encoding */ $__lazy_storage_$_checkmarkSymbolImageView;
}

- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawFocusRingMask;

@end
