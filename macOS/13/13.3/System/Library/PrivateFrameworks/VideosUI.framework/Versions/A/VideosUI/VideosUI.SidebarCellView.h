@interface VideosUI.SidebarCellView : NSTableCellView {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ badgeLabel;
    void /* unknown type, empty encoding */ ejectButton;
    void /* unknown type, empty encoding */ checkboxButton;
    void /* unknown type, empty encoding */ isChecked;
    void /* unknown type, empty encoding */ viewLayout;
}

@property (nonatomic, readonly) BOOL flipped;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } fittingSize;

- (void)handleCheckboxButtonTap;
- (void)handleEjectButtonTap;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isFlipped;

@end
