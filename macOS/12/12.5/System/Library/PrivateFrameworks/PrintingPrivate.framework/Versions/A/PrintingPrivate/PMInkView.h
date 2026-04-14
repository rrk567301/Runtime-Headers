@class NSDictionary;

@interface PMInkView : NSView

@property (retain, nonatomic) NSDictionary *suppliesInfo;
@property struct OpaquePMPrinter { } *printer;

- (void)viewDidChangeEffectiveAppearance;
- (id)addStaticText:(id)a0 withAttrs:(id)a1 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 alignment:(long long)a3 axHelp:(id)a4;
- (void)airprintButtonSelected:(id)a0;
- (double)addColor:(id)a0 at:(struct CGPoint { double x0; double x1; })a1 withLevel:(float)a2 low:(float)a3;
- (double)addSRGBColor:(id)a0 at:(struct CGPoint { double x0; double x1; })a1 withLevel:(float)a2 low:(float)a3;
- (void)addLowInkBadgeAt:(struct CGPoint { double x0; double x1; })a0 withTooltip:(id)a1;
- (id)addAirPrintSuppliesButtonAt:(struct CGPoint { double x0; double x1; })a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)markerChangeTimeString:(double)a0;
- (id)addTextViewForString:(id)a0 at:(struct CGPoint { double x0; double x1; })a1 withAttrs:(id)a2 width:(double)a3;
- (id)getWarningToolTip:(id)a0;
- (double)addConsumablesDict:(id)a0 at:(struct CGPoint { double x0; double x1; })a1 withAttrs:(id)a2 titleWidth:(double)a3 warning:(id)a4;

@end
