@class NSColor;

@interface OBTemplatePartLinkButton : NSButton

@property (retain, nonatomic) NSColor *titleColor;
@property BOOL displayInfoIcon;

- (void)setAttributedTitle:(id)a0;
- (void)setTitle:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)drawFocusRingMask;
- (void)resetCursorRects;

@end
