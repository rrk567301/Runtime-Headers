@interface RemindersUICore.TTRMComponentViewGroupComponentView : NSView <NSStackViewDelegate> {
    void /* unknown type, empty encoding */ widthConstraints;
    void /* unknown type, empty encoding */ viewInfoByView;
}

@property (nonatomic, weak) void /* function */ componentContainerView;
@property (nonatomic, weak) void /* function */ childrenStackView;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)awakeFromNib;
- (void)stackView:(id)a0 didReattachViews:(id)a1;
- (void)stackView:(id)a0 willDetachViews:(id)a1;

@end
