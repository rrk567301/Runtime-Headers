@interface SwiftUI.ListTableRowView : NSTableRowView {
    void /* unknown type, empty encoding */ backgroundHost;
    void /* unknown type, empty encoding */ defaultBackgroundColor;
    void /* unknown type, empty encoding */ separatorConfiguration;
    void /* unknown type, empty encoding */ _defaultSeparatorConfiguration;
    void /* unknown type, empty encoding */ _defaultSeparatorInsets;
    void /* unknown type, empty encoding */ defaultUnemphasizedSelectionColor;
    void /* unknown type, empty encoding */ _isLastRow;
}

@property (nonatomic) BOOL selected;
@property (nonatomic) BOOL needsDisplay;
@property (nonatomic, readonly) double _floatingGroupRowPopLineOffsetFromTop;
@property (nonatomic, readonly) BOOL _wantsDefaultBackgroundDrawingBehavior;

- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)secondarySelectedControlColor;
- (void)drawSeparatorInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isSelected;
- (void)drawBackgroundInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)drawsSeparator;

@end
