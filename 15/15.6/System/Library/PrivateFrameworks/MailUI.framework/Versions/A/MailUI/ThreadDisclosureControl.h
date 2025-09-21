@class NSImageView, NSTextField, NSImage, NSStackView;

@interface ThreadDisclosureControl : NSControl

@property (retain, nonatomic) NSTextField *countLabel;
@property (retain, nonatomic) NSImageView *disclosureImageView;
@property (retain, nonatomic) NSStackView *stackView;
@property (readonly, nonatomic) NSImage *openThreadImage;
@property (readonly, nonatomic) NSImage *closedThreadImage;
@property (nonatomic, getter=isOpen) char open;
@property (nonatomic) long long count;
@property (nonatomic, getter=isCountHidden) char countHidden;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (char)isAccessibilitySelectorAllowed:(SEL)a0;
- (void)setHighlighted:(char)a0;
- (void)_commonInit;
- (char)acceptsFirstMouse:(id)a0;
- (id)accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0;
- (id)accessibilityLabel;
- (char)accessibilityPerformPress;
- (id)accessibilityRole;
- (id)accessibilityValue;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (char)isAccessibilityElement;
- (void)mouseDown:(id)a0;
- (void)mouseUp:(id)a0;
- (void)setFont:(id)a0;

@end
