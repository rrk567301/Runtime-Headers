@interface SwiftUI.ListTableCellView : NSTableCellView {
    void /* unknown type, empty encoding */ selectionBehavior;
    void /* unknown type, empty encoding */ secondaryBehavior;
    void /* unknown type, empty encoding */ secondaryNavigationBehavior;
    void /* unknown type, empty encoding */ viewListID;
    void /* unknown type, empty encoding */ host;
    void /* unknown type, empty encoding */ enclosingTableView;
    void /* unknown type, empty encoding */ delegate;
}

@property (nonatomic) long long rowSizeStyle;
@property (nonatomic, readonly) double firstBaselineOffsetFromTop;

- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
