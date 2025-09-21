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

@property (nonatomic) BOOL selected;
@property (nonatomic) BOOL emphasized;
@property (nonatomic, readonly) BOOL _wantsDefaultBackgroundDrawingBehavior;
@property (nonatomic, retain) NSColor *separatorColor;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } _separatorRect;

- (BOOL)isSelected;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isEmphasized;
- (void)updateTrackingAreas;
- (id)initWithCoder:(id)a0;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void).cxx_destruct;
- (long long)accessibilityColumnCount;
- (void)drawBackgroundInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawSeparatorInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)drawsSeparator;
- (id)secondarySelectedControlColor;

@end
