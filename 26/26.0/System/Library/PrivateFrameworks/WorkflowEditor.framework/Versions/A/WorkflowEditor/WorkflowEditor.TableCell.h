@interface WorkflowEditor.TableCell : NSView {
    void /* unknown type, empty encoding */ contentView;
    void /* unknown type, empty encoding */ currentLayoutAtomIndex;
    void /* unknown type, empty encoding */ host;
    void /* unknown type, empty encoding */ isHovered;
    void /* unknown type, empty encoding */ isSelected;
    void /* unknown type, empty encoding */ isEmphasized;
}

- (void)invalidateIntrinsicContentSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layout;
- (id)initWithCoder:(id)a0;
- (void)prepareForReuse;
- (void).cxx_destruct;

@end
