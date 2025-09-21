@interface RemindersUICore.TTRMCNAvatarView : NSView {
    void /* unknown type, empty encoding */ mouseAction;
    void /* unknown type, empty encoding */ contact;
    void /* unknown type, empty encoding */ isSelected;
    void /* unknown type, empty encoding */ internalAvatarViewController;
}

- (void)mouseDown:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)awakeFromNib;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;

@end
