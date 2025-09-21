@class NSColor;

@interface SwiftUI.SwiftUITableRowView : NSTableRowView {
    void /* unknown type, empty encoding */ defaultBackgroundColor;
    void /* unknown type, empty encoding */ separatorConfiguration;
    void /* unknown type, empty encoding */ _defaultSeparatorConfiguration;
    void /* unknown type, empty encoding */ _defaultSeparatorInsets;
    void /* unknown type, empty encoding */ defaultUnemphasizedSelectionColor;
    void /* unknown type, empty encoding */ _isLastRow;
    void /* unknown type, empty encoding */ onHoverAction;
    void /* unknown type, empty encoding */ activeTrackingArea;
    void /* unknown type, empty encoding */ rowSpanHost;
    void /* unknown type, empty encoding */ isHovered;
}

@property (nonatomic) char selected;
@property (nonatomic) char emphasized;
@property (nonatomic, readonly) char _wantsDefaultBackgroundDrawingBehavior;
@property (nonatomic, retain) NSColor *separatorColor;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } _separatorRect;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)drawBackgroundInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawSeparatorInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (char)drawsSeparator;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (char)isEmphasized;
- (char)isSelected;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (id)secondarySelectedControlColor;
- (void)updateTrackingAreas;

@end
