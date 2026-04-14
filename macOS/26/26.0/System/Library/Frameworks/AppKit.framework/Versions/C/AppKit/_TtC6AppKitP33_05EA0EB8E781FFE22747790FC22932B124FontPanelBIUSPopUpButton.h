@interface _TtC6AppKitP33_05EA0EB8E781FFE22747790FC22932B124FontPanelBIUSPopUpButton : NSPopUpButton {
    void /* unknown type, empty encoding */ effectsBox;
    void /* unknown type, empty encoding */ conversionHandler;
    void /* unknown type, empty encoding */ $__lazy_storage_$_titleItem;
    void /* unknown type, empty encoding */ $__lazy_storage_$_boldItem;
    void /* unknown type, empty encoding */ $__lazy_storage_$_italicItem;
    void /* unknown type, empty encoding */ $__lazy_storage_$_underlineItem;
    void /* unknown type, empty encoding */ $__lazy_storage_$_doubleUnderlineItem;
    void /* unknown type, empty encoding */ $__lazy_storage_$_underlineColorItem;
    void /* unknown type, empty encoding */ $__lazy_storage_$_strikethroughItem;
    void /* unknown type, empty encoding */ $__lazy_storage_$_doubleStrikethroughItem;
    void /* unknown type, empty encoding */ $__lazy_storage_$_strikethroughColorItem;
}

@property (nonatomic, readonly) unsigned long long preferredGlassBehavior;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 pullsDown:(BOOL)a1;
- (id)convertFont:(id)a0;
- (void)onSelectionChange:(id)a0;

@end
