@class NSColor, NSString, NSFont, NSParagraphStyle;

@interface CSKBadgeLabel : NSView

@property (retain, nonatomic) NSParagraphStyle *paragrapheStyle;
@property (copy, nonatomic) NSString *labelString;
@property (retain, nonatomic) NSFont *labelFont;
@property (retain, nonatomic) NSColor *labelColor;
@property (retain, nonatomic) NSColor *labelBackgroundColor;

- (void)_commonInit;
- (id)initWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)init;
- (id)_labelAttributes;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_labelRectForLabelSize:(struct CGSize { double x0; double x1; })a0 containerRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

@end
