@class NSColor, NSImage, NSString;

@interface FRWindowBackgroundView : NSView

@property (nonatomic) long long backgroundStyle;
@property (copy, nonatomic) NSColor *backgroundColor;
@property (retain, nonatomic) NSImage *icon;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subtitle;

- (void).cxx_destruct;
- (BOOL)isOpaque;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_drawEtchedString:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 withAttributes:(id)a2;

@end
