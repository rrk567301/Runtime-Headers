@class NSImageView, NSTextField, NSImage, NSStackView;

@interface ThreadDisclosureControl : NSControl

@property (retain, nonatomic) NSTextField *countLabel;
@property (retain, nonatomic) NSImageView *disclosureImageView;
@property (retain, nonatomic) NSStackView *stackView;
@property (readonly, nonatomic) NSImage *openThreadImage;
@property (readonly, nonatomic) NSImage *closedThreadImage;
@property (nonatomic, getter=isOpen) BOOL open;
@property (nonatomic) long long count;
@property (nonatomic, getter=isCountHidden) BOOL countHidden;

- (void)mouseUp:(id)a0;
- (void)_commonInit;
- (id)accessibilityLabel;
- (void)setFont:(id)a0;
- (id)accessibilityValue;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setHighlighted:(BOOL)a0;
- (id)init;
- (id)accessibilityRole;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)mouseDown:(id)a0;
- (BOOL)isAccessibilitySelectorAllowed:(SEL)a0;
- (BOOL)acceptsFirstMouse:(id)a0;
- (id)accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)accessibilityPerformPress;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;

@end
